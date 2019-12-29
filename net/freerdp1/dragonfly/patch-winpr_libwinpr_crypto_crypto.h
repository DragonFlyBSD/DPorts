--- winpr/libwinpr/crypto/crypto.h.intermediate	2019-12-28 20:07:22.000000000 +0000
+++ winpr/libwinpr/crypto/crypto.h
@@ -41,7 +41,7 @@ struct _WINPR_PROTECTED_MEMORY_BLOCK
 	BYTE key[32];
 	BYTE iv[32];
 	BYTE salt[8];
-#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
+#if OPENSSL_VERSION_NUMBER >= 0x1010000fL && !defined(LIBRESSL_VERSION_NUMBER)
 	EVP_CIPHER_CTX *enc;
 	EVP_CIPHER_CTX *dec;
 #else
