--- src/network/ssl/qsslsocket_openssl_symbols_p.h.orig	2018-05-29 06:56:52 UTC
+++ src/network/ssl/qsslsocket_openssl_symbols_p.h
@@ -207,7 +207,7 @@ int q_ASN1_STRING_length(ASN1_STRING *a)
 int q_ASN1_STRING_to_UTF8(unsigned char **a, ASN1_STRING *b);
 long q_BIO_ctrl(BIO *a, int b, long c, void *d);
 int q_BIO_free(BIO *a);
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 BIO *q_BIO_new(BIO_METHOD *a);
 #else
 BIO *q_BIO_new(const BIO_METHOD *a);
@@ -221,7 +221,7 @@ const BIO_METHOD *q_BIO_s_mem();
 #endif
 int q_BIO_write(BIO *a, const void *b, int c);
 int q_BN_num_bits(const BIGNUM *a);
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 int q_CRYPTO_num_locks();
 void q_CRYPTO_set_locking_callback(void (*a)(int, int, const char *, int));
 void q_CRYPTO_set_id_callback(unsigned long (*a)());
@@ -273,7 +273,7 @@ int q_PEM_write_bio_RSA_PUBKEY(BIO *a, R
 void q_RAND_seed(const void *a, int b);
 int q_RAND_status();
 void q_RSA_free(RSA *a);
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 int q_sk_num(STACK *a);
 void q_sk_pop_free(STACK *a, void (*b)(void *));
 #if OPENSSL_VERSION_NUMBER >= 0x10000000L
@@ -340,7 +340,7 @@ long q_SSL_get_verify_result(const SSL *
 #else
 long q_SSL_get_verify_result(SSL *a);
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 int q_SSL_library_init();
 void q_SSL_load_error_strings();
 #else
@@ -360,7 +360,7 @@ int q_SSL_shutdown(SSL *a);
 #if OPENSSL_VERSION_NUMBER >= 0x10000000L
 const SSL_METHOD *q_SSLv2_client_method();
 const SSL_METHOD *q_SSLv3_client_method();
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 const SSL_METHOD *q_SSLv23_client_method();
 #else
 const SSL_METHOD *q_TLS_client_method();
@@ -369,7 +369,7 @@ const SSL_METHOD *q_TLS_client_method();
 const SSL_METHOD *q_TLSv1_client_method();
 const SSL_METHOD *q_SSLv2_server_method();
 const SSL_METHOD *q_SSLv3_server_method();
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 const SSL_METHOD *q_SSLv23_server_method();
 #else
 const SSL_METHOD *q_TLS_server_method();
@@ -419,7 +419,7 @@ int q_X509_STORE_CTX_set_purpose(X509_ST
 int q_X509_STORE_CTX_get_error(X509_STORE_CTX *ctx);
 int q_X509_STORE_CTX_get_error_depth(X509_STORE_CTX *ctx);
 X509 *q_X509_STORE_CTX_get_current_cert(X509_STORE_CTX *ctx);
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 STACK_OF(X509) *q_X509_STORE_CTX_get_chain(X509_STORE_CTX *ctx);
 #else
 STACK_OF(X509) *q_X509_STORE_CTX_get0_chain(X509_STORE_CTX *ctx);
@@ -450,7 +450,7 @@ DSA *q_d2i_DSAPrivateKey(DSA **a, unsign
 X509_STORE * q_SSL_CTX_get_cert_store(const SSL_CTX *ctx);
 ASN1_INTEGER * q_X509_get_serialNumber(X509 *x);
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 #define q_SSL_CTX_set_options(ctx,op) q_SSL_CTX_ctrl((ctx),SSL_CTRL_OPTIONS,(op),NULL)
 #define q_X509_get_version(x) X509_get_version(x)
 #else
@@ -476,7 +476,7 @@ void q_DSA_get0_pqg(const DSA *d, const
 #define q_SSL_CTX_add_extra_chain_cert(ctx,x509) \
         q_SSL_CTX_ctrl(ctx,SSL_CTRL_EXTRA_CHAIN_CERT,0,(char *)x509)
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 #define q_X509_get_notAfter(x) X509_get_notAfter(x)
 #define q_X509_get_notBefore(x) X509_get_notBefore(x)
 #else
@@ -495,7 +495,7 @@ ASN1_TIME *q_X509_getm_notBefore(X509 *x
 #else
 #define q_OpenSSL_add_all_algorithms() q_OPENSSL_add_all_algorithms_noconf()
 #endif
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 void q_OPENSSL_add_all_algorithms_noconf();
 void q_OPENSSL_add_all_algorithms_conf();
 #else
@@ -504,7 +504,7 @@ int q_OPENSSL_init_crypto(uint64_t opts,
 #  define q_OPENSSL_add_all_algorithms_noconf() q_OPENSSL_init_crypto(OPENSSL_INIT_ADD_ALL_CIPHERS | OPENSSL_INIT_ADD_ALL_DIGESTS, NULL)
 #endif
 int q_SSL_CTX_load_verify_locations(SSL_CTX *ctx, const char *CAfile, const char *CApath);
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 long q_SSLeay();
 #else
 unsigned long q_OpenSSL_version_num();
