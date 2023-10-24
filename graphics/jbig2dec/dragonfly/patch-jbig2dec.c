--- jbig2dec.c.orig	2023-10-24 09:18:19 UTC
+++ jbig2dec.c
@@ -33,7 +33,7 @@
 #endif
 
 #include "os_types.h"
-#include <sha.h>
+#include <openssl/sha.h>
 #ifndef SHA1_DIGEST_SIZE
 #	define SHA1_DIGEST_SIZE	20
 #endif
@@ -65,7 +65,7 @@ typedef enum {
 typedef struct {
     jbig2dec_mode mode;
     int verbose, hash, embedded;
-    SHA1_CTX *hash_ctx;
+    SHA_CTX *hash_ctx;
     char *output_filename;
     jbig2dec_format output_format;
     size_t memory_limit;
@@ -213,7 +213,7 @@ static void *jbig2dec_realloc(Jbig2Alloc
 static void
 hash_init(jbig2dec_params_t *params)
 {
-    params->hash_ctx = (SHA1_CTX *) malloc(sizeof(SHA1_CTX));
+    params->hash_ctx = (SHA_CTX *) malloc(sizeof(SHA_CTX));
     if (params->hash_ctx == NULL) {
         fprintf(stderr, "unable to allocate hash state\n");
         params->hash = 0;
