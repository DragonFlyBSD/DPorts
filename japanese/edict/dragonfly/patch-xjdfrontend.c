--- xjdfrontend.c.intermediate	2019-03-19 15:50:43 UTC
+++ xjdfrontend.c
@@ -37,8 +37,12 @@ order to enable this, people should comp
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
