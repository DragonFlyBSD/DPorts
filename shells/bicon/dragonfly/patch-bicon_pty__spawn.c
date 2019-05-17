--- bicon/pty_spawn.c.intermediate	2019-05-13 07:06:11.000000000 +0000
+++ bicon/pty_spawn.c
@@ -16,7 +16,7 @@ namely the PSF License Agreement For Pyt
 #ifdef __linux__
 #include <pty.h>
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <termios.h>
 #include <sys/ioctl.h>
 #endif
