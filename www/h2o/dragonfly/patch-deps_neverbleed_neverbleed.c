LibreSSL v2.9.1 compat

--- deps/neverbleed/neverbleed.c.orig	2018-05-31 13:57:10 UTC
+++ deps/neverbleed/neverbleed.c
@@ -630,7 +630,7 @@ static int sign_stub(struct expbuf_t *bu
     return 0;
 }
 
-#if !OPENSSL_1_1_API
+#if !OPENSSL_1_1_API && !defined(LIBRESSL_VERSION_NUMBER)
 
 static void RSA_get0_key(const RSA *rsa, const BIGNUM **n, const BIGNUM **e, const BIGNUM **d)
 {
