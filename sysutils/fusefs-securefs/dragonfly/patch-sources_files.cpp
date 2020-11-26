--- sources/files.cpp.orig	2020-03-28 14:28:41 UTC
+++ sources/files.cpp
@@ -218,7 +218,7 @@ void FileBase::stat(struct fuse_stat* st
         get_atime(st->st_atim);
         get_mtime(st->st_mtim);
         get_ctime(st->st_ctim);
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__DragonFly__)
         get_birthtime(st->st_birthtim);
 #endif
 #endif
