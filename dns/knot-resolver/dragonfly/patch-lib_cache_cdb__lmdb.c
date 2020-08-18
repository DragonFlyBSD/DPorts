--- lib/cache/cdb_lmdb.c.orig	2020-07-01 12:27:52 UTC
+++ lib/cache/cdb_lmdb.c
@@ -322,7 +322,7 @@ static int cdb_open(struct lmdb_env *env
 		return lmdb_error(ret);
 	}
 
-#if !defined(__MACOSX__) && !(defined(__APPLE__) && defined(__MACH__))
+#if !defined(__DragonFly__) && !defined(__MACOSX__) && !(defined(__APPLE__) && defined(__MACH__))
 	mdb_filehandle_t fd = -1;
 	ret = mdb_env_get_fd(env->env, &fd);
 	if (ret != MDB_SUCCESS) {
