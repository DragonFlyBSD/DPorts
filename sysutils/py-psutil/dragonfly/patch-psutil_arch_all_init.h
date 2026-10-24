--- psutil/arch/all/init.h.orig	2026-01-01 13:07:37 UTC
+++ psutil/arch/all/init.h
@@ -27,6 +27,8 @@
     #include "../../arch/osx/init.h"
 #elif defined(PSUTIL_FREEBSD)
     #include "../../arch/freebsd/init.h"
+#elif defined(PSUTIL_DRAGONFLY)
+    #include "../../arch/dragonfly/init.h"
 #elif defined(PSUTIL_OPENBSD)
     #include "../../arch/openbsd/init.h"
 #elif defined(PSUTIL_NETBSD)
