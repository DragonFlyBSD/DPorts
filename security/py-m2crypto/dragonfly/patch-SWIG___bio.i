--- src/SWIG/_bio.i.orig	2021-08-03 21:36:51.820240000 +0200
+++ src/SWIG/_bio.i	2021-08-03 21:37:49.198938000 +0200
@@ -433,6 +433,10 @@
     return 1;
     }
 
+#ifdef LIBRESSL_VERSION_NUMBER
+#define BIO_get_init(b) (b)->init
+#endif
+
 static int pyfd_free(BIO* b) {
     BIO_PYFD_CTX* ctx;
 
