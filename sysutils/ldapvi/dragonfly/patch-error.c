--- error.c.orig	2007-05-05 10:17:26 UTC
+++ error.c
@@ -25,7 +25,11 @@
 #include <strings.h>
 #include <sys/ioctl.h>
 #include <sys/stat.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <sys/time.h>
 #include <sys/types.h>
 #include <sys/wait.h>
