--- src/p11_rsa.c.orig	2019-04-03 20:14:33 UTC
+++ src/p11_rsa.c
@@ -430,7 +430,7 @@ static int RSA_meth_set1_name(RSA_METHOD
 
 #endif
 
-#if OPENSSL_VERSION_NUMBER < 0x10100005L || defined(LIBRESSL_VERSION_NUMBER)
+#if OPENSSL_VERSION_NUMBER < 0x10100005L
 
 static int RSA_meth_set_flags(RSA_METHOD *meth, int flags)
 {
