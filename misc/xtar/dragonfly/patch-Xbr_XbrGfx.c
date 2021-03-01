--- Xbr/XbrGfx.c.orig	1995-05-09 08:06:47 UTC
+++ Xbr/XbrGfx.c
@@ -46,6 +46,7 @@
  */
 
 #include <stdio.h>
+#include <stdlib.h> /* for free(), malloc() */
 #include <string.h>
 #include <math.h>
 #include <ctype.h>
