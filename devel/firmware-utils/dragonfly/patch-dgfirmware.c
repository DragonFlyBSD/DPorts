--- dgfirmware.c.orig	2011-12-22 14:21:03 UTC
+++ dgfirmware.c
@@ -1,5 +1,6 @@
 #include <stdlib.h>
 #include <stdio.h>
+#include <string.h> /* for strcmp() */
 
 
 #define IMG_SIZE     0x3e0000
