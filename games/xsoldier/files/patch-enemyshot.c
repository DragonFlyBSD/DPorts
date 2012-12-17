
$FreeBSD: ports/games/xsoldier/files/patch-enemyshot.c,v 1.2 2012/11/17 05:57:58 svnexp Exp $

--- enemyshot.c.orig
+++ enemyshot.c
@@ -11,6 +11,7 @@
 #include <X11/xpm.h>
 */
 
+#include <stdlib.h>
 #include "image.h"
 #include "xsoldier.h"
 #include "manage.h"
