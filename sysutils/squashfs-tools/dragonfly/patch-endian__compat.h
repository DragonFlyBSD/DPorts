--- endian_compat.h.orig	2022-03-17 19:32:02 UTC
+++ endian_compat.h
@@ -23,10 +23,21 @@
  *
  * endian_compat.h
  */
+
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
