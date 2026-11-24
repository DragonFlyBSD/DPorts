--- source/matplot/util/popen.h.orig
+++ source/matplot/util/popen.h
@@ -23,7 +23,7 @@
     FILE *file_ = nullptr; ///< C file handle for I/O (not both)
 };
 
-#elif defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <unistd.h> // pid_t
 
