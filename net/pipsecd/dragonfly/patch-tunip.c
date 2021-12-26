--- tunip.c.intermediate	2016-06-29 14:57:38 UTC
+++ tunip.c
@@ -36,7 +36,11 @@
 #include <fcntl.h>
 #include <stdio.h>
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <net/tun/if_tun.h>
+#else
 #include <net/if_tun.h>
+#endif
 #include <netinet/in_systm.h>
 #include <netinet/in.h>
 #include <netinet/ip.h>
@@ -134,7 +138,9 @@ typedef union {
 	DES_key_schedule k3;
     } des3;
     CAST_KEY cast;
+#ifndef OPENSSL_NO_IDEA
     IDEA_KEY_SCHEDULE idea;
+#endif
 } crypt_key;
 
 typedef struct crypt_method {
@@ -307,12 +313,14 @@ void cast_cbc_encrypt(unsigned char *iv,
 void cast_cbc_decrypt(unsigned char *iv, crypt_key *dk,
 		      unsigned char *ct, unsigned int len);
 int cast_setkey(unsigned char *b, unsigned int len, crypt_key *k);
+#ifndef OPENSSL_NO_IDEA
 void my_idea_cbc_encrypt(unsigned char *iv, crypt_key *ek,
 			 unsigned char *t, unsigned int len);
 void my_idea_cbc_decrypt(unsigned char *iv, crypt_key *dk,
 			 unsigned char *ct, unsigned int len);
 int my_idea_set_encrypt_key(unsigned char *b, unsigned int len, crypt_key *k);
 int my_idea_set_decrypt_key(unsigned char *b, unsigned int len, crypt_key *k);
+#endif
 void my_des_cbc_encrypt(unsigned char *iv, crypt_key *ek,
 			unsigned char *t, unsigned int len);
 void my_des_cbc_decrypt(unsigned char *iv, crypt_key *dk,
@@ -382,14 +390,20 @@ hash_method_t hash_ripemd160 = {
 
 hash_method_t *hash_list = &hash_ripemd160;
 
+#ifndef OPENSSL_NO_IDEA
 crypt_method_t crypt_idea = {
     NULL,
     "idea_cbc", 8, 8,
     my_idea_cbc_encrypt, my_idea_cbc_decrypt,
     my_idea_set_encrypt_key, my_idea_set_decrypt_key
 };
+#endif
 crypt_method_t crypt_cast = {
+#ifndef OPENSSL_NO_IDEA
     &crypt_idea,
+#else
+    NULL,
+#endif
     "cast_cbc", 8, 8,
     cast_cbc_encrypt, cast_cbc_decrypt,
     cast_setkey, cast_setkey
@@ -1988,6 +2002,7 @@ int cast_setkey(unsigned char *b, unsign
     return 0;
 }
 
+#ifndef OPENSSL_NO_IDEA
 void my_idea_cbc_encrypt(unsigned char *iv, crypt_key *ek,
 			 unsigned char *t, unsigned int len)
 {
@@ -2016,6 +2031,7 @@ int my_idea_set_decrypt_key(unsigned cha
     idea_set_decrypt_key(&k->idea, &k->idea);
     return 0;
 }
+#endif
 
 void my_des_cbc_encrypt(unsigned char *iv, crypt_key *ek,
 			unsigned char *t, unsigned int len)
