--- demos/unsupported/xmform/xmform.c.orig	2016-03-16 02:10:08 UTC
+++ demos/unsupported/xmform/xmform.c
@@ -50,6 +50,7 @@ xmform*topShadowColor:           white
 xmform*bottomShadowColor:        black
 ***-------------------------------------------------------------------*/
 
+#include <stdlib.h>	/* for calloc() */
 #include <Xm/Xm.h>
 #include <Xm/Form.h>
 #include <Xm/PushB.h>
