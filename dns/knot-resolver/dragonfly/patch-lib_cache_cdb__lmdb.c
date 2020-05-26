--- lib/cache/cdb_lmdb.c.orig	2020-02-05 15:35:04 UTC
+++ lib/cache/cdb_lmdb.c
@@ -334,7 +334,7 @@ static int cdb_open(struct lmdb_env *env
 		return lmdb_error(ret);
 	}
 
-#if !defined(__MACOSX__) && !(defined(__APPLE__) && defined(__MACH__))
+#if !defined(__DragonFly__) && !defined(__MACOSX__) && !(defined(__APPLE__) && defined(__MACH__))
 	auto_free char *mdb_datafile = kr_strcatdup(2, path, "/data.mdb");
 	int fd = open(mdb_datafile, O_RDWR);
 	if (fd == -1) {
