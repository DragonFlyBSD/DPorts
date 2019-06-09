--- src/utils/endian.h.orig	2019-05-04 16:23:41 UTC
+++ src/utils/endian.h
@@ -26,7 +26,7 @@
 
 # include <netinet/in.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 # define bswap_64(a) bswap64(a)
 #endif
