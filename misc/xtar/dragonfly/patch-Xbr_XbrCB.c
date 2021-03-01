--- Xbr/XbrCB.c.orig	1995-05-09 08:06:46 UTC
+++ Xbr/XbrCB.c
@@ -18,6 +18,8 @@
  *
  */
 
+#include <stdio.h> /* for sprintf() */
+#include <stdlib.h> /* for exit() */
 #include <Xm/Xm.h>
 
 void XbrCBExitApplication(Widget, XtPointer, XtPointer);
