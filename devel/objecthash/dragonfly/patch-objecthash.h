--- objecthash.h.orig	2016-02-23 19:32:29.000000000 +0200
+++ objecthash.h
@@ -8,7 +8,12 @@ extern "C" {
 
 typedef unsigned char byte;
 
+#ifdef __DragonFly__
+/* avoid c++'ism */
+#define HASH_SIZE SHA256_DIGEST_LENGTH
+#else
 static const int HASH_SIZE = SHA256_DIGEST_LENGTH;
+#endif
 
 typedef byte hash[HASH_SIZE];
 typedef SHA256_CTX hash_ctx;
