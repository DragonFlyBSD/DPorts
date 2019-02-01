--- src/qt/qtbase/src/network/ssl/qsslsocket_openssl_symbols_p.h~	2015-12-12 13:58:05.000000000 +0100
+++ src/qt/qtbase/src/network/ssl/qsslsocket_openssl_symbols_p.h	2019-01-14 03:53:45.857116000 +0100
@@ -215,10 +215,18 @@ int q_ASN1_STRING_length(ASN1_STRING *a)
 int q_ASN1_STRING_to_UTF8(unsigned char **a, ASN1_STRING *b);
 long q_BIO_ctrl(BIO *a, int b, long c, void *d);
 int q_BIO_free(BIO *a);
+#if !defined(LIBRESSL_VERSION_NUMBER)
 BIO *q_BIO_new(BIO_METHOD *a);
+#else
+BIO *q_BIO_new(const BIO_METHOD *a);
+#endif
 BIO *q_BIO_new_mem_buf(void *a, int b);
 int q_BIO_read(BIO *a, void *b, int c);
+#if !defined(LIBRESSL_VERSION_NUMBER)
 BIO_METHOD *q_BIO_s_mem();
+#else
+const BIO_METHOD *q_BIO_s_mem();
+#endif
 int q_BIO_write(BIO *a, const void *b, int c);
 int q_BN_num_bits(const BIGNUM *a);
 #ifndef OPENSSL_NO_EC
