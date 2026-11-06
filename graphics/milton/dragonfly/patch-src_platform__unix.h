--- src/platform_unix.h.orig	2026-11-06 03:21:34 UTC
+++ src/platform_unix.h
@@ -1,7 +1,7 @@
 // Copyright (c) 2015 Sergio Gonzalez. All rights reserved.
 // License: https://github.com/serge-rgb/milton#license
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #ifndef _GNU_SOURCE
     #define _GNU_SOURCE  // To get MAP_ANONYMOUS on linux
     #endif
@@ -56,8 +56,14 @@
 #define platform_milton_log unix_log
 #define platform_milton_log_args unix_log_args
 
+#if defined(__cplusplus)
+extern "C" {
+#endif
 void unix_log(char* format, ...);
 void unix_log_args(char* format, va_list args);
+#if defined(__cplusplus)
+}
+#endif
 
 #if defined(__MACH__)
 // Include header for our SDL hook.
