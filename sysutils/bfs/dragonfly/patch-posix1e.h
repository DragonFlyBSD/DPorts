--- posix1e.h.orig	2019-05-06 03:32:04 UTC
+++ posix1e.h
@@ -28,7 +28,7 @@
 #include "util.h"
 #include <stdbool.h>
 
-#if !defined(BFS_HAS_POSIX1E_CAPABILITIES) && BFS_HAS_SYS_CAPABILITY && !__FreeBSD__
+#if !defined(BFS_HAS_POSIX1E_CAPABILITIES) && BFS_HAS_SYS_CAPABILITY && !__FreeBSD__ && !__DragonFly__
 #	include <sys/capability.h>
 #	ifdef CAP_CHOWN
 #		define BFS_HAS_POSIX1E_CAPABILITIES true
