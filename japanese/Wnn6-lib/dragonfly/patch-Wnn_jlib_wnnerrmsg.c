--- Wnn/jlib/wnnerrmsg.c.orig	2000-09-01 09:58:55 UTC
+++ Wnn/jlib/wnnerrmsg.c
@@ -137,6 +137,10 @@ Comments on Modifications:
 
 /*	Version 4.0
  */
+#if defined(__DragonFly__)
+#include <string.h>
+#endif
+
 #include <stdio.h>
 #include "jd_sock.h"
 #include "jslib.h"
