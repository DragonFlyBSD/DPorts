--- src/network/ssl/qsslsocket_openssl_p.h.orig	2018-05-29 06:56:52 UTC
+++ src/network/ssl/qsslsocket_openssl_p.h
@@ -84,7 +84,7 @@
 #include <openssl/tls1.h>
 #endif
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 #define OPENSSL_NO_SSL2
 #endif
 
