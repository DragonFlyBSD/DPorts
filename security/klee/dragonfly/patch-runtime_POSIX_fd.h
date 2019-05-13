--- runtime/POSIX/fd.h.orig	2019-03-19 16:49:16 UTC
+++ runtime/POSIX/fd.h
@@ -32,6 +32,20 @@
 #endif
 #endif
 
+#if defined(__DragonFly__)
+#include <sys/mount.h>
+#include <sys/param.h>
+#if !defined(dirent64)
+#define dirent64 dirent
+#endif
+#if !defined(off64_t)
+#define off64_t off_t
+#endif
+#if !defined(stat64)
+#define stat64 stat
+#endif
+#endif
+
 typedef struct {
   unsigned size;  /* in bytes */
   char* contents;
