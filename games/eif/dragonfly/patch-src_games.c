--- src/games.c.orig	2003-09-25 18:54:27.000000000 +0300
+++ src/games.c
@@ -31,7 +31,11 @@
 #include	"games.h"
 #include	"print.h"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int	errno;
+#endif
 
 #define MAX_GAMES 50
 
