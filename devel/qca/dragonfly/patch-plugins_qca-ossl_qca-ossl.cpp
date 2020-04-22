--- plugins/qca-ossl/qca-ossl.cpp.intermediate	2020-04-22 00:24:52 UTC
+++ plugins/qca-ossl/qca-ossl.cpp
@@ -41,7 +41,9 @@
 #include <openssl/pkcs12.h>
 #include <openssl/ssl.h>
 
+#ifndef LIBRESSL_VERSION_NUMBER
 #include <openssl/kdf.h>
+#endif
 
 #ifndef RSA_F_RSA_OSSL_PRIVATE_DECRYPT
 #define RSA_F_RSA_OSSL_PRIVATE_DECRYPT RSA_F_RSA_EAY_PRIVATE_DECRYPT
