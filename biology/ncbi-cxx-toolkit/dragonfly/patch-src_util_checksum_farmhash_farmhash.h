--- src/util/checksum/farmhash/farmhash.h.orig	2018-09-26 12:38:06 UTC
+++ src/util/checksum/farmhash/farmhash.h
@@ -305,7 +305,7 @@ inline uint128_t Fingerprint128(const St
   #if !defined(FARMHASH_BIG_ENDIAN)
     #define FARMHASH_BIG_ENDIAN
   #endif
-#elif defined(__linux__) || defined(__CYGWIN__) || defined( __GNUC__ ) || defined( __GNU_LIBRARY__ )
+#elif defined(__linux__) || defined(__CYGWIN__) || (defined( __GNUC__ ) && !defined(__DragonFly__))  || defined( __GNU_LIBRARY__ )
   #include <endian.h> // libc6-dev, GLIBC
   #if BYTE_ORDER == BIG_ENDIAN
     #if !defined(FARMHASH_BIG_ENDIAN)
