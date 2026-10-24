--- examples/freebsd/freebsd_sys_stats.c.orig	2026-07-09 15:43:01 UTC
+++ examples/freebsd/freebsd_sys_stats.c
@@ -0,0 +1,96 @@
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
+extern void setup_intrcnt_data(void);
+extern void populate_intrcnt_data(struct perfetto_protos_SysStats* sys_stat);
+
+extern void setup_disk_data(void);
+extern void populate_disk_data(struct perfetto_protos_SysStats* sys_stat);
+
+extern void setup_cpu_data(void);
+extern void populate_cpu_data(struct perfetto_protos_SysStats* sys_stat);
+extern void populate_cpu_freq_data(struct perfetto_protos_SysStats* sys_stat);
+extern void populate_cpu_freq_idle(struct perfetto_protos_SysStats* sys_stat);
+
+static struct PerfettoDs custom = PERFETTO_DS_INIT();
+
+static uint64_t get_current_time_ns(void) {
+  struct timespec ts;
+
+  (void)clock_gettime(CLOCK_BOOTTIME, &ts);
+
+  return (((uint64_t)ts.tv_sec * 1000000000ULL) + ts.tv_nsec);
+}
+
+int main(void) {
+  struct PerfettoProducerInitArgs args = PERFETTO_PRODUCER_INIT_ARGS_INIT();
+  args.backends = PERFETTO_BACKEND_SYSTEM;
+  PerfettoProducerInit(args);
+
+  /* GEOM for disk stats */
+  setup_disk_data();
+
+  /* intr setup */
+  setup_intrcnt_data();
+
+  /* cpu setup */
+  setup_cpu_data();
+
+  PerfettoDsRegister(&custom, "freebsd.sys_stats", PerfettoDsParamsDefault());
+
+  for (;;) {
+    PERFETTO_DS_TRACE(custom, ctx) {
+      struct PerfettoDsRootTracePacket root;
+      PerfettoDsTracerPacketBegin(&ctx, &root);
+
+      perfetto_protos_TracePacket_set_timestamp(&root.msg,
+                                                get_current_time_ns());
+      {
+        struct perfetto_protos_SysStats sys_stats;
+
+        perfetto_protos_TracePacket_begin_sys_stats(&root.msg, &sys_stats);
+
+        populate_disk_data(&sys_stats);
+        populate_intrcnt_data(&sys_stats);
+        populate_cpu_data(&sys_stats);
+        populate_cpu_freq_data(&sys_stats);
+        populate_cpu_freq_idle(&sys_stats);
+
+        perfetto_protos_TracePacket_end_sys_stats(&root.msg, &sys_stats);
+      }
+      PerfettoDsTracerPacketEnd(&ctx, &root);
+    }
+    // 100ms sleep
+    usleep(100 * 1000);
+    // usleep(250 * 1000);
+    // sleep(1);
+  }
+}
