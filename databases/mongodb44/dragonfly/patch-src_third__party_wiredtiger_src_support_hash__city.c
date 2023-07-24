--- src/third_party/wiredtiger/src/support/hash_city.c.orig	2022-11-01 18:21:44 UTC
+++ src/third_party/wiredtiger/src/support/hash_city.c
@@ -105,7 +105,7 @@ static uint32_t UNALIGNED_LOAD32(const c
 #define	bswap_32(x) BSWAP_32(x)
 #define	bswap_64(x) BSWAP_64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 #define	bswap_32(x) bswap32(x)
