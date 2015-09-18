--- w_snap.c.orig	2012-08-09 20:18:28.000000000 +0300
+++ w_snap.c
@@ -32,7 +32,7 @@
 #include "u_search.h"
 #include "f_util.h"
 #include <math.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 
