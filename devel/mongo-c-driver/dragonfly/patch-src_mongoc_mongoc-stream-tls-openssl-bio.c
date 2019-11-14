--- src/mongoc/mongoc-stream-tls-openssl-bio.c.orig	2017-10-11 23:52:36 UTC
+++ src/mongoc/mongoc-stream-tls-openssl-bio.c
@@ -39,7 +39,7 @@
 #define MONGOC_LOG_DOMAIN "stream-tls-openssl-bio"
 
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 
 /* Magic vtable to make our BIO shim */
 static BIO_METHOD gMongocStreamTlsOpenSslRawMethods = {
