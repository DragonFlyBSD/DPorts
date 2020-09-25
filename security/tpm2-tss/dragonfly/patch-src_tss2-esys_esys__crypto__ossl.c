--- src/tss2-esys/esys_crypto_ossl.c.orig	2020-08-04 18:27:24 UTC
+++ src/tss2-esys/esys_crypto_ossl.c
@@ -25,7 +25,7 @@
 #include "util/log.h"
 #include "util/aux_util.h"
 
-#if OPENSSL_VERSION_NUMBER >= 0x10101000L
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 #define EC_POINT_set_affine_coordinates_tss(group, tpm_pub_key, bn_x, bn_y, dmy) \
         EC_POINT_set_affine_coordinates(group, tpm_pub_key, bn_x, bn_y, dmy)
 
@@ -525,7 +525,7 @@ iesys_cryptossl_random2b(TPM2B_NONCE * n
         nonce->size = num_bytes;
     }
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if (OPENSSL_VERSION_NUMBER >= 0x10100000L) && !defined(LIBRESSL_VERSION_NUMBER)
     RAND_set_rand_method(RAND_OpenSSL());
 #else
     RAND_set_rand_method(RAND_SSLeay());
@@ -563,7 +563,7 @@ iesys_cryptossl_pk_encrypt(TPM2B_PUBLIC
                            size_t * out_size, const char *label)
 {
     const RAND_METHOD *rand_save = RAND_get_rand_method();
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if (OPENSSL_VERSION_NUMBER >= 0x10100000L) && !defined(LIBRESSL_VERSION_NUMBER)
     RAND_set_rand_method(RAND_OpenSSL());
 #else
     RAND_set_rand_method(RAND_SSLeay());
