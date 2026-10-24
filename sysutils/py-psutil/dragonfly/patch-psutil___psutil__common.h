--- /dev/null
+++ psutil/_psutil_common.h
@@ -0,0 +1,16 @@
+/*
+ * DragonFly compat shim.
+ *
+ * psutil 7.x removed the top-level _psutil_common.h header (helpers
+ * moved to arch/all/init.h). The DragonFly backend sources predate
+ * that refactor; this shim restores the old include path and maps
+ * the two retired helper macros onto their 7.x equivalents.
+ */
+#include "arch/all/init.h"
+
+// Removed in psutil 7.0; use psutil_oserror_wsyscall() instead.
+#define PyErr_SetFromOSErrnoWithSyscall(syscall) \
+    psutil_oserror_wsyscall(syscall)
+
+// Removed in psutil 7.0; use psutil_oserror_nsp() instead.
+#define NoSuchProcess(msg) psutil_oserror_nsp(msg)
