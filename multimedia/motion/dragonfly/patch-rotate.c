--- src/rotate.c.orig
+++ src/rotate.c
@@ -51,7 +51,7 @@
 #if defined(__APPLE__)
     #include <libkern/OSByteOrder.h>
     #define bswap_32(x) OSSwapInt32(x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/endian.h>
     #define bswap_32(x) bswap32(x)
 #elif defined(__OpenBSD__)
