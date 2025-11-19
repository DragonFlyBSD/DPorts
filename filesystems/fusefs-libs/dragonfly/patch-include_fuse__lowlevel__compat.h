--- include/fuse_lowlevel_compat.h.orig	2025-11-16 20:13:31.166706000 +0100
+++ include/fuse_lowlevel_compat.h	2025-11-16 20:13:46.066837000 +0100
@@ -72,7 +72,7 @@ size_t fuse_dirent_size(size_t namelen);
 char *fuse_add_dirent(char *buf, const char *name, const struct stat *stbuf,
 		      off_t off);
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 
 #include <sys/statfs.h>
 
