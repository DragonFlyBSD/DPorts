--- include/common/common.h.orig
+++ include/common/common.h
@@ -1,7 +1,7 @@
 #ifndef COMMON_H
 #define COMMON_H
 
-#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__MACOSX) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #endif
 
@@ -38,6 +38,8 @@
   #else
   #define OS_NAME     "Linux unknown"
   #endif
+#elif defined(__DragonFly__)
+#define OS_NAME     "DragonFly"
 #elif defined(__FreeBSD__)
 #define OS_NAME     "FreeBSD"
 #else
