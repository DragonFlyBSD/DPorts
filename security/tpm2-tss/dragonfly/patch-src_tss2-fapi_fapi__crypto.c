--- src/tss2-fapi/fapi_crypto.c.orig	2020-09-25 10:50:49 UTC
+++ src/tss2-fapi/fapi_crypto.c
@@ -26,7 +26,7 @@
 #define LOGMODULE fapi
 #include "util/log.h"
 
-#if OPENSSL_VERSION_NUMBER >= 0x10101000L
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 #define EC_POINT_set_affine_coordinates_tss(group, tpm_pub_key, bn_x, bn_y, dmy) \
         EC_POINT_set_affine_coordinates(group, tpm_pub_key, bn_x, bn_y, dmy)
 
