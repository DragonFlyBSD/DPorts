--- data.h.orig	1996-07-02 08:01:48.000000000 +0300
+++ data.h
@@ -65,7 +65,11 @@ extern int bcnt;
 #ifdef DEBUG
 extern int debug;
 #endif	/* DEBUG */
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 extern int max_plus1;
 extern int switchfb[];
 
