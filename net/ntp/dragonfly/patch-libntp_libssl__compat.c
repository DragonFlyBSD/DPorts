--- libntp/libssl_compat.c.intermediate	2019-12-29 08:17:54.000000000 +0000
+++ libntp/libssl_compat.c
@@ -26,7 +26,7 @@
 /* ----------------------------------------------------------------- */
 
 /* ----------------------------------------------------------------- */
-#if defined(OPENSSL) && (OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER))
+#if defined(OPENSSL) && OPENSSL_VERSION_NUMBER < 0x10100000L
 /* ----------------------------------------------------------------- */
 
 #include "libssl_compat.h"
