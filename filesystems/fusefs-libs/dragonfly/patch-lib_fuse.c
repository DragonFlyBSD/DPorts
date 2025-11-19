--- lib/fuse.c.orig	2025-11-16 20:25:20.942618000 +0100
+++ lib/fuse.c	2025-11-16 20:25:49.882834000 +0100
@@ -1201,7 +1201,7 @@ static int get_path_wrlock(struct fuse *f, fuse_ino_t 
 	return get_path_common(f, nodeid, name, path, wnode);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 #define CHECK_DIR_LOOP
 #endif
 
@@ -1522,7 +1522,7 @@ static inline void fuse_prepare_interrupt(struct fuse 
 		fuse_do_prepare_interrupt(req, d);
 }
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 
 static int fuse_compat_open(struct fuse_fs *fs, const char *path,
 			    struct fuse_file_info *fi)
@@ -4898,7 +4898,7 @@ void fuse_register_module(struct fuse_module *mod)
 	fuse_modules = mod;
 }
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 
 static struct fuse *fuse_new_common_compat(int fd, const char *opts,
 					   const struct fuse_operations *op,
