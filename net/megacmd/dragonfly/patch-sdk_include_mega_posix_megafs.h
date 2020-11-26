--- sdk/include/mega/posix/megafs.h.orig	2018-10-02 11:03:00 UTC
+++ sdk/include/mega/posix/megafs.h
@@ -28,7 +28,7 @@
 #define O_DIRECT 0
 #include <sys/param.h>
 #include <sys/mount.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/mount.h>
 #else
 #include <sys/vfs.h>
