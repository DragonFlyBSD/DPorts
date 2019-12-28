--- toys/other/fsync.c.orig	2019-10-18 17:29:51 UTC
+++ toys/other/fsync.c
@@ -20,6 +20,10 @@ config FSYNC
 #define FOR_fsync
 #include "toys.h"
 
+#ifdef __DragonFly__
+#define fdatasync fsync
+#endif
+
 static void do_fsync(int fd, char *name)
 {
   if (((toys.optflags & FLAG_d) ? fdatasync(fd) : fsync(fd)))
