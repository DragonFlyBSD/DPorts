
$FreeBSD: ports/games/uhexen/files/patch-src::w_wad.c,v 1.2 2012/11/17 05:57:55 svnexp Exp $

--- src/w_wad.c	2003/02/10 14:47:45	1.1
+++ src/w_wad.c	2003/02/10 14:47:58
@@ -13,7 +13,7 @@
 // HEADER FILES ------------------------------------------------------------
 
 #include <sys/types.h>
-#include <malloc.h>
+#include <stdlib.h>
 #include <fcntl.h>
 #include <unistd.h>
 #include <sys/stat.h>
