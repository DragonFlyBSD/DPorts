--- vendor/core/libutils/FileMap.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libutils/FileMap.cpp
@@ -42,7 +42,7 @@
 #include <errno.h>
 #include <assert.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define mmap64 mmap
 #endif
 
