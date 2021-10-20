--- dev/platform.cc.orig	2019-05-13 21:45:59 UTC
+++ dev/platform.cc
@@ -115,7 +115,7 @@
 #define bswap_32(x) BSWAP_32(x)
 #define bswap_64(x) BSWAP_64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #undef bswap_32
