--- file.h.orig	2009-04-22 16:21:44 UTC
+++ file.h
@@ -32,6 +32,9 @@
 #include <sys/tree.h>
 
 #include <dirent.h>
+#ifndef MAXNAMLEN
+# define MAXNAMLEN 255
+#endif
 #include <stdio.h>
 
 #include "rcs.h"
