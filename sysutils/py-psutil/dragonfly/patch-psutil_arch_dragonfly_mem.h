--- /dev/null
+++ psutil/arch/dragonfly/mem.h
@@ -0,0 +1,10 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+
+PyObject *psutil_swap_mem(PyObject* self, PyObject* args);
+PyObject *psutil_virtual_mem(PyObject* self, PyObject* args);
diff --git psutil/arch/dragonfly/proc.c psutil/arch/dragonfly/proc.c
new file mode 100644
index 00000000..d06eb65f
