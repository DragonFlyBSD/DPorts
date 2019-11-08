--- plugins/qca-ossl/ossl110-compat.h.intermediate	2019-11-08 14:37:59.000000000 +0000
+++ plugins/qca-ossl/ossl110-compat.h
@@ -256,7 +256,7 @@ static void HMAC_CTX_free(HMAC_CTX *ctx)
 
 #endif // OPENSSL_VERSION_NUMBER < 0x10100000L
 
-#if (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER)
+#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
 static int RSA_meth_set_sign(RSA_METHOD *meth, int (*sign) (int type, const unsigned char *m,
     unsigned int m_length, unsigned char *sigret, unsigned int *siglen, const RSA *rsa))
 {
@@ -272,6 +272,6 @@ static int RSA_meth_set_verify(RSA_METHO
     meth->rsa_verify = verify;
     return 1;
 }
-#endif // (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER)
+#endif // (OPENSSL_VERSION_NUMBER < 0x10100000L)
 
 #endif // OSSL110COMPAT_H
