--- src/modules/tls/tls_rand.c.orig	2019-11-14 11:38:12 UTC
+++ src/modules/tls/tls_rand.c
@@ -25,7 +25,7 @@
 
 #include "tls_rand.h"
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 
 #include "../../core/dprint.h"
 #include "../../core/locking.h"
