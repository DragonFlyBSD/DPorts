--- /dev/null
+++ psutil/arch/dragonfly/sensors.h
@@ -0,0 +1,10 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ */
+
+#include <Python.h>
+
+PyObject* psutil_sensors_battery(PyObject* self, PyObject* args);
+PyObject* psutil_sensors_cpu_temperature(PyObject* self, PyObject* args);
diff --git psutil/arch/dragonfly/sys_socks.c psutil/arch/dragonfly/sys_socks.c
new file mode 100644
index 00000000..f2ea848e
