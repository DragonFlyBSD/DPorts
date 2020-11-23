--- Wnn/romkan/rk_modread.c.orig	2001-10-17 01:37:17 UTC
+++ Wnn/romkan/rk_modread.c
@@ -143,6 +143,11 @@ Comments on Modifications:
 ***********************************************************************/
 /*	Version 3.0
  */
+
+#if defined(__DragonFly__)
+#include <unistd.h>
+#endif
+
 #include "rk_multi.h"
 #ifdef WNNDEFAULT
 #  include "config.h"
