--- examples/freebsd/freebsd_sys_stats_disk.c.orig	2026-07-09 15:43:01 UTC
+++ examples/freebsd/freebsd_sys_stats_disk.c
@@ -0,0 +1,152 @@
+/*
+ * Copyright (C) 2022 The Android Open Source Project
+ *
+ * Licensed under the Apache License, Version 2.0 (the "License");
+ * you may not use this file except in compliance with the License.
+ * You may obtain a copy of the License at
+ *
+ *      http://www.apache.org/licenses/LICENSE-2.0
+ *
+ * Unless required by applicable law or agreed to in writing, software
+ * distributed under the License is distributed on an "AS IS" BASIS,
+ * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
+ * See the License for the specific language governing permissions and
+ * limitations under the License.
+ */
+
+#include <err.h>
+#include <errno.h>
+#include <time.h>
+#include <unistd.h>
+
+#include <devstat.h>
+#include <libgeom.h>
+#include <stdio.h>
+#include <sys/sysctl.h>
+
+#include "perfetto/public/data_source.h"
+#include "perfetto/public/producer.h"
+#include "perfetto/public/protos/trace/sys_stats/sys_stats.pzc.h"
+#include "perfetto/public/protos/trace/trace_packet.pzc.h"
+
+/*
+ * TODO!
+ *
+ * The trace analyser assumes a linux-ism that /proc/diskstats always
+ * uses 512 byte sector sizes - so for non-512 byte platforms we need
+ * to re-normalise them to 512 sector counts before we push it up.
+ *
+ * Are "discards" in linux procstat the same as _FREE in devstat?
+ *
+ * Maybe see if we can add an optional field to the perfetto trace
+ * record for transfer amount in bytes? So we can populate that,
+ * and then teach the trace processor to believe that from us
+ * rather than synthesise it.
+ *
+ * The synthesized read/write values look a bit trash; please do
+ * a deeper dive into the correctness of these values and
+ * that they match what the linux provider is getting from
+ * /proc/diskstats .
+ */
+
+struct {
+  struct gmesh gmp;
+  struct devstat *gsp, *gsq;
+  void *sp, *sq;
+  struct timespec tp, tq;
+  float dt;
+} geom_info;
+
+void populate_disk_data(struct perfetto_protos_SysStats* sys_stat) {
+  struct gident* gid;
+  char devname[4096];
+  uint64_t q_len;
+  uint64_t tr_rx, tr_wr, by_rx, by_wr;
+  long double du_rx, du_wr;
+
+  geom_info.sp = geom_stats_snapshot_get();
+  if (geom_info.sp == NULL) /* XXX error */
+    return;
+  geom_stats_snapshot_timestamp(geom_info.sp, &geom_info.tp);
+
+  geom_info.dt = geom_info.tp.tv_sec - geom_info.tq.tv_sec;
+  geom_info.dt += (geom_info.tp.tv_nsec - geom_info.tq.tv_nsec) * 1e-9;
+  geom_info.tq = geom_info.tp;
+
+  geom_stats_snapshot_reset(geom_info.sp);
+  geom_stats_snapshot_reset(geom_info.sq);
+
+  for (;;) {
+    struct perfetto_protos_SysStats_DiskStat disk_stats;
+
+    geom_info.gsp = geom_stats_snapshot_next(geom_info.sp);
+    geom_info.gsq = geom_stats_snapshot_next(geom_info.sq);
+
+    if (geom_info.gsp == NULL || geom_info.gsq == NULL) {
+      break;
+    }
+    if (geom_info.gsp->id == NULL) {
+      continue;
+    }
+
+    /* gstat will delete/reload the tree; here for now just skip */
+    gid = geom_lookupid(&geom_info.gmp, geom_info.gsp->id);
+    if (gid == NULL) {
+      continue;
+    }
+
+    /* only consumers */
+    if (gid->lg_what != ISPROVIDER) {
+      continue;
+    }
+    /* only physical devices for now */
+    /* note: this EXPECTS it's a provider! */
+    if (((struct gprovider*)(gid->lg_ptr))->lg_geom->lg_rank != 1) {
+      continue;
+    }
+    /* populate the name - again expects its a provider */
+    snprintf(devname, sizeof(devname), "%s",
+             ((struct gprovider*)(gid->lg_ptr))->lg_name);
+
+    /* calculate statistics over the interval */
+    devstat_compute_statistics(
+        geom_info.gsp, NULL, geom_info.dt, DSM_QUEUE_LENGTH, &q_len,
+        DSM_TOTAL_BLOCKS_READ, &tr_rx, DSM_TOTAL_DURATION_READ, &du_rx,
+        DSM_TOTAL_BYTES_READ, &by_rx, DSM_TOTAL_BLOCKS_WRITE, &tr_wr,
+        DSM_TOTAL_DURATION_WRITE, &du_wr, DSM_TOTAL_BYTES_WRITE, &by_wr,
+        DSM_NONE);
+
+    // printf("disk: %s, sect read/write %lu/%lu, bytes read/write %lu/%lu, dur
+    // %Lf/%Lf\n", devname, tr_rx, tr_wr, by_rx, by_wr, du_rx, du_wr);
+
+    /* Populate a disk stat entry */
+    perfetto_protos_SysStats_begin_disk_stat(sys_stat, &disk_stats);
+
+    perfetto_protos_SysStats_DiskStat_set_device_name(&disk_stats, devname,
+                                                      strlen(devname));
+    perfetto_protos_SysStats_DiskStat_set_read_sectors(&disk_stats, tr_rx);
+    perfetto_protos_SysStats_DiskStat_set_read_time_ms(
+        &disk_stats, (uint64_t)(du_rx * 1000));
+    perfetto_protos_SysStats_DiskStat_set_write_sectors(&disk_stats, tr_wr);
+    perfetto_protos_SysStats_DiskStat_set_write_time_ms(
+        &disk_stats, (uint64_t)(du_wr * 1000));
+    /* todo: discard_sectors */
+    /* todo: discard_time_ms */
+    /* todo: flush_count */
+    /* todo: flush_time_ms */
+
+    perfetto_protos_SysStats_end_disk_stat(sys_stat, &disk_stats);
+
+    *geom_info.gsq = *geom_info.gsp;
+    geom_stats_snapshot_free(geom_info.sp);
+  }
+}
+
+void setup_disk_data(void) {
+  /* GEOM for disk stats */
+  geom_gettree(&geom_info.gmp);
+  geom_stats_open();
+  /* Get initial disk snapshot */
+  geom_info.sq = geom_stats_snapshot_get();
+  geom_stats_snapshot_timestamp(geom_info.sq, &geom_info.tq);
+}
