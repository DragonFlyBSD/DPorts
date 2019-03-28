--- tty.c.orig	1997-07-18 14:58:32 UTC
+++ tty.c
@@ -12,7 +12,11 @@
  */
 
 #if HAVE_TERMIOS_H
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #   include <sys/termios.h>
+#else
+#   include <termios.h>
+#endif
 #   if HAVE_SYS_IOCTL_H
 #      include <sys/ioctl.h>
 #   endif
