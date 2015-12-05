--- /tmp/game.c	1995-08-04 01:29:37.000000000 +0300
+++ game.c	2015-12-05 11:17:48.000000000 +0200
@@ -2,6 +2,10 @@
 #include "messages.h"
 #include "game.h"
 
+#ifdef __DragonFly__
+#include <stdlib.h>
+#endif
+
 #define IsSame(c1,c2) (c1.p==c2.p && c1.x==c2.x && c1.y==c2.y)
 
 
