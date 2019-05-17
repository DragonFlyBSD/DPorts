--- src/quad-tester/qtester.c.orig	2019-04-28 03:33:44 UTC
+++ src/quad-tester/qtester.c
@@ -78,7 +78,7 @@ void startChild(const char *path, char *
     fflush(stdin);
     fflush(stdout);
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
     execvpe(path, argv, environ);
 #else
     execvp(path, argv);
