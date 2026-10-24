--- /dev/null
+++ psutil/_psutil_posix.h
@@ -0,0 +1,7 @@
+/*
+ * DragonFly compat shim.
+ *
+ * psutil 7.x removed the top-level _psutil_posix.h header (helpers
+ * moved to arch/posix/init.h). See _psutil_common.h.
+ */
+#include "arch/posix/init.h"
