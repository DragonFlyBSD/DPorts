--- src/tss2-esys/esys_crypto_ossl.c.orig	2022-02-18 14:42:43 UTC
+++ src/tss2-esys/esys_crypto_ossl.c
@@ -33,7 +33,7 @@
 #include "util/log.h"
 #include "util/aux_util.h"
 
-#if OPENSSL_VERSION_NUMBER >= 0x10101000L
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 #define EC_POINT_set_affine_coordinates_tss(group, tpm_pub_key, bn_x, bn_y, dmy) \
         EC_POINT_set_affine_coordinates(group, tpm_pub_key, bn_x, bn_y, dmy)
 
