--- openssl-esp.c.orig	2019-06-10 08:41:13 UTC
+++ openssl-esp.c
@@ -27,7 +27,7 @@
 #include <openssl/evp.h>
 #include <openssl/rand.h>
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 
 #define EVP_CIPHER_CTX_free(c) do {				\
 				    EVP_CIPHER_CTX_cleanup(c);	\
@@ -64,7 +64,7 @@ static int init_esp_cipher(struct openco
 
 	destroy_esp_ciphers(esp);
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	esp->cipher = malloc(sizeof(*esp->cipher));
 	if (!esp->cipher)
 		return -ENOMEM;
