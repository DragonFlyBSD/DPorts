--- lz4_wrapper.h.orig	2014-03-09 05:31:58 UTC
+++ lz4_wrapper.h
@@ -24,10 +24,16 @@
  *
  */
 
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
