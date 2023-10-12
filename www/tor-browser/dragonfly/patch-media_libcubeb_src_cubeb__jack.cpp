--- media/libcubeb/src/cubeb_jack.cpp.orig	2023-05-08 09:01:49 UTC
+++ media/libcubeb/src/cubeb_jack.cpp
@@ -8,7 +8,7 @@
  */
 #define _DEFAULT_SOURCE
 #define _BSD_SOURCE
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #define _POSIX_SOURCE
 #endif
 #include "cubeb-internal.h"
