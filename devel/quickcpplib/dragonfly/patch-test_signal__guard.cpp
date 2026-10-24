--- test/signal_guard.cpp.orig
+++ test/signal_guard.cpp
@@ -37,7 +37,7 @@
 #include <fenv.h>
 #include <spawn.h>
 #include <sys/wait.h>
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 extern "C" char **environ;
 #endif
 #ifdef __APPLE__
