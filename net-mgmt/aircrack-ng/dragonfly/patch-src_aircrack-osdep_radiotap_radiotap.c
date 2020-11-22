--- src/aircrack-osdep/radiotap/radiotap.c.intermediate	2020-11-22 16:22:58.000000000 +0000
+++ src/aircrack-osdep/radiotap/radiotap.c
@@ -14,6 +14,9 @@
 #include "radiotap_iter.h"
 #include "platform.h"
 
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#else
 #ifdef _BSD_SOURCE
 #if __BYTE_ORDER == __LITTLE_ENDIAN
 #define le16toh(x) (x)
@@ -22,6 +25,7 @@
 #define le32toh(x) bswap_32 (x)
 #endif
 #endif
+#endif
 
 
 /* function prototypes and related defs are in radiotap_iter.h */
