--- src/core/bswap.h.orig	2009-12-06 10:13:36.000000000 +0000
+++ src/core/bswap.h
@@ -53,6 +53,12 @@
 #define B2N_32(x) x = swap32(x)
 #define B2N_64(x) x = swap64(x)
 
+#elif defined(__DragonFly__)
+#include <sys/endian.h>
+#define B2N_16(x) x = be16toh(x)
+#define B2N_32(x) x = be32toh(x)
+#define B2N_64(x) x = be64toh(x)
+
 #elif defined(__FreeBSD__) && __FreeBSD_version >= 470000
 #include <sys/endian.h>
 #define B2N_16(x) x = be16toh(x)
