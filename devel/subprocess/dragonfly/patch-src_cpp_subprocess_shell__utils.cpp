--- src/cpp/subprocess/shell_utils.cpp.orig
+++ src/cpp/subprocess/shell_utils.cpp
@@ -7,7 +7,7 @@
 #else
 #include <unistd.h>
 #include <spawn.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #else
 #include <wait.h>
