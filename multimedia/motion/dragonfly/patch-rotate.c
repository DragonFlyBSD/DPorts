--- src/rotate.c.orig	2020-07-10 16:48:24.018875000 +0200
+++ src/rotate.c	2020-07-10 16:48:49.578672000 +0200
@@ -35,7 +35,7 @@
 #if defined(__APPLE__)
 #include <libkern/OSByteOrder.h>
 #define bswap_32(x) OSSwapInt32(x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define bswap_32(x) bswap32(x)
 #elif defined(__OpenBSD__)
