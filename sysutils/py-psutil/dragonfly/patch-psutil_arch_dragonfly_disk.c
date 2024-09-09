--- /dev/null
+++ psutil/arch/dragonfly/disk.c
@@ -0,0 +1,86 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+#include <sys/sysctl.h>
+#include <devstat.h>
+
+#include "../../_psutil_common.h"
+#include "../../_psutil_posix.h"
+
+
+// convert a bintime struct to milliseconds
+#define PSUTIL_BT2MSEC(bt) (bt.sec * 1000 + (((uint64_t) 1000000000 * (uint32_t) \
+        (bt.frac >> 32) ) >> 32 ) / 1000000)
+
+#define PSUTIL_TV2MSEC(tv) (tv.tv_sec * 1000 + (1000000L * tv.tv_usec))
+
+
+PyObject *
+psutil_disk_io_counters(PyObject *self, PyObject *args) {
+    int i;
+    struct statinfo stats;
+
+    PyObject *py_retdict = PyDict_New();
+    PyObject *py_disk_info = NULL;
+
+    if (py_retdict == NULL)
+        return NULL;
+    if (checkversion() < 0) {
+        PyErr_Format(PyExc_RuntimeError,
+                     "devstat_checkversion() syscall failed");
+        goto error;
+    }
+
+    stats.dinfo = (struct devinfo *)malloc(sizeof(struct devinfo));
+    if (stats.dinfo == NULL) {
+        PyErr_NoMemory();
+        goto error;
+    }
+    bzero(stats.dinfo, sizeof(struct devinfo));
+
+    if (getdevs(&stats) == -1) {
+        PyErr_Format(PyExc_RuntimeError, "devstat_getdevs() syscall failed");
+        goto error;
+    }
+
+    for (i = 0; i < stats.dinfo->numdevs; i++) {
+        py_disk_info = NULL;
+        struct devstat current;
+        char disk_name[128];
+        current = stats.dinfo->devices[i];
+        snprintf(disk_name, sizeof(disk_name), "%s%d",
+                 current.device_name,
+                 current.unit_number);
+
+        py_disk_info = Py_BuildValue(
+            "(KKKKL)",
+            current.num_reads,   // no reads
+            current.num_writes,  // no writes
+            current.bytes_read,        // bytes read
+            current.bytes_written,       // bytes written
+            (long long) PSUTIL_TV2MSEC(current.busy_time)  // busy time
+        );      // finished transactions
+        if (!py_disk_info)
+            goto error;
+        if (PyDict_SetItemString(py_retdict, disk_name, py_disk_info))
+            goto error;
+        Py_DECREF(py_disk_info);
+    }
+
+    if (stats.dinfo->mem_ptr)
+        free(stats.dinfo->mem_ptr);
+    free(stats.dinfo);
+    return py_retdict;
+
+error:
+    Py_XDECREF(py_disk_info);
+    Py_DECREF(py_retdict);
+    if (stats.dinfo != NULL)
+        free(stats.dinfo);
+    return NULL;
+}
+
diff --git psutil/arch/dragonfly/disk.h psutil/arch/dragonfly/disk.h
new file mode 100644
index 00000000..9e29f664
