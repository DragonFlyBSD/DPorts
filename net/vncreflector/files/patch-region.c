
$FreeBSD: ports/net/vncreflector/files/patch-region.c,v 1.2 2012/11/17 06:00:24 svnexp Exp $

--- region.c.orig
+++ region.c
@@ -70,6 +70,7 @@
 *                                                               *
 *****************************************************************/
 
+#include <sys/types.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
