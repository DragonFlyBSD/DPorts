--- src/utils.h.orig	2018-09-08 06:11:06 UTC
+++ src/utils.h
@@ -54,6 +54,11 @@
 #define LSTAT lstat
 #endif
 
+#ifdef __DragonFly__
+#define STRUCT_STAT struct stat
+#define LSTAT lstat
+#endif
+
 #ifdef sun
 #define STRUCT_STAT struct stat64
 #define LSTAT lstat64
