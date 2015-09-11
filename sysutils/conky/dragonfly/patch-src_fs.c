--- src/fs.c.orig	2012-05-04 00:08:27.000000000 +0300
+++ src/fs.c
@@ -52,7 +52,7 @@
 #include <sys/mount.h>
 #endif
 
-#if !defined(HAVE_STRUCT_STATFS_F_FSTYPENAME) && !defined (__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(HAVE_STRUCT_STATFS_F_FSTYPENAME) && !defined (__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <mntent.h>
 #endif
 
@@ -138,7 +138,7 @@ static void update_fs_stat(struct fs_sta
 void get_fs_type(const char *path, char *result)
 {
 
-#if defined(HAVE_STRUCT_STATFS_F_FSTYPENAME) || defined(__FreeBSD__) || defined (__OpenBSD__)
+#if defined(HAVE_STRUCT_STATFS_F_FSTYPENAME) || defined(__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 
 	struct statfs s;
 	if (statfs(path, &s) == 0) {
