--- Wnn/etc/yincoding.c.orig	2000-09-01 09:58:54 UTC
+++ Wnn/etc/yincoding.c
@@ -136,6 +136,10 @@ Comments on Modifications:
 
 /**  cWnn  Version 1.1	 **/
 
+#if defined(__DragonFly__)
+#include <string.h>
+#endif
+
 #include  <stdio.h>
 #include  <ctype.h>
 #include  "commonhd.h"
