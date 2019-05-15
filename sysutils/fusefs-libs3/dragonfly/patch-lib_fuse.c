--- lib/fuse.c.orig	2019-04-16 18:46:20 UTC
+++ lib/fuse.c
@@ -1264,7 +1264,7 @@ static int get_path_wrlock(struct fuse *
 	return get_path_common(f, nodeid, name, path, wnode);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CHECK_DIR_LOOP
 #endif
 
@@ -4903,7 +4903,7 @@ struct fuse *fuse_new_31(struct fuse_arg
 	if (!f->conf.ac_attr_timeout_set)
 		f->conf.ac_attr_timeout = f->conf.attr_timeout;
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	/*
 	 * In FreeBSD, we always use these settings as inode numbers
 	 * are needed to make getcwd(3) work.
