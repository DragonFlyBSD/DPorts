--- libopenage/util/pty.h.orig	2018-07-03 16:23:39 UTC
+++ libopenage/util/pty.h
@@ -4,7 +4,7 @@
 
 #ifdef __APPLE__
 #  include <util.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <sys/ioctl.h>
 #  include <termios.h>
