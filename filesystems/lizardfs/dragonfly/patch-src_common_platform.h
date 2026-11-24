--- src/common/platform.h.orig
+++ src/common/platform.h
@@ -20,7 +20,7 @@
 #include "config.h"
 
 /* Workaround for Debian/kFreeBSD which does not define ENODATA */
-#if defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#if defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef ENODATA
 #define ENODATA ENOATTR
 #endif
