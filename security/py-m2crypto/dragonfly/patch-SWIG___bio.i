--- SWIG/_bio.i.orig	2018-03-06 22:45:31 UTC
+++ SWIG/_bio.i
@@ -433,6 +433,10 @@ static int pyfd_new(BIO* b) {
     return 1;
     }
 
+#ifdef LIBRESSL_VERSION_NUMBER
+#define BIO_get_init(b) (b)->init
+#endif
+
 static int pyfd_free(BIO* b) {
     BIO_PYFD_CTX* ctx;
 
