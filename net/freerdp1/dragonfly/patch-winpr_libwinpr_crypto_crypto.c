--- winpr/libwinpr/crypto/crypto.c.intermediate	2019-12-28 20:07:22.000000000 +0000
+++ winpr/libwinpr/crypto/crypto.c
@@ -177,7 +177,7 @@ BOOL CryptProtectMemory(LPVOID pData, DW
 
 	SecureZeroMemory(randomKey, sizeof(randomKey));
 
-#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
+#if OPENSSL_VERSION_NUMBER >= 0x1010000fL && !defined(LIBRESSL_VERSION_NUMBER)
 	pMemBlock->enc = EVP_CIPHER_CTX_new();
 	pMemBlock->dec = EVP_CIPHER_CTX_new();
 
@@ -199,7 +199,7 @@ BOOL CryptProtectMemory(LPVOID pData, DW
 	cbOut = pMemBlock->cbData + AES_BLOCK_SIZE - 1;
 	pCipherText = (BYTE*) malloc(cbOut);
 
-#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
+#if OPENSSL_VERSION_NUMBER >= 0x1010000fL && !defined(LIBRESSL_VERSION_NUMBER)
 	EVP_EncryptInit_ex(pMemBlock->enc, NULL, NULL, NULL, NULL);
 	EVP_EncryptUpdate(pMemBlock->enc, pCipherText, &cbOut, pMemBlock->pData, pMemBlock->cbData);
 	EVP_EncryptFinal_ex(pMemBlock->enc, pCipherText + cbOut, &cbFinal);
@@ -250,7 +250,7 @@ BOOL CryptUnprotectMemory(LPVOID pData,
 	ListDictionary_Remove(g_ProtectedMemoryBlocks, pData);
 
 	/* AES Cleanup */
-#if OPENSSL_VERSION_NUMBER >= 0x1010000fL
+#if OPENSSL_VERSION_NUMBER >= 0x1010000fL && !defined(LIBRESSL_VERSION_NUMBER)
 	EVP_CIPHER_CTX_cleanup(pMemBlock->enc);
 	EVP_CIPHER_CTX_cleanup(pMemBlock->dec);
 	EVP_CIPHER_CTX_free(pMemBlock->enc);
