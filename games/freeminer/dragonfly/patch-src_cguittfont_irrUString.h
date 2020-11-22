--- src/cguittfont/irrUString.h.orig	2014-11-24 19:24:31.000000000 +0200
+++ src/cguittfont/irrUString.h
@@ -41,10 +41,15 @@
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
-#if defined(_WIN32) || defined(__FreeBSD__)
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#endif
+#if defined(_WIN32) || defined(__FreeBSD__) || defined(__DragonFly__)
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER 0
 #define __LITTLE_ENDIAN 0
 #define __BIG_ENDIAN 1
+#endif
 #elif __MACH__
 #include <machine/endian.h>
 #else
