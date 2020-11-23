--- Wnn/etc/serverdefs.c.orig	2000-09-01 09:58:54 UTC
+++ Wnn/etc/serverdefs.c
@@ -133,6 +133,12 @@ Wnn Software :
 
 Comments on Modifications:
 */
+
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#include <string.h>
+#endif
+
 #include <stdio.h>
 #include <ctype.h>
 #ifdef UX386
