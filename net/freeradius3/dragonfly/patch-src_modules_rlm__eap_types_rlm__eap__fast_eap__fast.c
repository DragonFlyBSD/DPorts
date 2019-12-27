--- src/modules/rlm_eap/types/rlm_eap_fast/eap_fast.c.orig	2019-11-14 17:08:23 UTC
+++ src/modules/rlm_eap/types/rlm_eap_fast/eap_fast.c
@@ -44,7 +44,7 @@ static int openssl_get_keyblock_size(REQ
 {
 	const EVP_CIPHER *c;
 	const EVP_MD *h;
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	int md_size;
 
 	if (ssl->enc_read_ctx == NULL || ssl->enc_read_ctx->cipher == NULL ||
