--- include/fuse_compat.h.orig	2025-11-16 13:40:04.949007000 +0100
+++ include/fuse_compat.h	2025-11-16 13:40:25.929181000 +0100
@@ -65,7 +65,7 @@ struct fuse *fuse_setup_compat25(int argc, char *argv[
 
 void fuse_teardown_compat22(struct fuse *fuse, int fd, char *mountpoint);
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 #include <sys/statfs.h>
 
 struct fuse_operations_compat22 {
