--- Xbr/XbrList.c.orig	1995-05-09 08:06:46 UTC
+++ Xbr/XbrList.c
@@ -24,6 +24,7 @@
  *
  */
 
+#include <stdlib.h> /* for free(), malloc() */
 #include <Xm/Xm.h>
 #include <Xm/List.h>
 
