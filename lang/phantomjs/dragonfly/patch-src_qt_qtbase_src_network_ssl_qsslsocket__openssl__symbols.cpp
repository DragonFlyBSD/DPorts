--- src/qt/qtbase/src/network/ssl/qsslsocket_openssl_symbols.cpp~	2015-12-12 13:58:05.000000000 +0100
+++ src/qt/qtbase/src/network/ssl/qsslsocket_openssl_symbols.cpp	2019-01-14 03:55:12.607585000 +0100
@@ -136,10 +136,18 @@ DEFINEFUNC(int, ASN1_STRING_length, ASN1
 DEFINEFUNC2(int, ASN1_STRING_to_UTF8, unsigned char **a, a, ASN1_STRING *b, b, return 0, return);
 DEFINEFUNC4(long, BIO_ctrl, BIO *a, a, int b, b, long c, c, void *d, d, return -1, return)
 DEFINEFUNC(int, BIO_free, BIO *a, a, return 0, return)
+#if !defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(BIO *, BIO_new, BIO_METHOD *a, a, return 0, return)
+#else
+DEFINEFUNC(BIO *, BIO_new, const BIO_METHOD *a, a, return 0, return)
+#endif
 DEFINEFUNC2(BIO *, BIO_new_mem_buf, void *a, a, int b, b, return 0, return)
 DEFINEFUNC3(int, BIO_read, BIO *a, a, void *b, b, int c, c, return -1, return)
+#if !defined(LIBRESSL_VERSION_NUMBER)
 DEFINEFUNC(BIO_METHOD *, BIO_s_mem, void, DUMMYARG, return 0, return)
+#else
+DEFINEFUNC(const BIO_METHOD *, BIO_s_mem, void, DUMMYARG, return 0, return)
+#endif
 DEFINEFUNC3(int, BIO_write, BIO *a, a, const void *b, b, int c, c, return -1, return)
 DEFINEFUNC(int, BN_num_bits, const BIGNUM *a, a, return 0, return)
 #ifndef OPENSSL_NO_EC
