--- plugins/qca-ossl/ossl110-compat.h.orig	2019-04-24 12:58:14 UTC
+++ plugins/qca-ossl/ossl110-compat.h
@@ -25,6 +25,24 @@
 #include <openssl/rsa.h>
 #include <openssl/dsa.h>
 
+#if defined(LIBRESSL_VERSION_NUMBER)
+static int RSA_meth_set_sign(RSA_METHOD *meth, int (*sign) (int type, const unsigned char *m,
+    unsigned int m_length, unsigned char *sigret, unsigned int *siglen, const RSA *rsa))
+{
+    if (!meth) return 0;
+    meth->rsa_sign = sign;
+    return 1;
+}
+
+static int RSA_meth_set_verify(RSA_METHOD *meth, int (*verify) (int dtype, const unsigned char *m,
+    unsigned int m_length, const unsigned char *sigbuf, unsigned int siglen, const RSA *rsa))
+{
+    if (!meth) return 0;
+    meth->rsa_verify = verify;
+    return 1;
+}
+#endif
+
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
 #define RSA_F_RSA_METH_DUP 161
 
