--- src/mod/endpoints/mod_verto/ws.h.orig	2018-09-07 17:29:48 UTC
+++ src/mod/endpoints/mod_verto/ws.h
@@ -25,7 +25,7 @@
 //#include "sha1.h"
 #include <openssl/ssl.h>
 
-#if defined(_MSC_VER) || defined(__APPLE__) || defined(__FreeBSD__) || (defined(__SVR4) && defined(__sun))
+#if defined(_MSC_VER) || defined(__APPLE__) || defined(__FreeBSD__) || (defined(__SVR4) && defined(__sun)) || defined(__DragonFly__)
 #define __bswap_64(x) \
   x = (x>>56) | \
     ((x<<40) & 0x00FF000000000000) | \
