--- Wnn/jlib/wnnerrmsg.c.orig	2001-10-17 01:37:17 UTC
+++ Wnn/jlib/wnnerrmsg.c
@@ -136,6 +136,11 @@ Comments on Modifications:
 
 /*	Version 4.0
  */
+
+#if defined(__DragonFly__)
+#include <string.h>
+#endif
+
 #include <stdio.h>
 #include "commonhd.h"
 #include "jd_sock.h"
