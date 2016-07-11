--- init.c.orig	2003-01-16 13:14:42.000000000 +0200
+++ init.c
@@ -32,7 +32,9 @@
 
 #include "sma.h"
 
+#ifndef __DragonFly__
 int isspace(int);
+#endif
 
 void
 init(FILE *conf) {
