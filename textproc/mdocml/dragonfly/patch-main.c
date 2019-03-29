--- main.c.orig	2018-08-08 14:51:51 UTC
+++ main.c
@@ -21,7 +21,11 @@
 #include <sys/types.h>
 #include <sys/ioctl.h>
 #include <sys/param.h>	/* MACHINE */
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <sys/wait.h>
 
 #include <assert.h>
