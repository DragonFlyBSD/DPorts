--- folly/external/farmhash/farmhash.cpp.orig	2019-06-17 05:36:48 UTC
+++ folly/external/farmhash/farmhash.cpp
@@ -150,7 +150,7 @@
 #define bswap_32(x) BSWAP_32(x)
 #define bswap_64(x) BSWAP_64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #undef bswap_32
