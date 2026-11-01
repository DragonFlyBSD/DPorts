--- vendor/e2fsprogs/contrib/android/basefs_allocator.h.orig
+++ vendor/e2fsprogs/contrib/android/basefs_allocator.h
@@ -2,7 +2,7 @@
 # define BASE_FS_ALLOCATOR_H
 
 # include <time.h>
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <stdint.h>
 # else
