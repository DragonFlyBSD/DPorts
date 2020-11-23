--- Wnn/etc/msg.c.orig	2000-09-01 09:58:54 UTC
+++ Wnn/etc/msg.c
@@ -150,6 +150,10 @@ Comments on Modifications:
 	format of message file
 	    <message id>\t<message>
 */
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#include <string.h>
+#endif
 #include <stdio.h>
 #include "commonhd.h"
 #include "dslib.h"
@@ -157,8 +161,11 @@ Comments on Modifications:
 #include "msg.h"
 #include "mt_jserver.h"
 
-
+#if defined(__DragonFly__)
+#define bsearch jl_bsearch
+#else
 extern char *getenv();
+#endif
 
 static char *
 bsearch(ky, bs, nel, width, compar)
