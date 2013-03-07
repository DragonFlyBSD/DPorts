
$FreeBSD: net/vncreflector/files/patch-region.c 300897 2012-07-14 14:29:18Z beat $

--- region.c.orig
+++ region.c
@@ -70,6 +70,7 @@
 *                                                               *
 *****************************************************************/
 
+#include <sys/types.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
