--- Wnn/romkan/rk_bltinfn.c.orig	2001-10-17 01:37:17 UTC
+++ Wnn/romkan/rk_bltinfn.c
@@ -142,6 +142,11 @@ Comments on Modifications:
 ***********************************************************************/
 /*	Version 3.0
  */
+
+#if defined(__DragonFly__)
+#include <string.h>
+#endif
+
 #include "commonhd.h"
 #include "config.h"
 
