--- src/libical/icaltz-util.c.orig	2025-03-10 16:08:27 UTC
+++ src/libical/icaltz-util.c
@@ -78,6 +78,10 @@
 #define bswap_32 swap32
 #define bswap_64 swap64
 #endif
+#if defined(__DragonFly__) && !defined(bswap_32)
+#define bswap_32 bswap32
+#define bswap_64 bswap64
+#endif
 #endif
 
 #if defined(__APPLE__) || defined(__MINGW32__)
