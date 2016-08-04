--- src/include/common.h.intermediate	2016-08-03 14:05:04 UTC
+++ src/include/common.h
@@ -8,7 +8,7 @@
     #include <CL/cl.hpp>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/types.h>
 #endif
 
@@ -18,7 +18,7 @@
 
 #define TAB             "  "
 #define NEWLINE         "\n"
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define uint            unsigned int
 #endif
 
@@ -49,6 +49,8 @@
     #endif
 #elif defined(__FreeBSD__)
     #define OS_NAME         "FreeBSD"
+#elif defined(__DragonFly__)
+    #define OS_NAME         "DragonFly"
 #endif
 
 
