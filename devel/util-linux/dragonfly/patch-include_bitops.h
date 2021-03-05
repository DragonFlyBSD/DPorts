--- include/bitops.h.orig	2020-07-23 09:26:04 UTC
+++ include/bitops.h
@@ -16,7 +16,8 @@
 
 #if defined(HAVE_ENDIAN_H)
 #  include <endian.h>
-#elif defined(HAVE_SYS_ENDIAN_H)	/* BSDs have them here */
+#endif
+#if defined(HAVE_SYS_ENDIAN_H)	/* BSDs have them here */
 #  include <sys/endian.h>
 #endif
 
@@ -25,7 +26,7 @@
 # define be16toh(x) betoh16(x)
 # define be32toh(x) betoh32(x)
 # define be64toh(x) betoh64(x)
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+#elif !defined(bswap_32) && (defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__))
 # define bswap_16(x) bswap16(x)
 # define bswap_32(x) bswap32(x)
 # define bswap_64(x) bswap64(x)
