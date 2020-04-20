--- src/storage/storage_util.c.orig	2020-02-26 09:46:02 UTC
+++ src/storage/storage_util.c
@@ -1843,7 +1843,9 @@ virStorageBackendUpdateVolTargetInfoFD(v
 # ifdef __linux__
     target->timestamps->btime = (struct timespec){0, 0};
 # else /* ! __linux__ */
+#   ifndef __DragonFly__
     target->timestamps->btime = sb->st_birthtim;
+#   endif
 # endif /* ! __linux__ */
     target->timestamps->ctime = sb->st_ctim;
     target->timestamps->mtime = sb->st_mtim;
