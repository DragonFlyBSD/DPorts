--- src/network/ssl/qsslsocket_openssl_symbols.cpp.intermediate	2018-10-23 13:44:02 UTC
+++ src/network/ssl/qsslsocket_openssl_symbols.cpp
@@ -402,7 +402,7 @@ DEFINEFUNC(int, SSL_connect, SSL *a, a,
 DEFINEFUNC(int, SSL_CTX_check_private_key, const SSL_CTX *a, a, return -1, return)
 DEFINEFUNC4(long, SSL_CTX_ctrl, SSL_CTX *a, a, int b, b, long c, c, void *d, d, return -1, return)
 DEFINEFUNC(void, SSL_CTX_free, SSL_CTX *a, a, return, DUMMYARG)
-#if OPENSSL_VERSION_NUMBER >= 0x10000000L
+#if OPENSSL_VERSION_NUMBER >= 0x10000000L && !defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(SSL_CTX *, SSL_CTX_new, const SSL_METHOD *a, a, return 0, return)
 #else
 DEFINEFUNC(SSL_CTX *, SSL_CTX_new, SSL_METHOD *a, a, return 0, return)
