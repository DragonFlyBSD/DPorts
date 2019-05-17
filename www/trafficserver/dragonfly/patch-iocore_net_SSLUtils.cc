--- iocore/net/SSLUtils.cc.orig	2019-01-18 22:13:53 UTC
+++ iocore/net/SSLUtils.cc
@@ -224,7 +224,7 @@ ssl_session_timed_out(SSL_SESSION *sessi
 static void ssl_rm_cached_session(SSL_CTX *ctx, SSL_SESSION *sess);
 
 static SSL_SESSION *
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || (defined(LIBRESSL_VERSION_NUMBER) && LIBRESSL_VERSION_NUMBER < 0x20900000L)
 ssl_get_cached_session(SSL *ssl, unsigned char *id, int len, int *copy)
 #else
 ssl_get_cached_session(SSL *ssl, const unsigned char *id, int len, int *copy)
