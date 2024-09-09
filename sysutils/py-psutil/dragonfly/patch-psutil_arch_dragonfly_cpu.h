--- /dev/null
+++ psutil/arch/dragonfly/cpu.h
@@ -0,0 +1,13 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+
+PyObject *psutil_cpu_freq(PyObject* self, PyObject* args);
+PyObject *psutil_cpu_stats(PyObject* self, PyObject* args);
+PyObject *psutil_cpu_topology(PyObject* self, PyObject* args);
+PyObject *psutil_per_cpu_times(PyObject *self, PyObject *args);
+PyObject *psutil_cpu_count_cores(PyObject *self, PyObject *args);
diff --git psutil/arch/dragonfly/disk.c psutil/arch/dragonfly/disk.c
new file mode 100644
index 00000000..2704fd73
