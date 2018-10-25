--- src/network/ssl/qsslsocket_openssl_symbols.cpp.intermediate	2018-10-23 13:44:02 UTC
+++ src/network/ssl/qsslsocket_openssl_symbols.cpp
@@ -417,7 +417,7 @@ DEFINEFUNC2(int, SSL_CTX_use_PrivateKey,
 DEFINEFUNC2(int, SSL_CTX_use_RSAPrivateKey, SSL_CTX *a, a, RSA *b, b, return -1, return)
 DEFINEFUNC3(int, SSL_CTX_use_PrivateKey_file, SSL_CTX *a, a, const char *b, b, int c, c, return -1, return)
 DEFINEFUNC(X509_STORE *, SSL_CTX_get_cert_store, const SSL_CTX *a, a, return 0, return)
-#if OPENSSL_VERSION_NUMBER >= 0x10002000L
+#if OPENSSL_VERSION_NUMBER >= 0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(SSL_CONF_CTX *, SSL_CONF_CTX_new, DUMMYARG, DUMMYARG, return 0, return);
 DEFINEFUNC(void, SSL_CONF_CTX_free, SSL_CONF_CTX *a, a, return ,return);
 DEFINEFUNC2(void, SSL_CONF_CTX_set_ssl_ctx, SSL_CONF_CTX *a, a, SSL_CTX *b, b, return, return);
@@ -1156,7 +1156,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(SSL_CTX_use_RSAPrivateKey)
     RESOLVEFUNC(SSL_CTX_use_PrivateKey_file)
     RESOLVEFUNC(SSL_CTX_get_cert_store);
-#if OPENSSL_VERSION_NUMBER >= 0x10002000L
+#if OPENSSL_VERSION_NUMBER >= 0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSL_CONF_CTX_new);
     RESOLVEFUNC(SSL_CONF_CTX_free);
     RESOLVEFUNC(SSL_CONF_CTX_set_ssl_ctx);
