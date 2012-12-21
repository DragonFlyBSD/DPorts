--- common/dconf-shmdir.c.intermediate	2012-12-21 15:17:17.043292000 +0100
+++ common/dconf-shmdir.c	2012-12-21 15:17:51.871775000 +0100
@@ -24,7 +24,7 @@
 #ifdef __linux__
 #include <sys/statfs.h>
 #include <sys/vfs.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
