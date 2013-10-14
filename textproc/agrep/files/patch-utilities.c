
$FreeBSD: textproc/agrep/files/patch-utilities.c 300897 2012-07-14 14:29:18Z beat $

--- utilities.c.orig	Fri Jan 17 20:14:43 1992
+++ utilities.c	Sun Jul 21 03:50:47 2002
@@ -2,6 +2,7 @@
    and manipulating regular expression syntax trees.	*/
 
 #include <stdio.h>
+#include <stdlib.h>
 #include "re.h"
 
 /************************************************************************/
