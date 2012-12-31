--- config/util/makestrs.c.orig	2012-10-22 16:50:39.000000000 +0200
+++ config/util/makestrs.c	2012-12-30 23:31:39.357585000 +0100
@@ -32,6 +32,7 @@
 #endif
 
 #include <stdio.h>
+#include <string.h>
 #include <X11/Xos.h>
 #ifndef X_NOT_STDC_ENV
 #include <stdlib.h>
