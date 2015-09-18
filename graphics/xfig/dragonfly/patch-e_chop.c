--- e_chop.c.orig	2012-08-09 20:04:36.000000000 +0300
+++ e_chop.c
@@ -19,7 +19,7 @@
 /* >>>>>>>>>>>>>>>>>>> fixme -- don't forget undo ! <<<<<<<<<<<<<<<< */
 
 #include <stdlib.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #include <math.h>
