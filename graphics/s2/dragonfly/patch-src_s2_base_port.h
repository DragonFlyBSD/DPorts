--- src/s2/base/port.h.orig	2019-03-04 16:53:16 UTC
+++ src/s2/base/port.h
@@ -279,6 +279,15 @@ inline void sized_delete_array(void *ptr
 // _BIG_ENDIAN
 #include <endian.h>
 
+#elif defined(__DragonFly__)
+#include <sys/endian.h>
+#ifndef __BYTE_ORDER
+#define __BYTE_ORDER _BYTE_ORDER
+#endif
+#ifndef __LITTLE_ENDIAN
+#define __LITTLE_ENDIAN _LITTLE_ENDIAN
+#endif
+
 #elif defined(__APPLE__)
 
 // BIG_ENDIAN
