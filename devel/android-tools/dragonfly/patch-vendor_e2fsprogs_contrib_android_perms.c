--- vendor/e2fsprogs/contrib/android/perms.c.orig
+++ vendor/e2fsprogs/contrib/android/perms.c
@@ -7,7 +7,7 @@
 #include <time.h>
 #include <sys/stat.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef VFS_CAP_REVISION_2
 #define VFS_CAP_REVISION_2 0x02000002
 #endif
