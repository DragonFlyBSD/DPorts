--- src/switch_rtp.c.orig	2018-09-07 17:29:48 UTC
+++ src/switch_rtp.c
@@ -110,6 +110,12 @@ static int zrtp_on = 0;
 #define ENABLE_SRTP
 #endif
 
+#ifdef HAVE_OPENSSL
+#include <openssl/ssl.h>
+#include <openssl/err.h>
+#include <openssl/rand.h>
+#endif
+
 static switch_hash_t *alloc_hash = NULL;
 
 typedef struct {
