--- include/common.h.orig	2019-10-20 08:33:25 UTC
+++ include/common.h
@@ -2,7 +2,7 @@
 #define COMMON_H
 
 #include <CL/cl.hpp>
-#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__) || defined(__DragonFly__) 
 #include <sys/types.h>
 #endif
 
@@ -13,7 +13,7 @@
 
 #define TAB             "  "
 #define NEWLINE         "\n"
-#ifndef __FreeBSD__
+#if ! defined __FreeBSD__ && ! defined __DragonFly__
 #define uint            unsigned int
 #endif
 #define ulong           unsigned long
@@ -53,6 +53,8 @@
   #endif
 #elif defined(__FreeBSD__)
 #define OS_NAME     "FreeBSD"
+#elif defined(__DragonFly__)
+#define OS_NAME     "DragonFly"	
 #else
 #define OS_NAME     "Unknown"
 #endif
