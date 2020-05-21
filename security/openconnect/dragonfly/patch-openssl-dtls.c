--- openssl-dtls.c.orig	2020-03-30 23:23:30 UTC
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
