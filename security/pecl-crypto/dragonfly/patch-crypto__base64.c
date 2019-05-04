LibreSSL compat v2.9.1

--- crypto_base64.c.orig	2016-12-15 18:58:24 UTC
+++ crypto_base64.c
@@ -23,8 +23,9 @@
 
 #include <openssl/evp.h>
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 
+#if !defined(LIBRESSL_VERSION_NUMBER)
 static inline EVP_ENCODE_CTX *EVP_ENCODE_CTX_new()
 {
 	EVP_ENCODE_CTX *ctx = OPENSSL_malloc(sizeof(EVP_ENCODE_CTX));
@@ -36,6 +37,7 @@ static inline void EVP_ENCODE_CTX_free(E
 {
 	OPENSSL_free(ctx);
 }
+#endif
 
 static inline int EVP_ENCODE_CTX_copy(EVP_ENCODE_CTX *dctx, EVP_ENCODE_CTX *sctx)
 {
@@ -49,8 +51,10 @@ static inline int EVP_ENCODE_CTX_num(EVP
 	return ctx->num;
 }
 
+#if !defined(LIBRESSL_VERSION_NUMBER)
 #define EVP_ENCODE_LENGTH(l) (((l+2)/3*4)+(l/48+1)*2+80)
 #define EVP_DECODE_LENGTH(l) ((l+3)/4*3+80)
+#endif
 
 #endif
 
