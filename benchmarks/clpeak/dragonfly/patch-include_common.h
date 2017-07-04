--- include/common.h.orig	2017-05-25 04:45:41.000000000 +0000
+++ include/common.h	2017-07-04 13:53:57.000000000 +0000
@@ -2,7 +2,7 @@
 #define COMMON_H
 
 #include <CL/cl.hpp>
-#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__) || defined(__DragonFly__) 
 #include <sys/types.h>
 #endif
 
@@ -12,7 +12,7 @@
 
 #define TAB             "  "
 #define NEWLINE         "\n"
-#ifndef __FreeBSD__
+#if ! defined __FreeBSD__ && ! defined __DragonFly__
 #define uint            unsigned int
 #endif
 
@@ -43,6 +43,8 @@
 #endif
 #elif defined(__FreeBSD__)
 #define OS_NAME     "FreeBSD"
+#elif defined(__DragonFly__)
+#define OS_NAME     "DragonFly"	
 #endif
 
 
