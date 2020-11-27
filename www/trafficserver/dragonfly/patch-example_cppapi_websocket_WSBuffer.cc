--- example/cppapi/websocket/WSBuffer.cc.orig	2020-06-18 22:45:53 UTC
+++ example/cppapi/websocket/WSBuffer.cc
@@ -40,15 +40,8 @@
 #elif BYTE_ORDER == BIG_ENDIAN
 #define be64toh(x) (x)
 #endif
-#elif defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__)
+#elif defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
-#elif defined(__DragonFly__)
-#include <machine/endian.h>
-#if BYTE_ORDER == LITTLE_ENDIAN
-#define be64toh(x) __bswap64(x)
-#elif BYTE_ORDER == BIG_ENDIAN
-#define be64toh(x) (x)
-#endif
 #endif
 
 #define BASE64_ENCODE_DSTLEN(_length) ((_length * 8) / 6 + 4)
