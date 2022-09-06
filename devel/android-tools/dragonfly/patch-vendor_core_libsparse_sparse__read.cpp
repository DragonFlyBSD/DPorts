--- vendor/core/libsparse/sparse_read.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libsparse/sparse_read.cpp
@@ -37,7 +37,7 @@
 #include "sparse_file.h"
 #include "sparse_format.h"
 
-#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #define off64_t off_t
 #endif
