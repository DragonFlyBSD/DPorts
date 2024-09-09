--- media/libcubeb/src/cubeb_jack.cpp.orig	2024-08-13 22:10:34.622523000 +0200
+++ media/libcubeb/src/cubeb_jack.cpp	2024-08-13 22:11:00.643493000 +0200
@@ -8,7 +8,7 @@
  */
 #define _DEFAULT_SOURCE
 #define _BSD_SOURCE
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #define _POSIX_SOURCE
 #endif
 #include "cubeb-internal.h"
