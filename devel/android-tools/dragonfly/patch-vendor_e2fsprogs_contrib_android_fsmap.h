--- vendor/e2fsprogs/contrib/android/fsmap.h.orig
+++ vendor/e2fsprogs/contrib/android/fsmap.h
@@ -8,7 +8,7 @@
 # include <stdint.h>
 # include <stdbool.h>
 # include <sys/types.h>
-# ifndef __FreeBSD__
+# if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #  include <linux/types.h>
 # endif
 # include <ext2fs/ext2fs.h>
