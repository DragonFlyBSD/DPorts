--- include/fuse_compat.h.orig	2019-01-04 13:38:34 UTC
+++ include/fuse_compat.h
@@ -65,7 +65,7 @@ struct fuse *fuse_setup_compat25(int arg
 
 void fuse_teardown_compat22(struct fuse *fuse, int fd, char *mountpoint);
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #include <sys/statfs.h>
 
 struct fuse_operations_compat22 {
