--- /dev/null
+++ psutil/arch/dragonfly/proc.h
@@ -0,0 +1,16 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+
+typedef struct kinfo_proc kinfo_proc;
+
+PyObject* psutil_proc_cpu_affinity_get(PyObject* self, PyObject* args);
+PyObject* psutil_proc_cpu_affinity_set(PyObject* self, PyObject* args);
+PyObject* psutil_proc_cwd(PyObject* self, PyObject* args);
+PyObject* psutil_proc_exe(PyObject* self, PyObject* args);
+PyObject* psutil_proc_num_threads(PyObject* self, PyObject* args);
+PyObject* psutil_proc_threads(PyObject* self, PyObject* args);
