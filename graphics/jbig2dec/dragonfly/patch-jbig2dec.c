--- jbig2dec.c.bak.intermediate	2019-04-22 17:03:22 UTC
+++ jbig2dec.c
@@ -40,7 +40,7 @@
 #endif
 
 #include "os_types.h"
-#include <sha.h>
+#include <openssl/sha.h>
 #ifndef SHA1_DIGEST_SIZE
 #	define SHA1_DIGEST_SIZE	20
 #endif
@@ -66,7 +66,7 @@ typedef enum {
 typedef struct {
     jbig2dec_mode mode;
     int verbose, hash, embedded;
-    SHA1_CTX *hash_ctx;
+    SHA_CTX *hash_ctx;
     char *output_filename;
     jbig2dec_format output_format;
 } jbig2dec_params_t;
@@ -78,7 +78,7 @@ static int print_usage(void);
 static void
 hash_init(jbig2dec_params_t *params)
 {
-    params->hash_ctx = (SHA1_CTX *) malloc(sizeof(SHA1_CTX));
+    params->hash_ctx = (SHA_CTX *) malloc(sizeof(SHA_CTX));
     if (params->hash_ctx == NULL) {
         fprintf(stderr, "unable to allocate hash state\n");
         params->hash = 0;
@@ -103,7 +103,7 @@ hash_print(jbig2dec_params_t *params, FI
     char digest[2 * SHA1_DIGEST_SIZE + 1];
     int i;
 
-    SHA1_Final(params->hash_ctx, md);
+    SHA1_Final(md, params->hash_ctx);
     for (i = 0; i < SHA1_DIGEST_SIZE; i++) {
         snprintf(&(digest[2 * i]), 3, "%02x", md[i]);
     }
