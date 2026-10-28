--- term-utils/ttymsg.c.orig
+++ term-utils/ttymsg.c
@@ -58,6 +58,11 @@
 #include "pathnames.h"
 #include "ttymsg.h"
 
+/* DragonFly: <dirent.h> has no MAXNAMLEN */
+#ifndef MAXNAMLEN
+#define MAXNAMLEN	255
+#endif
+
 #define ERR_BUFLEN	(MAXNAMLEN + 1024)
 
 /*
