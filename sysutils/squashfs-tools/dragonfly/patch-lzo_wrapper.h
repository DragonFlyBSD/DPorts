--- lzo_wrapper.h.orig	2014-03-09 05:31:59 UTC
+++ lzo_wrapper.h
@@ -24,10 +24,20 @@
  *
  */
 
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#endif
+
 #ifndef linux
+#ifndef __BYTE_ORDER
 #define __BYTE_ORDER BYTE_ORDER
+#endif
+#ifndef __BIG_ENDIAN
 #define __BIG_ENDIAN BIG_ENDIAN
+#endif
+#ifndef __LITTLE_ENDIAN
 #define __LITTLE_ENDIAN LITTLE_ENDIAN
+#endif
 #else
 #include <endian.h>
 #endif
