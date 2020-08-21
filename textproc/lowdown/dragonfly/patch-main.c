--- main.c.orig	2020-07-23 14:04:53 UTC
+++ main.c
@@ -25,7 +25,11 @@
 # include <sys/capsicum.h>
 #endif
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <termios.h>
+#else
 #include <sys/termios.h> /* struct winsize */
+#endif
 
 #if HAVE_ERR
 # include <err.h>
