--- vendor/extras/ext4_utils/ext4_utils.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/extras/ext4_utils/ext4_utils.cpp
@@ -36,7 +36,7 @@
 #include <sys/disk.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #endif
 
