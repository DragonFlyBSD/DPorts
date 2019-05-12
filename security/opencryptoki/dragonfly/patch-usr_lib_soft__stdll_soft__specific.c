--- usr/lib/soft_stdll/soft_specific.c.intermediate	2019-05-12 11:44:19.000000000 +0000
+++ usr/lib/soft_stdll/soft_specific.c
@@ -477,7 +477,7 @@ static void *rsa_convert_private_key(OBJ
      * Token doesn't implement RSA and, instead, calls OpenSSL for it.
      * So to avoid it we set RSA methods to the default rsa methods.
      */
-#ifdef OLDER_OPENSSL
+#if defined(OLDER_OPENSSL) || defined(LIBRESSL_VERSION_NUMBER)
     if (rsa->engine) {
         meth = (RSA_METHOD *) rsa->meth;
         const RSA_METHOD *meth2 = RSA_PKCS1_SSLeay();
