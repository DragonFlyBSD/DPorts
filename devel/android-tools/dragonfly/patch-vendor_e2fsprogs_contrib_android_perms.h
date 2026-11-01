--- vendor/e2fsprogs/contrib/android/perms.h.orig
+++ vendor/e2fsprogs/contrib/android/perms.h
@@ -1,7 +1,7 @@
 #ifndef ANDROID_PERMS_H
 # define ANDROID_PERMS_H
 
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <stdint.h>
 # else
