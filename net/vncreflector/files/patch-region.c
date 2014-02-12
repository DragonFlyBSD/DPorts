
$FreeBSD: head/net/vncreflector/files/patch-region.c 340725 2014-01-22 17:40:44Z mat $

--- region.c.orig
+++ region.c
@@ -70,6 +70,7 @@
 *                                                               *
 *****************************************************************/
 
+#include <sys/types.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
