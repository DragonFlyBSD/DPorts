--- Xbr/XbrMenu.c.orig	1995-05-09 08:06:47 UTC
+++ Xbr/XbrMenu.c
@@ -18,6 +18,8 @@
  *
  */
 
+#include <stdio.h> /* for sprintf() */
+#include <stdlib.h> /* for malloc() */
 #include <Xm/Xm.h>
 #include <Xm/CascadeB.h>
 #include <Xm/Label.h>
