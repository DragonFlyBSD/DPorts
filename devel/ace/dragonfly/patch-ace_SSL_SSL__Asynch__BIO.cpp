--- ace/SSL/SSL_Asynch_BIO.cpp.orig	2018-09-18 07:26:56 UTC
+++ ace/SSL/SSL_Asynch_BIO.cpp
@@ -41,6 +41,10 @@ extern "C"
 
 #define BIO_TYPE_ACE  ( 21 | BIO_TYPE_SOURCE_SINK )
 
+#if defined(LIBRESSL_VERSION_NUMBER)
+# define BIO_get_init(b) b->init
+#endif
+
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
 static BIO_METHOD methods_ACE =
   {
