--- src/SHA1.c.orig	2022-10-19 20:04:14.080707000 +0200
+++ src/SHA1.c	2022-10-19 20:04:31.890302000 +0200
@@ -59,7 +59,7 @@
 #  include <libkern/OSByteOrder.h>
 #  define htobe32(x) OSSwapHostToBigInt32(x)
 #  define be32toh(x) OSSwapBigToHostInt32(x)
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #endif
 #include <string.h>
