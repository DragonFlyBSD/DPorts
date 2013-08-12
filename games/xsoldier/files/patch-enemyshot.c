
$FreeBSD: games/xsoldier/files/patch-enemyshot.c 300896 2012-07-14 13:54:48Z beat $

--- enemyshot.c.orig
+++ enemyshot.c
@@ -11,6 +11,7 @@
 #include <X11/xpm.h>
 */
 
+#include <stdlib.h>
 #include "image.h"
 #include "xsoldier.h"
 #include "manage.h"
