--- src/engine/openssl/ossl_bc.cpp.orig	2017-10-02 06:00:00 UTC
+++ src/engine/openssl/ossl_bc.cpp
@@ -8,7 +8,7 @@
 #include <botan/internal/openssl_engine.h>
 #include <openssl/evp.h>
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000
+#if OPENSSL_VERSION_NUMBER >= 0x10100000 && !defined(LIBRESSL_VERSION_NUMBER)
   #error "OpenSSL 1.1 API not supported in Botan 1.10, upgrade to 2.x"
 #endif
 
