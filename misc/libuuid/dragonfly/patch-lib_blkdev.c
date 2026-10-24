--- lib/blkdev.c.orig	2026-06-16 12:01:17 UTC
+++ lib/blkdev.c
@@ -25,7 +25,13 @@
 #endif
 
 #ifdef HAVE_SYS_DISK_H
-# include <sys/disk.h>
+# if defined(__DragonFly__) && !defined(_KERNEL)
+/* DragonFly's <sys/disk.h> is kernel-only (it #errors in userland);
+ * the DIOCG* ioctls blkdev.c wants live in <sys/diskslice.h> instead. */
+#  include <sys/diskslice.h>
+# else
+#  include <sys/disk.h>
+# endif
 #endif
 
 #ifndef EBADFD
