--- src/mount.h.orig	2002-12-06 17:14:02.000000000 +0200
+++ src/mount.h
@@ -30,7 +30,7 @@
 #include <sys/vfs.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
