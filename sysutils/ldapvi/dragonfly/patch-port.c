--- port.c.orig	2007-05-05 10:17:26 UTC
+++ port.c
@@ -26,7 +26,11 @@
 #include <strings.h>
 #include <sys/ioctl.h>
 #include <sys/stat.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <sys/types.h>
 #include <unistd.h>
 
