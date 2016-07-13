--- support.h.orig	2004-01-12 11:07:02.000000000 +0200
+++ support.h
@@ -1,5 +1,7 @@
 #include "config.h"
 
+#include <cstring>
+
 /* This function lowercases the passed in string. */
 void lc(char *s);
 
