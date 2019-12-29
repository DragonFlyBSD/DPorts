--- openssl-dtls.c.orig	2019-06-12 09:17:15 UTC
+++ openssl-dtls.c
@@ -32,6 +32,10 @@
 
 #include "openconnect-internal.h"
 
+#ifdef LIBRESSL_VERSION_NUMBER
+#undef HAVE_DTLS12
+#endif
+
 /* In the very early days there were cases where this wasn't found in
  * the header files but it did still work somehow. I forget the details
  * now but I was definitely avoiding using the macro. Let's just define
@@ -315,7 +319,7 @@ static unsigned int psk_callback(SSL *ss
 
 #endif
 
-#if OPENSSL_VERSION_NUMBER < 0x10002000L
+#if OPENSSL_VERSION_NUMBER < 0x10002000L || defined(LIBRESSL_VERSION_NUMBER)
 static const SSL_CIPHER *SSL_CIPHER_find(SSL *ssl, const unsigned char *ptr)
 {
     return ssl->method->get_cipher_by_char(ptr);
