--- lib/fuse_lowlevel.c.orig	2019-01-04 13:38:34 UTC
+++ lib/fuse_lowlevel.c
@@ -2842,7 +2842,7 @@ int fuse_req_getgroups(fuse_req_t req, i
 }
 #endif
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 
 static void fill_open_compat(struct fuse_open_out *arg,
 			     const struct fuse_file_info_compat *f)
