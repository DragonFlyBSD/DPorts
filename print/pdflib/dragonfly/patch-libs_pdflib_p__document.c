--- libs/pdflib/p_document.c.orig	2012-06-06 13:58:59.000000000 +0200
+++ libs/pdflib/p_document.c	2013-01-01 17:10:09.690897000 +0100
@@ -1411,7 +1411,11 @@
 #endif
 
         doc->fp = fp;
+#ifdef __DragonFly__
+        doc->len = sizeof(struct __FILE_public);
+#else
         doc->len = sizeof(FILE);
+#endif
     }
     else if (filename && (*filename || len > 0))
     {
