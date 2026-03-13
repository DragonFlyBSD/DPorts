--- src/headers/shared.h.orig	Mon Mar 10 09:32:47 2025
+++ src/headers/shared.h	Sun Oct
@@ -50,7 +50,9 @@
 
 // Only Linux and FreeBSD need mount.h */
 #if defined(Linux) || defined(FreeBSD)
+#ifndef __DragonFly__
 #include <sys/mount.h>
+#endif
 #endif
 
 /* HPUX does not have select.h */
