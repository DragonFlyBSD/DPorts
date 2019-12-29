--- pound.h.intermediate	2019-12-29 10:58:46.000000000 +0000
+++ pound.h
@@ -346,7 +346,7 @@ typedef struct _tn {
 /* maximal session key size */
 #define KEY_SIZE    127
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
   DEFINE_LHASH_OF(TABNODE);
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
 DECLARE_LHASH_OF(TABNODE);
