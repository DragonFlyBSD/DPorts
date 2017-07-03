--- src/ctx.c.orig	2017-03-26 20:25:00 UTC
+++ src/ctx.c
@@ -295,7 +295,7 @@ NOEXPORT int matches_wildcard(char *serv
 
 #ifndef OPENSSL_NO_DH
 
-#if OPENSSL_VERSION_NUMBER<0x10100000L
+#if OPENSSL_VERSION_NUMBER<0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 NOEXPORT STACK_OF(SSL_CIPHER) *SSL_CTX_get_ciphers(const SSL_CTX *ctx) {
     return ctx->cipher_list;
 }
@@ -398,7 +398,7 @@ NOEXPORT int ecdh_init(SERVICE_OPTIONS *
 /**************************************** initialize OpenSSL CONF */
 
 NOEXPORT int conf_init(SERVICE_OPTIONS *section) {
-#if OPENSSL_VERSION_NUMBER>=0x10002000L
+#if OPENSSL_VERSION_NUMBER>=0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
     SSL_CONF_CTX *cctx;
     NAME_LIST *curr;
     char *cmd, *param;
