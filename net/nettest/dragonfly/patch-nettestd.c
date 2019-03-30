--- nettestd.c.intermediate	2019-03-20 12:56:17 UTC
+++ nettestd.c
@@ -60,7 +60,11 @@ char copyright[] =
 #include <sys/uio.h>
 #include <sys/ioctl.h>
 #include <syslog.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 
 #ifdef	WAIT3CODE
 dochild()
