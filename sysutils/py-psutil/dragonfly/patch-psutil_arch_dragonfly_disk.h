--- /dev/null
+++ psutil/arch/dragonfly/disk.h
@@ -0,0 +1,9 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+
+PyObject *psutil_disk_io_counters(PyObject* self, PyObject* args);
diff --git psutil/arch/dragonfly/mem.c psutil/arch/dragonfly/mem.c
new file mode 100644
index 00000000..bda5159d
