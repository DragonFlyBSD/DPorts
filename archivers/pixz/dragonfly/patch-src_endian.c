--- src/endian.c.orig	2015-11-05 21:59:56 UTC
+++ src/endian.c
@@ -10,7 +10,7 @@ void xle64enc(uint8_t *d, uint64_t n) {
     OSWriteLittleInt64(d, 0, n);
 }
 
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <stdint.h>
 #ifdef __linux__
