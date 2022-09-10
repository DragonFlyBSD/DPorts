--- vendor/core/libsparse/img2simg.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libsparse/img2simg.cpp
@@ -32,7 +32,7 @@
 #define O_BINARY 0
 #endif
 
-#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #define off64_t off_t
 #endif
