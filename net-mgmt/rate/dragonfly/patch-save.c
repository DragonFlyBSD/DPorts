--- save.c.orig	2003-08-20 15:06:48 UTC
+++ save.c
@@ -22,6 +22,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <assert.h>
+#include <unistd.h> /* for getuid() */
 
 #define MAX_LINE_SIZE 512
 
