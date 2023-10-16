--- media/libcubeb/src/cubeb_jack.cpp.orig	2023-09-28 03:16:06 UTC
+++ media/libcubeb/src/cubeb_jack.cpp
@@ -8,7 +8,7 @@
  */
 #define _DEFAULT_SOURCE
 #define _BSD_SOURCE
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #define _POSIX_SOURCE
 #endif
 #include "cubeb-internal.h"
