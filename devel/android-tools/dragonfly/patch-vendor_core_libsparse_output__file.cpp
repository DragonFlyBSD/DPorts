--- vendor/core/libsparse/output_file.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libsparse/output_file.cpp
@@ -43,7 +43,7 @@
 #define ftruncate64 ftruncate
 #endif
 
-#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #define ftruncate64 ftruncate
 #define off64_t off_t
