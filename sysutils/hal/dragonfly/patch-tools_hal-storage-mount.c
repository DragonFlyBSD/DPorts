--- tools/hal-storage-mount.c.intermediate	2012-12-21 18:59:57.158342000 +0100
+++ tools/hal-storage-mount.c	2012-12-21 19:01:27.874364000 +0100
@@ -31,7 +31,7 @@
 #include <string.h>
 #include <glib.h>
 #include <glib/gstdio.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <fstab.h>
 #include <sys/param.h>
 #include <sys/ucred.h>
@@ -54,7 +54,7 @@
 
 #include "hal-storage-shared.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define MOUNT		"/sbin/mount"
 #define MOUNT_OPTIONS	"nosuid"
 #define MOUNT_TYPE_OPT	"-t"
@@ -256,7 +256,7 @@
 	return f;
 }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 static char *
 resolve_fuse (const char *special)
 {
