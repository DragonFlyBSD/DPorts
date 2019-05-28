--- src/city.cc.orig	2019-05-10 14:55:49 UTC
+++ src/city.cc
@@ -60,7 +60,7 @@ static uint32 UNALIGNED_LOAD32(const cha
 #define bswap_32(x) OSSwapInt32(x)
 #define bswap_64(x) OSSwapInt64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #define bswap_32(x) bswap32(x)
