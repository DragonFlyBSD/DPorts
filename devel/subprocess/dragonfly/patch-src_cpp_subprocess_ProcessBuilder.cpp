--- src/cpp/subprocess/ProcessBuilder.cpp.orig
+++ src/cpp/subprocess/ProcessBuilder.cpp
@@ -4,7 +4,7 @@
 
 #else
 #include <spawn.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #else
 #include <wait.h>
