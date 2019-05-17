--- src/libm-tester/tester.c.orig	2019-04-28 03:33:44 UTC
+++ src/libm-tester/tester.c
@@ -82,7 +82,7 @@ void startChild(const char *path, char *
     fflush(stdin);
     fflush(stdout);
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
     execvpe(path, argv, environ);
 #else
     execvp(path, argv);
