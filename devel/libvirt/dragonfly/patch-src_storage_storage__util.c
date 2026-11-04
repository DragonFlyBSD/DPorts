--- src/storage/storage_util.c.orig	2026-10-01 09:02:52 UTC
+++ src/storage/storage_util.c
@@ -1905,7 +1905,9 @@
 # ifdef __linux__
     target->timestamps->btime = (struct timespec){0, 0};
 # else /* ! __linux__ */
+#   ifndef __DragonFly__
     target->timestamps->btime = sb->st_birthtim;
+#   endif
 # endif /* ! __linux__ */
     target->timestamps->ctime = sb->st_ctim;
     target->timestamps->mtime = sb->st_mtim;
