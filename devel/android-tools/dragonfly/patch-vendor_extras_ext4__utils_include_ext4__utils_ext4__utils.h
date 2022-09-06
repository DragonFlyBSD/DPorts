--- vendor/extras/ext4_utils/include/ext4_utils/ext4_utils.h.orig	2022-06-10 23:11:16 UTC
+++ vendor/extras/ext4_utils/include/ext4_utils/ext4_utils.h
@@ -38,7 +38,7 @@ extern "C" {
 #include <string.h>
 #include <sys/types.h>
 
-#if defined(__APPLE__) && defined(__MACH__)
+#if (defined(__APPLE__) && defined(__MACH__)) || defined(__DragonFly__)
 #define lseek64 lseek
 #define ftruncate64 ftruncate
 #define mmap64 mmap
