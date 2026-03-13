--- src/headers/fs_op.h.orig	Mon Mar 10 09:32:47 2025
+++ src/headers/fs_op.h	Sun Oct
@@ -24,7 +24,9 @@
 
 #ifdef FreeBSD
 #include <sys/param.h>
+#ifndef __DragonFly__
 #include <sys/mount.h>
+#endif
 #endif
 #endif
 
