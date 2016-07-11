--- utils.c.orig	2003-01-16 13:14:42.000000000 +0200
+++ utils.c
@@ -67,7 +67,9 @@
 
 #include "sma.h"
 
+#ifndef __DragonFly__
 int isdigit(int);
+#endif
 
 /*
  * Take month as an ascii string and return integer
