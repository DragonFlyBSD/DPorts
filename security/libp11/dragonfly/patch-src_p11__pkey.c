--- src/p11_pkey.c.orig	2019-04-03 20:14:33 UTC
+++ src/p11_pkey.c
@@ -90,6 +90,7 @@ typedef struct {
 	unsigned char *tbuf;
 } RSA_PKEY_CTX;
 
+#if !defined(LIBRESSL_VERSION_NUMBER)
 static int EVP_PKEY_CTX_get_signature_md(EVP_PKEY_CTX *ctx, const EVP_MD **pmd)
 {
 	RSA_PKEY_CTX *rctx = EVP_PKEY_CTX_get_data(ctx);
@@ -98,6 +99,7 @@ static int EVP_PKEY_CTX_get_signature_md
 	*pmd = rctx->md;
 	return 1;
 }
+#endif
 
 static int EVP_PKEY_CTX_get_rsa_oaep_md(EVP_PKEY_CTX *ctx, const EVP_MD **pmd)
 {
