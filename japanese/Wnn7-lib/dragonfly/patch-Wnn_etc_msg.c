--- Wnn/etc/msg.c.orig	2001-10-17 01:37:17 UTC
+++ Wnn/etc/msg.c
@@ -147,6 +147,12 @@ Comments on Modifications:
 	format of message file
 	    <message id>\t<message>
 */
+
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#include <string.h>
+#endif
+
 #include <stdio.h>
 #include "commonhd.h"
 #include "config.h"
@@ -154,7 +160,9 @@ Comments on Modifications:
 #include "wnn_os.h"
 #include "msg.h"
 
-
+#if defined(__DragonFly__)
+#define bsearch jl_bsearch
+#endif
 static char *
 bsearch(ky, bs, nel, width, compar)
 char *ky;
