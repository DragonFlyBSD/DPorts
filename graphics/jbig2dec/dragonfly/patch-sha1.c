--- sha1.c.orig	2023-10-24 09:27:08 UTC
+++ sha1.c
@@ -87,7 +87,7 @@ A million repetitions of "a"
 
 #include "os_types.h"
 
-#include <sha.h>
+#include <openssl/sha.h>
 #ifndef SHA1_DIGEST_SIZE
 #define SHA1_DIGEST_SIZE 20
 #endif
@@ -120,7 +120,7 @@ void SHA1_Transform(uint32_t state[5], c
 
 #ifdef VERBOSE                  /* SAK */
 void
-SHAPrintContext(SHA1_CTX *context, char *msg)
+SHAPrintContext(SHA_CTX *context, char *msg)
 {
     printf("%s (%d,%d) %x %x %x %x %x\n",
            msg, context->count[0], context->count[1], context->state[0], context->state[1], context->state[2], context->state[3], context->state[4]);
@@ -189,7 +189,7 @@ SHA1_Transform(uint32_t state[5], const
 
 /* SHA1Init - Initialize new context */
 void
-SHA1_Init(SHA1_CTX *context)
+SHA1_Init(SHA_CTX *context)
 {
     /* SHA1 initialization constants */
     context->state[0] = 0x67452301;
@@ -202,7 +202,7 @@ SHA1_Init(SHA1_CTX *context)
 
 /* Run your data through this. */
 void
-SHA1_Update(SHA1_CTX *context, const uint8_t *data, const size_t len)
+SHA1_Update(SHA_CTX *context, const uint8_t *data, const size_t len)
 {
     size_t i, j;
 
@@ -232,7 +232,7 @@ SHA1_Update(SHA1_CTX *context, const uin
 
 /* Add padding and return the message digest. */
 void
-SHA1_Final(uint8_t digest[SHA1_DIGEST_SIZE], SHA1_CTX *context)
+SHA1_Final(uint8_t digest[SHA1_DIGEST_SIZE], SHA_CTX *context)
 {
     uint32_t i;
     uint8_t finalcount[8];
@@ -269,7 +269,7 @@ int
 main(int argc, char **argv)
 {
     int i, j;
-    SHA1_CTX context;
+    SHA_CTX context;
     unsigned char digest[SHA1_DIGEST_SIZE], buffer[16384];
     FILE *file;
 
@@ -341,7 +341,7 @@ int
 main(int argc, char **argv)
 {
     int k;
-    SHA1_CTX context;
+    SHA_CTX context;
     uint8_t digest[20];
     char output[80];
 
