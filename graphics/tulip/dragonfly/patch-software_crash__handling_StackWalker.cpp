--- software/crash_handling/StackWalker.cpp.orig	2025-03-31 21:30:22 UTC
+++ software/crash_handling/StackWalker.cpp
@@ -27,7 +27,7 @@
 #if defined(__unix__) || defined(__APPLE__)
 
 #include <cxxabi.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <dlfcn.h>
 #include <sys/stat.h>
 
