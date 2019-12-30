--- src/network/ssl/qsslsocket_openssl_symbols.cpp.orig	2018-05-29 06:56:52 UTC
+++ src/network/ssl/qsslsocket_openssl_symbols.cpp
@@ -111,7 +111,7 @@ DEFINEFUNC(int, ASN1_STRING_length, ASN1
 DEFINEFUNC2(int, ASN1_STRING_to_UTF8, unsigned char **a, a, ASN1_STRING *b, b, return 0, return);
 DEFINEFUNC4(long, BIO_ctrl, BIO *a, a, int b, b, long c, c, void *d, d, return -1, return)
 DEFINEFUNC(int, BIO_free, BIO *a, a, return 0, return)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(BIO *, BIO_new, BIO_METHOD *a, a, return 0, return)
 #else
 DEFINEFUNC(BIO *, BIO_new, const BIO_METHOD *a, a, return 0, return)
@@ -125,7 +125,7 @@ DEFINEFUNC(const BIO_METHOD *, BIO_s_mem
 #endif
 DEFINEFUNC3(int, BIO_write, BIO *a, a, const void *b, b, int c, c, return -1, return)
 DEFINEFUNC(int, BN_num_bits, const BIGNUM *a, a, return 0, return)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(int, CRYPTO_num_locks, DUMMYARG, DUMMYARG, return 0, return)
 DEFINEFUNC(void, CRYPTO_set_locking_callback, void (*a)(int, int, const char *, int), a, return, DUMMYARG)
 DEFINEFUNC(void, CRYPTO_set_id_callback, unsigned long (*a)(), a, return, DUMMYARG)
@@ -169,7 +169,7 @@ DEFINEFUNC2(int, PEM_write_bio_RSA_PUBKE
 DEFINEFUNC2(void, RAND_seed, const void *a, a, int b, b, return, DUMMYARG)
 DEFINEFUNC(int, RAND_status, void, DUMMYARG, return -1, return)
 DEFINEFUNC(void, RSA_free, RSA *a, a, return, DUMMYARG)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(int, sk_num, STACK *a, a, return -1, return)
 DEFINEFUNC2(void, sk_pop_free, STACK *a, a, void (*b)(void*), b, return, DUMMYARG)
 #if OPENSSL_VERSION_NUMBER >= 0x10000000L
@@ -232,7 +232,7 @@ DEFINEFUNC(long, SSL_get_verify_result,
 #else
 DEFINEFUNC(long, SSL_get_verify_result, SSL *a, a, return -1, return)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(int, SSL_library_init, void, DUMMYARG, return -1, return)
 DEFINEFUNC(void, SSL_load_error_strings, void, DUMMYARG, return, DUMMYARG)
 #else
@@ -254,7 +254,7 @@ DEFINEFUNC(const SSL_METHOD *, SSLv2_cli
 #ifndef OPENSSL_NO_SSL3_METHOD
 DEFINEFUNC(const SSL_METHOD *, SSLv3_client_method, DUMMYARG, DUMMYARG, return 0, return)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(const SSL_METHOD *, SSLv23_client_method, DUMMYARG, DUMMYARG, return 0, return)
 #else
 DEFINEFUNC(const SSL_METHOD *, TLS_client_method, DUMMYARG, DUMMYARG, return 0, return)
@@ -266,7 +266,7 @@ DEFINEFUNC(const SSL_METHOD *, SSLv2_ser
 #ifndef OPENSSL_NO_SSL3_METHOD
 DEFINEFUNC(const SSL_METHOD *, SSLv3_server_method, DUMMYARG, DUMMYARG, return 0, return)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(const SSL_METHOD *, SSLv23_server_method, DUMMYARG, DUMMYARG, return 0, return)
 #else
 DEFINEFUNC(const SSL_METHOD *, TLS_server_method, DUMMYARG, DUMMYARG, return 0, return)
@@ -309,7 +309,7 @@ DEFINEFUNC2(int, X509_STORE_CTX_set_purp
 DEFINEFUNC(int, X509_STORE_CTX_get_error, X509_STORE_CTX *a, a, return -1, return)
 DEFINEFUNC(int, X509_STORE_CTX_get_error_depth, X509_STORE_CTX *a, a, return -1, return)
 DEFINEFUNC(X509 *, X509_STORE_CTX_get_current_cert, X509_STORE_CTX *a, a, return 0, return)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(STACK_OF(X509) *, X509_STORE_CTX_get_chain, X509_STORE_CTX *a, a, return 0, return)
 #else
 DEFINEFUNC(STACK_OF(X509) *, X509_STORE_CTX_get0_chain, X509_STORE_CTX *a, a, return 0, return)
@@ -321,14 +321,14 @@ DEFINEFUNC2(int, i2d_RSAPrivateKey, cons
 DEFINEFUNC3(RSA *, d2i_RSAPrivateKey, RSA **a, a, unsigned char **b, b, long c, c, return 0, return)
 DEFINEFUNC3(DSA *, d2i_DSAPrivateKey, DSA **a, a, unsigned char **b, b, long c, c, return 0, return)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(void, OPENSSL_add_all_algorithms_noconf, void, DUMMYARG, return, DUMMYARG)
 DEFINEFUNC(void, OPENSSL_add_all_algorithms_conf, void, DUMMYARG, return, DUMMYARG)
 #else
 DEFINEFUNC2(int, OPENSSL_init_crypto, uint64_t opts, opts, const OPENSSL_INIT_SETTINGS *settings, settings, return -1, return)
 #endif
 DEFINEFUNC3(int, SSL_CTX_load_verify_locations, SSL_CTX *ctx, ctx, const char *CAfile, CAfile, const char *CApath, CApath, return 0, return)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(long, SSLeay, void, DUMMYARG, return 0, return)
 #else
 DEFINEFUNC(unsigned long, OpenSSL_version_num, void, DUMMYARG, return 0, return)
@@ -336,7 +336,7 @@ DEFINEFUNC(unsigned long, OpenSSL_versio
 DEFINEFUNC(X509_STORE *, SSL_CTX_get_cert_store, const SSL_CTX *ctx, ctx, return 0, return)
 
 DEFINEFUNC(ASN1_INTEGER *, X509_get_serialNumber, X509 *x, x, return 0, return)
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(int, EVP_PKEY_id, const EVP_PKEY *pkey, pkey, return 0, return)
 DEFINEFUNC(int, EVP_PKEY_base_id, const EVP_PKEY *pkey, pkey, return 0, return)
 DEFINEFUNC2(int, SSL_CIPHER_get_bits, const SSL_CIPHER *cipher, cipher, int *alg_bits, alg_bits, return 0, return)
@@ -345,7 +345,7 @@ DEFINEFUNC(long, X509_get_version, X509
 DEFINEFUNC(X509_PUBKEY *, X509_get_X509_PUBKEY, X509 *x, x, return 0, return)
 DEFINEFUNC(int, RSA_bits,  const RSA *rsa, rsa, return 0, return)
 DEFINEFUNC(int, DSA_security_bits, const DSA *dsa, dsa, return 0, return)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(ASN1_TIME *, X509_get_notAfter, X509 *x, x, return 0, return)
 DEFINEFUNC(ASN1_TIME *, X509_get_notBefore, X509 *x, x, return 0, return)
 #else
@@ -648,7 +648,7 @@ bool q_resolveOpenSslSymbols()
     static volatile bool symbolsResolved = false;
     static volatile bool triedToResolveSymbols = false;
 #ifndef QT_NO_THREAD
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     QMutexLocker locker(QMutexPool::globalInstanceGet((void *)&q_SSL_library_init));
 #else
     QMutexLocker locker(QMutexPool::globalInstanceGet((void *)&q_OPENSSL_init_ssl));
@@ -686,7 +686,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(BIO_write, 269, libs.second )
     RESOLVEFUNC(BN_num_bits, 387, libs.second )
     RESOLVEFUNC(CRYPTO_free, 469, libs.second )
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(CRYPTO_num_locks, 500, libs.second )
     RESOLVEFUNC(CRYPTO_set_id_callback, 513, libs.second )
     RESOLVEFUNC(CRYPTO_set_locking_callback, 516, libs.second )
@@ -748,7 +748,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(SSL_get_peer_cert_chain, 117, libs.first )
     RESOLVEFUNC(SSL_get_peer_certificate, 118, libs.first )
     RESOLVEFUNC(SSL_get_verify_result, 132, libs.first )
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSL_library_init, 137, libs.first )
     RESOLVEFUNC(SSL_load_error_strings, 139, libs.first )
 #endif
@@ -823,7 +823,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(BIO_write)
     RESOLVEFUNC(BN_num_bits)
     RESOLVEFUNC(CRYPTO_free)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(CRYPTO_num_locks)
     RESOLVEFUNC(CRYPTO_set_id_callback)
     RESOLVEFUNC(CRYPTO_set_locking_callback)
@@ -857,7 +857,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(RAND_seed)
     RESOLVEFUNC(RAND_status)
     RESOLVEFUNC(RSA_free)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(sk_free)
     RESOLVEFUNC(sk_num)
     RESOLVEFUNC(sk_pop_free)
@@ -893,7 +893,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(SSL_get_peer_cert_chain)
     RESOLVEFUNC(SSL_get_peer_certificate)
     RESOLVEFUNC(SSL_get_verify_result)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSL_library_init)
     RESOLVEFUNC(SSL_load_error_strings)
 #else
@@ -911,7 +911,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(SSL_write)
 
     RESOLVEFUNC(X509_get_serialNumber)
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSL_CTX_ctrl)
     RESOLVEFUNC(EVP_PKEY_id)
     RESOLVEFUNC(EVP_PKEY_base_id)
@@ -937,7 +937,7 @@ bool q_resolveOpenSslSymbols()
 #ifndef OPENSSL_NO_SSL3_METHOD
     RESOLVEFUNC(SSLv3_client_method)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSLv23_client_method)
 #else
     RESOLVEFUNC(TLS_client_method)
@@ -949,7 +949,7 @@ bool q_resolveOpenSslSymbols()
 #ifndef OPENSSL_NO_SSL3_METHOD
     RESOLVEFUNC(SSLv3_server_method)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSLv23_server_method)
 #else
     RESOLVEFUNC(TLS_server_method)
@@ -970,7 +970,7 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(X509_STORE_CTX_get_error)
     RESOLVEFUNC(X509_STORE_CTX_get_error_depth)
     RESOLVEFUNC(X509_STORE_CTX_get_current_cert)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(X509_STORE_CTX_get_chain)
 #else
     RESOLVEFUNC(X509_STORE_CTX_get0_chain)
@@ -995,14 +995,14 @@ bool q_resolveOpenSslSymbols()
     RESOLVEFUNC(d2i_DSAPrivateKey)
     RESOLVEFUNC(d2i_RSAPrivateKey)
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(OPENSSL_add_all_algorithms_noconf)
     RESOLVEFUNC(OPENSSL_add_all_algorithms_conf)
 #else
     RESOLVEFUNC(OPENSSL_init_crypto)
 #endif
     RESOLVEFUNC(SSL_CTX_load_verify_locations)
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     RESOLVEFUNC(SSLeay)
 #else
     RESOLVEFUNC(OpenSSL_version_num)
