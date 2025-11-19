--- lib/fuse_lowlevel.c.orig	2025-11-16 20:22:49.521358000 +0100
+++ lib/fuse_lowlevel.c	2025-11-16 20:23:03.081471000 +0100
@@ -2842,7 +2842,7 @@ int fuse_req_getgroups(fuse_req_t req, int size, gid_t
 }
 #endif
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 
 static void fill_open_compat(struct fuse_open_out *arg,
 			     const struct fuse_file_info_compat *f)
