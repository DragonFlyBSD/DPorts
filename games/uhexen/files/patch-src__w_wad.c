
$FreeBSD: head/games/uhexen/files/patch-src__w_wad.c 363362 2014-07-29 17:12:47Z adamw $

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
