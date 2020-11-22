--- contrib/t1ha/t1ha_bits.h.orig	2020-09-30 19:27:23 UTC
+++ contrib/t1ha/t1ha_bits.h
@@ -146,11 +146,15 @@
 #define unreachable() __builtin_unreachable()
 #endif
 
+#if defined(__DragonFly__)
+#include <sys/endian.h>
+#else
 #define bswap64(v) __builtin_bswap64(v)
 #define bswap32(v) __builtin_bswap32(v)
 #if __GNUC_PREREQ(4, 8) || __has_builtin(__builtin_bswap16)
 #define bswap16(v) __builtin_bswap16(v)
 #endif
+#endif
 
 #if !defined(__maybe_unused) && (__GNUC_PREREQ(4, 3) || __has_attribute(unused))
 #define __maybe_unused __attribute__((unused))
