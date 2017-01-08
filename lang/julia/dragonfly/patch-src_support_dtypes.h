--- src/support/dtypes.h.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/support/dtypes.h
@@ -77,7 +77,7 @@
 #define BYTE_ORDER     __BYTE_ORDER
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #define __LITTLE_ENDIAN  LITTLE_ENDIAN
 #define __BIG_ENDIAN     BIG_ENDIAN
