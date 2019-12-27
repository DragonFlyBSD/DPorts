--- src/util-byte.h.orig	2019-10-14 11:25:49 UTC
+++ src/util-byte.h
@@ -30,7 +30,7 @@
 #define BYTE_LITTLE_ENDIAN   1
 
 /** Wrappers for OS dependent byte swapping functions */
-#ifdef OS_FREEBSD
+#if defined(OS_FREEBSD) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define SCByteSwap16(x) bswap16(x)
 #define SCByteSwap32(x) bswap32(x)
