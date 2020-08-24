--- lib/util/sslreq.c.orig	2020-04-10 22:55:10 UTC
+++ lib/util/sslreq.c
@@ -8,21 +8,13 @@
 #include <stdint.h>
 #include <string.h>
 #include <unistd.h>
+#include <limits.h>  /* for INT_MAX */
 
 #include <openssl/ssl.h>
 #include <openssl/x509v3.h>
 
 #include "sslreq.h"
 
-/*
- * LibreSSL claims to be OpenSSL 2.0, but (currently) has APIs compatible with
- * OpenSSL 1.0.1g.
- */
-#ifdef LIBRESSL_VERSION_NUMBER
-#undef OPENSSL_VERSION_NUMBER
-#define OPENSSL_VERSION_NUMBER 0x1000107fL
-#endif
-
 /* Compatibility for OpenSSL pre-1.1.0 */
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
 static int
@@ -33,7 +25,9 @@ SSL_set1_host(SSL * ssl, const char * ho
 	param = SSL_get0_param(ssl);
 	return (X509_VERIFY_PARAM_set1_host(param, hostname, strlen(hostname)));
 }
+#endif
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 static void
 SSL_set_hostflags(SSL * ssl, unsigned int flags)
 {
@@ -45,7 +39,7 @@ SSL_set_hostflags(SSL * ssl, unsigned in
 #endif
 
 /* Compatibility for OpenSSL pre-1.1.1. */
-#if OPENSSL_VERSION_NUMBER < 0x10101000L
+#if OPENSSL_VERSION_NUMBER < 0x10101000L || defined(LIBRESSL_VERSION_NUMBER)
 static int
 SSL_write_ex(SSL * ssl, const void * buf, size_t num,
     size_t * written)
