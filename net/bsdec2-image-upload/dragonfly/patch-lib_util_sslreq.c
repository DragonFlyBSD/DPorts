--- lib/util/sslreq.c.orig	2021-06-22 17:55:58.499558000 +0200
+++ lib/util/sslreq.c	2021-06-22 18:00:47.482849000 +0200
@@ -9,23 +9,13 @@
 #include <stdint.h>
 #include <string.h>
 #include <unistd.h>
+#include <limits.h>  /* for INT_MAX */
 
 #include <openssl/ssl.h>
 #include <openssl/x509v3.h>
 
 #include "sslreq.h"
 
-/*
- * LibreSSL claims to be OpenSSL 2.0, but (mostly) has APIs compatible with
- * OpenSSL 1.0.1g.
- */
-#ifdef LIBRESSL_VERSION_NUMBER
-#undef OPENSSL_VERSION_NUMBER
-#define OPENSSL_VERSION_NUMBER 0x1000107fL
-#if LIBRESSL_VERSION_NUMBER >= 0x2090000fL
-#define HAVE_SSL_SET1_HOST
-#endif
-#endif
 
 /* Compatibility for OpenSSL pre-1.1.0 */
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
@@ -39,7 +29,9 @@
 	return (X509_VERIFY_PARAM_set1_host(param, hostname, strlen(hostname)));
 }
 #endif
+#endif
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 static void
 SSL_set_hostflags(SSL * ssl, unsigned int flags)
 {
