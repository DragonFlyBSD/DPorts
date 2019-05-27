--- src/llvm-project/llvm/lib/Support/Unix/Path.inc.orig	2019-02-12 15:22:48 UTC
+++ src/llvm-project/llvm/lib/Support/Unix/Path.inc
@@ -56,13 +56,13 @@
 
 #include <sys/types.h>
 #if !defined(__APPLE__) && !defined(__OpenBSD__) && !defined(__FreeBSD__) &&   \
-    !defined(__linux__) && !defined(__FreeBSD_kernel__)
+    !defined(__linux__) && !defined(__FreeBSD_kernel__) && !defined(__DragonFly__)
 #include <sys/statvfs.h>
 #define STATVFS statvfs
 #define FSTATVFS fstatvfs
 #define STATVFS_F_FRSIZE(vfs) vfs.f_frsize
 #else
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/mount.h>
 #include <sys/param.h>
 #elif defined(__linux__)
@@ -85,7 +85,7 @@
 #define STATVFS_F_FRSIZE(vfs) static_cast<uint64_t>(vfs.f_bsize)
 #endif
 
-#if defined(__NetBSD__) || defined(__DragonFly__) || defined(__GNU__)
+#if defined(__NetBSD__) || defined(__GNU__)
 #define STATVFS_F_FLAG(vfs) (vfs).f_flag
 #else
 #define STATVFS_F_FLAG(vfs) (vfs).f_flags
