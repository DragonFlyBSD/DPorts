--- libsofia-sip-ua/tport/ws.h.orig	2021-06-11 15:41:41.617924000 +0200
+++ libsofia-sip-ua/tport/ws.h	2021-06-11 15:41:59.497519000 +0200
@@ -25,7 +25,7 @@
 //#include "sha1.h"
 #include <openssl/ssl.h>
 
-#if defined(_MSC_VER) || defined(__APPLE__) || defined(__FreeBSD__) || (defined(__SVR4) && defined(__sun)) 
+#if defined(_MSC_VER) || defined(__APPLE__) || defined(__FreeBSD__) || (defined(__SVR4) && defined(__sun)) || defined(__DragonFly__)
 #define __bswap_64(x) \
   x = (x>>56) | \
     ((x<<40) & 0x00FF000000000000) | \
