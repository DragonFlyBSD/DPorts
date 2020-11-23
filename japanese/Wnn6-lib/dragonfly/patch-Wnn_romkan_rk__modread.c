--- Wnn/romkan/rk_modread.c.orig	2000-09-01 09:58:55 UTC
+++ Wnn/romkan/rk_modread.c
@@ -144,6 +144,10 @@ Comments on Modifications:
 ***********************************************************************/
 /*	Version 3.0
  */
+#if defined(__DragonFly__)
+#include <unistd.h>
+#endif
+
 #include "rk_multi.h"
 #ifdef WNNDEFAULT
 #  include "config.h"
