--- src/lib/ioctl.c.orig	2018-02-19 22:24:10 UTC
+++ src/lib/ioctl.c
@@ -30,7 +30,11 @@
 #include <lfp/errno.h>
 
 #include <string.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 
 DSO_PUBLIC int
 lfp_tty_attach(const char *path)
