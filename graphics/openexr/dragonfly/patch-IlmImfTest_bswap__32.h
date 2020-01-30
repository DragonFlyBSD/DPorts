--- IlmImfTest/bswap_32.h.orig	2019-09-18 01:02:06 UTC
+++ IlmImfTest/bswap_32.h
@@ -12,7 +12,7 @@
 #elif defined(__sun) || defined(sun)
 #include <sys/byteorder.h>
 #define bswap_32(x) BSWAP_32(x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define bswap_32(x) bswap32(x)
 #elif defined(__OpenBSD__)
