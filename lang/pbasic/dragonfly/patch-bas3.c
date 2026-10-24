--- bas3.c.orig	1995-08-11 13:17:21.000000000 +0300
+++ bas3.c
@@ -1513,7 +1513,11 @@ ssystem()
  */
 #define	MAX_SYS_ARGS	6
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern	int	errno;
+#endif
 #ifdef	__STDC__
 extern	int	syscall(int, ...);
 #else
