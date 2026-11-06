--- layers/external/parallel_hashmap/phmap_bits.h.orig	2026-08-14 11:28:44 UTC
+++ layers/external/parallel_hashmap/phmap_bits.h
@@ -40,7 +40,7 @@
 #elif defined(__APPLE__)
 // Mac OS X / Darwin features
 #include <libkern/OSByteOrder.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__GLIBC__)
 #include <byteswap.h>  // IWYU pragma: export
