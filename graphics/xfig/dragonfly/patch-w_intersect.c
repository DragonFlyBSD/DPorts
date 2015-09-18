--- w_intersect.c.bak	2015-09-18 13:52:39.000000000 +0300
+++ w_intersect.c
@@ -26,7 +26,7 @@
 #include "w_msgpanel.h"
 #include "f_util.h"
 #include "u_quartic.h"
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #include <math.h>
