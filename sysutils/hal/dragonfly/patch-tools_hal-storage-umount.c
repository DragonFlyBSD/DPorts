--- tools/hal-storage-unmount.c.orig	2008-08-10 15:50:10.000000000 +0200
+++ tools/hal-storage-unmount.c	2012-12-21 19:16:32.544712000 +0100
@@ -31,7 +31,7 @@
 #include <string.h>
 #include <glib.h>
 #include <glib/gstdio.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <fstab.h>
 #include <sys/param.h>
 #include <sys/ucred.h>
