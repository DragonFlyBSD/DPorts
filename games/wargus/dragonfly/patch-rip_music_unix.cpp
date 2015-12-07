--- rip_music_unix.cpp.bak	2015-12-07 15:29:30.000000000 +0200
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
 #endif
 
 #include "rip_music.h"
