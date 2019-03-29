--- common.h.intermediate	2019-03-20 17:52:56 UTC
+++ common.h
@@ -31,7 +31,11 @@
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
