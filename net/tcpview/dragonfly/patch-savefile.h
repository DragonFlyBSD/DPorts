--- savefile.h.orig	1993-04-22 21:25:53 UTC
+++ savefile.h
@@ -27,6 +27,10 @@
  * a file, and then read them later.
  */
 
+#include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
+
 /*
  * Each packet in the dump file is prepended with this generic header.
  * This gets around the problem of different headers for different
