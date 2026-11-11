--- src/quickjs-libc.c.orig
+++ src/quickjs-libc.c
@@ -58,7 +58,7 @@
 char ** environ=&ptr;
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 extern char **environ;
 typedef sig_t sighandler_t;
 #endif
