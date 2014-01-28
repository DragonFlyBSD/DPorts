
$FreeBSD: games/xsoldier/files/patch-enemyshot.c 340725 2014-01-22 17:40:44Z mat $

--- enemyshot.c.orig
+++ enemyshot.c
@@ -11,6 +11,7 @@
 #include <X11/xpm.h>
 */
 
+#include <stdlib.h>
 #include "image.h"
 #include "xsoldier.h"
 #include "manage.h"
