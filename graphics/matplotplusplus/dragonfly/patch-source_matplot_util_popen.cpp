--- source/matplot/util/popen.cpp.orig
+++ source/matplot/util/popen.cpp
@@ -121,7 +121,7 @@
 }
 #endif // _WIN32 implementtion
 
-#if defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <cerrno>
 #include <sys/wait.h> // waitpid
