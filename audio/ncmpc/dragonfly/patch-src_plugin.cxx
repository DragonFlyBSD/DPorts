--- src/plugin.cxx.orig
+++ src/plugin.cxx
@@ -22,7 +22,7 @@
 #include <sys/stat.h>
 #include <sys/wait.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 extern char **environ;
 #endif
 
