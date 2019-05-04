--- baselib/src/bl_pty_streams.c.orig	2019-03-31 13:10:47 UTC
+++ baselib/src/bl_pty_streams.c
@@ -23,7 +23,7 @@
 #include <sys/ioctl.h>
 #include <sys/stat.h>
 #include <unistd.h>
-#if defined(__ANDROID__) || defined(__HAIKU__)
+#if defined(__ANDROID__) || defined(__HAIKU__) || defined(__DragonFly__) || defined(__FreeBSD__)
 #include <termios.h>
 #else
 #include <sys/termios.h>
