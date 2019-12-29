--- src/modules/tls/tls_rand.h.orig	2019-11-14 11:38:12.000000000 +0000
+++ src/modules/tls/tls_rand.h
@@ -21,7 +21,7 @@
 #define _TLS_RAND_H_
 
 #include <openssl/ssl.h>
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 
 #include <openssl/rand.h>
 
