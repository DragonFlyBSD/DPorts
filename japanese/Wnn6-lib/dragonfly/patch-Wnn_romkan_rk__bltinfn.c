--- Wnn/romkan/rk_bltinfn.c.orig	2000-09-01 09:58:55 UTC
+++ Wnn/romkan/rk_bltinfn.c
@@ -143,6 +143,9 @@ Comments on Modifications:
 ***********************************************************************/
 /*	Version 3.0
  */
+#if defined(__DragonFly__)
+#include <string.h>
+#endif
 #include "commonhd.h"
 #include "config.h"
 
