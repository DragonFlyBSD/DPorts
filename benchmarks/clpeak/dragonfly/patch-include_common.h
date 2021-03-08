--- include/common.h.intermediate	2021-03-08 06:39:53.000000000 +0000
+++ include/common.h
@@ -7,7 +7,7 @@
 
 #include <CL/opencl.hpp>
 
-#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #endif
 
@@ -18,7 +18,7 @@
 
 #define TAB             "  "
 #define NEWLINE         "\n"
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define uint            unsigned int
 #endif
 #define ulong           unsigned long
@@ -56,6 +56,8 @@
   #else
   #define OS_NAME     "Linux unknown"
   #endif
+#elif defined(__DragonFly__)
+#define OS_NAME     "DragonFly"
 #elif defined(__FreeBSD__)
 #define OS_NAME     "FreeBSD"
 #else
