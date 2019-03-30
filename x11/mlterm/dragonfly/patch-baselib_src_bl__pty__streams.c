--- baselib/src/bl_pty_streams.c.orig	2018-10-27 14:29:17 UTC
+++ baselib/src/bl_pty_streams.c
@@ -23,7 +23,7 @@
 #include <sys/ioctl.h>
 #include <sys/stat.h>
 #include <unistd.h>
-#ifdef __ANDROID__
+#if defined(__ANDROID__) || defined(__DragonFly__) || defined(__FreeBSD__)
 #include <termios.h>
 #else
 #include <sys/termios.h>
