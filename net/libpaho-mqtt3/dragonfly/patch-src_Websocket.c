--- src/WebSocket.c.orig	2022-10-19 20:05:05.639537000 +0200
+++ src/WebSocket.c	2022-10-19 20:05:18.169250000 +0200
@@ -41,7 +41,7 @@
 #  define be16toh(x) OSSwapBigToHostInt16(x)
 #  define be32toh(x) OSSwapBigToHostInt32(x)
 #  define be64toh(x) OSSwapBigToHostInt64(x)
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #elif defined(_WIN32) || defined(_WIN64)
 #  pragma comment(lib, "rpcrt4.lib")
