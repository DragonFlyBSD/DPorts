--- src/mongoc/mongoc-stream-tls-openssl.c.orig	2017-10-11 23:52:36 UTC
+++ src/mongoc/mongoc-stream-tls-openssl.c
@@ -45,7 +45,7 @@
 
 #define MONGOC_STREAM_TLS_OPENSSL_BUFFER_SIZE 4096
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 static void
 BIO_meth_free (BIO_METHOD *meth)
 {
