--- src/third_party/s2/base/port.h.orig	2019-01-31 19:40:07 UTC
+++ src/third_party/s2/base/port.h
@@ -102,7 +102,7 @@ typedef uint16_t u_int16_t;
 
 #endif
 
-#if defined __sun || defined __FreeBSD__ || defined __OpenBSD__
+#if defined __sun || defined __FreeBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #ifdef _LITTLE_ENDIAN
 #define IS_LITTLE_ENDIAN
 #elif defined _BIG_ENDIAN
@@ -129,7 +129,7 @@ typedef uint16_t u_int16_t;
 #define bswap_16(x) BSWAP_16(x)
 #define bswap_32(x) BSWAP_32(x)
 #define bswap_64(x) BSWAP_64(x)
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 #include <sys/endian.h>
 #define bswap_16(x) bswap16(x)
 #define bswap_32(x) bswap32(x)
