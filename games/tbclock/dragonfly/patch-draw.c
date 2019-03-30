--- draw.c.orig	2007-02-28 13:23:47
+++ draw.c
@@ -27,7 +27,11 @@
 
 
 #include <sys/ioctl.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 
 #include <unistd.h>
 #include <string.h>
