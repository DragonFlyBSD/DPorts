--- xjdfrontend.c.intermediate	2019-03-19 15:50:43 UTC
+++ xjdfrontend.c
@@ -26,6 +26,7 @@
 #include <stdlib.h>
 #include <signal.h>
 #include <errno.h>
+#include <unistd.h>
 #include "xjdic.h"
 
 /*    Paul Burchard supplied a patch to provide BSD compatibility for xjdic
@@ -37,8 +38,12 @@ order to enable this, people should comp
 #include <sgtty.h>
 #else
 #ifdef __POSIX__
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
 #else
+#include <termios.h>
+#endif
+#else
 #include <termio.h>
 #endif
 #endif
