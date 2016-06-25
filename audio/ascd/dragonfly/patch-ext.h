--- ext.h.orig	1999-07-05 18:26:26.000000000 +0200
+++ ext.h
@@ -26,7 +26,9 @@
 #endif
 
 extern open();
+#ifndef __DragonFly__
 extern time();
+#endif
 
 /* added this for this lib: */
 extern unsigned int info_modified;
