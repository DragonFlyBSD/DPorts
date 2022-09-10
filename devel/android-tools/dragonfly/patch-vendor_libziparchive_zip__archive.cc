--- vendor/libziparchive/zip_archive.cc.orig	2022-06-10 23:11:16 UTC
+++ vendor/libziparchive/zip_archive.cc
@@ -35,7 +35,7 @@
 #include <optional>
 #include <vector>
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #endif
 
