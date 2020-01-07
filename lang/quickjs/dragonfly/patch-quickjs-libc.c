--- quickjs-libc.c.intermediate	2020-01-02 18:32:47.000000000 +0000
+++ quickjs-libc.c
@@ -45,7 +45,7 @@
 #include <termios.h>
 #include <sys/ioctl.h>
 #include <sys/wait.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef sig_t sighandler_t;
 #endif
 #endif
