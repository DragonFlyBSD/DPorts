
$FreeBSD: ports/textproc/agrep/files/patch-follow.c,v 1.2 2012/11/17 06:01:51 svnexp Exp $

--- follow.c.orig	Fri Jan 17 20:14:42 1992
+++ follow.c	Sun Jul 21 03:50:47 2002
@@ -3,14 +3,12 @@
    construction.						*/
 
 #include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
 #include "re.h"
 
-extern char *strncpy(), *strcat(), *strcpy();
-extern int  strlen();
-
 #define TRUE	1
 
-extern char *malloc();
 extern Pset pset_union(); 
 extern int pos_cnt;
 extern Re_node parse();
