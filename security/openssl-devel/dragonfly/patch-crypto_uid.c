--- crypto/uid.c.orig	2016-08-25 18:29:21.000000000 +0300
+++ crypto/uid.c
@@ -10,7 +10,7 @@
 #include <openssl/crypto.h>
 #include <openssl/opensslconf.h>
 
-#if defined(__OpenBSD__) || (defined(__FreeBSD__) && __FreeBSD__ > 2)
+#if defined(__OpenBSD__) || (defined(__FreeBSD__) && __FreeBSD__ > 2) || defined(__DragonFly__)
 
 # include OPENSSL_UNISTD
 
