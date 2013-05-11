--- encrypt_openssl.c.orig	2013-04-27 18:20:19.000000000 +0000
+++ encrypt_openssl.c
@@ -873,7 +873,7 @@ int verify_ECDSA_sig(EC_key_t ec, int ha
  */
 static void *KDF(const void *in, size_t inlen, void *out, size_t *outlen)
 {
-    if (!hash(HASH_SHA1, in, inlen, out, outlen)) {
+    if (!hash(HASH_SHA1, in, inlen, out, (unsigned int *) outlen)) {
         return NULL;
     } else {
         return out;
