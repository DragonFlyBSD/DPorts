--- interface.c.orig	2000-11-01 18:04:27 UTC
+++ interface.c
@@ -20,7 +20,11 @@
 #include <sys/uio.h>
 #endif
 #ifdef STUFF_STACK
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include<sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #endif
 
 struct status{        /* Saved things from a previous incarnation of REXX */
