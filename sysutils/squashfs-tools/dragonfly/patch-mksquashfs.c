--- mksquashfs.c.orig	2014-05-12 22:18:20 UTC
+++ mksquashfs.c
@@ -51,10 +51,16 @@
 #include <limits.h>
 #include <ctype.h>
 
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
 #include <sys/sysctl.h>
 #else
 #include <endian.h>
