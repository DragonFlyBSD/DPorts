--- src/get.c.intermediate	2021-12-26 09:19:40.000000000 +0000
+++ src/get.c
@@ -53,6 +53,7 @@
 #endif /* WIN32 */
 
 #ifdef STONE_SSL
+#include <openssl/err.h>
 #include <openssl/ssl.h>
 #include <openssl/bio.h>
 #endif
