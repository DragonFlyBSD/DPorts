--- siglist.c.orig	2018-01-27 18:00:57 UTC
+++ siglist.c
@@ -39,7 +39,11 @@ Foundation, 675 Mass Ave, Cambridge, MA
 #if !(defined(BSD) && (BSD >=199306))
 char *sys_siglist[NSIG];
 #endif
+#ifdef __DragonFly__
+#include <stdlib.h>
+#else
 extern *malloc ();
+#endif
 
 void initialize_siglist ()
 {
