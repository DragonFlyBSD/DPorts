--- src/fuse/fs.c.orig
+++ src/fuse/fs.c
@@ -27,7 +27,7 @@
 #include <fcntl.h>
 #include <dirent.h>
 #include <errno.h>
-#ifdef BSD
+#if defined(BSD) || defined(__DragonFly__)
 #include <sys/statvfs.h>
 #else
 #include <sys/statfs.h>
@@ -436,7 +436,7 @@
     (void) path;
 
     if (isdatasync)
-#ifdef BSD
+#if defined(BSD) || defined(__DragonFly__)
 	res = fsync(fi->fh);
 #else
         res = fdatasync(fi->fh);
