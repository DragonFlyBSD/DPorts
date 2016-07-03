--- detach.c.orig	1999-10-08 17:12:38.000000000 +0200
+++ detach.c
@@ -67,7 +67,12 @@ static char rcsid[] = "$Id: detach.c,v 1
 #include <nlist.h>
 #endif
 
+#ifdef __DragonFly__
+#include <stdlib.h>
+#include <string.h>
+#else
 extern int errno;
+#endif
 #include <sys/errno.h>
 
 /* 
