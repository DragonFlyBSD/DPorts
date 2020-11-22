--- ccan/ccan/endian/endian.h.orig	2020-09-15 02:37:58 UTC
+++ ccan/ccan/endian/endian.h
@@ -104,8 +104,12 @@ static inline uint64_t bswap_64(uint64_t
 #endif
 
 /* Needed for Glibc like endiness check */
+#ifndef __LITTLE_ENDIAN
 #define	__LITTLE_ENDIAN	1234
+#endif
+#ifndef __BIG_ENDIAN
 #define	__BIG_ENDIAN	4321
+#endif
 
 /* Sanity check the defines.  We don't handle weird endianness. */
 #if !HAVE_LITTLE_ENDIAN && !HAVE_BIG_ENDIAN
