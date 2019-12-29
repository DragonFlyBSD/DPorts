--- include/libssl_compat.h.intermediate	2019-12-29 08:17:54.000000000 +0000
+++ include/libssl_compat.h
@@ -37,7 +37,7 @@
 #endif
 
 /* ----------------------------------------------------------------- */
-#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 /* ----------------------------------------------------------------- */
 
 # include <openssl/objects.h>
