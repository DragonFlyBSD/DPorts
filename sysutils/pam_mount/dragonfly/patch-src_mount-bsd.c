--- src/mount-bsd.c.intermediate	2016-08-11 14:53:21 UTC
+++ src/mount-bsd.c
@@ -21,7 +21,7 @@
 #include <libHX/string.h>
 #include "pam_mount.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #	define local_statfs statfs
 #	define LOCAL_NOWAIT MNT_NOWAIT
 #elif defined(__NetBSD__)
