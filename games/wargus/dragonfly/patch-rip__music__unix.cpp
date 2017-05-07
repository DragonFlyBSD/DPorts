--- rip_music_unix.cpp.orig	2016-11-08 15:26:25 UTC
+++ rip_music_unix.cpp
@@ -44,6 +44,11 @@
 #elif defined(__FreeBSD__)
 #	include <sys/param.h>
 #	include <sys/mount.h>
+#elif defined(__DragonFly__)
+#	include <sys/param.h>
+#	include <sys/mount.h>
+#       define __ino_t ino_t
+#       define __dev_t dev_t
 #elif defined(__APPLE__)
 #       define __dev_t dev_t
 #       define __ino_t ino_t
