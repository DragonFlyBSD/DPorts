--- lib/cache/cdb_lmdb.c.orig	2020-09-08 11:12:43 UTC
+++ lib/cache/cdb_lmdb.c
@@ -355,7 +355,7 @@ static int cdb_open_env(struct lmdb_env
 		goto error_mdb;
 	}
 
-#if !defined(__MACOSX__) && !(defined(__APPLE__) && defined(__MACH__))
+#if !defined(__DragonFly__) && !defined(__MACOSX__) && !(defined(__APPLE__) && defined(__MACH__))
 	if (size_requested) {
 		ret = posix_fallocate(fd, 0, MAX(env->mapsize, env->st_size));
 	} else {
