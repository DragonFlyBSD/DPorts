--- src/util/checksum/cityhash/city.cc.orig	2018-10-25 17:25:00 UTC
+++ src/util/checksum/cityhash/city.cc
@@ -66,7 +66,7 @@ static uint32 UNALIGNED_LOAD32(const cha
 #define bswap_32(x) BSWAP_32(x)
 #define bswap_64(x) BSWAP_64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #define bswap_32(x) bswap32(x)
