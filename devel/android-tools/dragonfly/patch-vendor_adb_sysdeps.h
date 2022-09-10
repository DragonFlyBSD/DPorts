--- vendor/adb/sysdeps.h.orig	2022-06-10 23:11:16 UTC
+++ vendor/adb/sysdeps.h
@@ -49,7 +49,7 @@ static inline void* mempcpy(void* dst, c
 }
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define lseek64 lseek
 #define pread64 pread
 #define pwrite64 pwrite
