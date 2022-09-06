--- vendor/e2fsprogs/lib/ext2fs/inline.c.orig	2022-06-10 23:11:16 UTC
+++ vendor/e2fsprogs/lib/ext2fs/inline.c
@@ -30,7 +30,9 @@
 #include <sys/types.h>
 #endif
 #if HAVE_MALLOC_H
+# ifndef __DragonFly__
 #include <malloc.h>
+# endif
 #endif
 
 #include "ext2_fs.h"
