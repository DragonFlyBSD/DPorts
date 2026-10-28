--- core/src/os/unix/libc-wrappers.c.orig	2026-10-26 03:19:07 UTC
+++ core/src/os/unix/libc-wrappers.c
@@ -409,12 +409,17 @@ void __gnatcoll_readdir(DIR *dirp, struct gnatcoll_dirent *buf)
   if (result != NULL)
   {
      buf->inode = (uint_64) result->d_ino;
-#if defined(__APPLE__)
+#if defined(__APPLE__) || defined(__DragonFly__)
      buf->offset = 0;
 #else
      buf->offset = (uint_64) result->d_off;
 #endif
+#if defined(__DragonFly__)
+     /* DragonFly's struct dirent has no d_reclen */
+     buf->reclen = (uint_32) _DIRENT_DIRSIZ(result);
+#else
      buf->reclen = (uint_32) result->d_reclen;
+#endif
      buf->file_type = (unsigned char) result->d_type;
      strncpy(buf->name, result->d_name, GNATCOLL_DIRENT_NAME_MAX);
      buf->name[GNATCOLL_DIRENT_NAME_MAX - 1] = '\0';
