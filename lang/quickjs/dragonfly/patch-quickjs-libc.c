--- quickjs-libc.c.intermediate	2021-03-12 07:59:57.000000000 +0000
+++ quickjs-libc.c
@@ -47,11 +47,11 @@
 #include <sys/ioctl.h>
 #include <sys/wait.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 extern char **environ;
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef sig_t sighandler_t;
 #endif
 #if defined(__APPLE__)
