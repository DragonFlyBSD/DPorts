--- /dev/null
+++ psutil/arch/dragonfly/proc_socks.h
@@ -0,0 +1,9 @@
+/*
+ * Copyright (c) 2009, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+
+PyObject* psutil_proc_connections(PyObject* self, PyObject* args);
diff --git psutil/arch/dragonfly/sensors.c psutil/arch/dragonfly/sensors.c
new file mode 100644
index 00000000..722e0930
