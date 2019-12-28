--- src/farmhash.h.orig	2019-05-13 21:45:59 UTC
+++ src/farmhash.h
@@ -297,7 +297,7 @@ inline uint128_t Fingerprint128(const St
   #if !defined(FARMHASH_BIG_ENDIAN)
     #define FARMHASH_BIG_ENDIAN
   #endif
-#elif defined(__LITTLE_ENDIAN__)
+#elif defined(__LITTLE_ENDIAN__) || defined(__DragonFly__)
   // nothing for little-endian
 #elif defined(__BYTE_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && (__BYTE_ORDER == __ORDER_LITTLE_ENDIAN__)
   // nothing for little-endian
