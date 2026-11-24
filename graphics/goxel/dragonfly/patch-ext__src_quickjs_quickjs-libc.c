--- ext_src/quickjs/quickjs-libc.c.orig
+++ ext_src/quickjs/quickjs-libc.c
@@ -56,7 +56,7 @@
 #include <sys/ioctl.h>
 #include <sys/wait.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 typedef sig_t sighandler_t;
 extern char **environ;
 #endif
