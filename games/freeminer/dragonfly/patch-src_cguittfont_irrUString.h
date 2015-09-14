--- src/cguittfont/irrUString.h.orig	2014-11-24 19:24:31.000000000 +0200
+++ src/cguittfont/irrUString.h
@@ -41,7 +41,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
-#if defined(_WIN32) || defined(__FreeBSD__)
+#if defined(_WIN32) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define __BYTE_ORDER 0
 #define __LITTLE_ENDIAN 0
 #define __BIG_ENDIAN 1
