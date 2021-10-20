--- modules/sha1/sha256.h.orig	2016-02-04 05:14:14 UTC
+++ modules/sha1/sha256.h
@@ -42,12 +42,6 @@
 /* Hash size in 32-bit words */
 #define SHA256_HASH_WORDS 8
 
-#ifdef _MSC_VER
-typedef unsigned __int64    uint64_t;
-#elif !(defined(__hpux) || defined(_AIX))
-typedef unsigned long long  uint64_t;
-#endif
-
 #if !(defined(__hpux))
 typedef unsigned int        uint32_t;
 typedef unsigned char       uint8_t;
