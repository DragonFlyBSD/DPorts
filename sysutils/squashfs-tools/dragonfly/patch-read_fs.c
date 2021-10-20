--- read_fs.c.orig	2014-05-10 04:54:13 UTC
+++ read_fs.c
@@ -35,10 +35,16 @@
 #include <limits.h>
 #include <dirent.h>
 
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#endif
+
 #ifndef linux
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER BYTE_ORDER
 #define __BIG_ENDIAN BIG_ENDIAN
 #define __LITTLE_ENDIAN LITTLE_ENDIAN
+#endif
 #else
 #include <endian.h>
 #endif
