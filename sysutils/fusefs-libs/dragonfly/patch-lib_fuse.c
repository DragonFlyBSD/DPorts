--- lib/fuse.c.orig	2019-01-04 13:38:34 UTC
+++ lib/fuse.c
@@ -1201,7 +1201,7 @@ static int get_path_wrlock(struct fuse *
 	return get_path_common(f, nodeid, name, path, wnode);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CHECK_DIR_LOOP
 #endif
 
@@ -1522,7 +1522,7 @@ static inline void fuse_prepare_interrup
 		fuse_do_prepare_interrupt(req, d);
 }
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 
 static int fuse_compat_open(struct fuse_fs *fs, const char *path,
 			    struct fuse_file_info *fi)
@@ -4729,7 +4729,7 @@ struct fuse *fuse_new_common(struct fuse
 	if (!f->conf.ac_attr_timeout_set)
 		f->conf.ac_attr_timeout = f->conf.attr_timeout;
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	/*
 	 * In FreeBSD, we always use these settings as inode numbers
 	 * are needed to make getcwd(3) work.
@@ -4898,7 +4898,7 @@ void fuse_register_module(struct fuse_mo
 	fuse_modules = mod;
 }
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 
 static struct fuse *fuse_new_common_compat(int fd, const char *opts,
 					   const struct fuse_operations *op,
