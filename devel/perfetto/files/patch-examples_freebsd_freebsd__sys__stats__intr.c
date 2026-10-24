--- examples/freebsd/freebsd_sys_stats_intr.c.orig	2026-07-09 15:43:01 UTC
+++ examples/freebsd/freebsd_sys_stats_intr.c
@@ -0,0 +1,80 @@
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
+struct {
+  uint32_t intrcnt;
+  long* intrcnts_cur;
+  long* intrcnts_prev;
+} intr_info;
+
+void setup_intrcnt_data(void) {
+  intr_info.intrcnts_cur = calloc(sizeof(long), 131072);
+  intr_info.intrcnts_prev = calloc(sizeof(long), 131072);
+  intr_info.intrcnt = 131072;
+}
+
+void populate_intrcnt_data(struct perfetto_protos_SysStats* sys_stat) {
+  size_t intrcntlen;
+  int ret, i;
+
+  intrcntlen = intr_info.intrcnt * sizeof(long);
+  memset(intr_info.intrcnts_cur, 0, intrcntlen);
+
+  ret =
+      sysctlbyname("hw.intrcnt", intr_info.intrcnts_cur, &intrcntlen, NULL, 0);
+  if (ret != 0) {
+    printf("%s: sysctl failed; %d (%d)\n", __func__, ret, errno);
+    return;
+  }
+
+  for (i = 0; i < 1024; i++) {
+    long delta;
+
+    struct perfetto_protos_SysStats_InterruptCount intr_cnt;
+    /* Skip empty interrupt slots, we want cur and prev */
+    if (intr_info.intrcnts_cur[i] == 0)
+      continue;
+    if (intr_info.intrcnts_prev[i] == 0)
+      continue;
+
+    delta = intr_info.intrcnts_cur[i] - intr_info.intrcnts_prev[i];
+
+    // printf("irq %i: %llu\n", i, (unsigned long long) delta);
+
+    perfetto_protos_SysStats_begin_num_irq(sys_stat, &intr_cnt);
+    perfetto_protos_SysStats_InterruptCount_set_irq(&intr_cnt, i);
+    perfetto_protos_SysStats_InterruptCount_set_count(&intr_cnt, delta);
+    perfetto_protos_SysStats_end_num_irq(sys_stat, &intr_cnt);
+  }
+
+  memcpy(intr_info.intrcnts_prev, intr_info.intrcnts_cur,
+         intr_info.intrcnt * sizeof(long));
+}
