--- util.c.orig	2009-03-02 19:17:35.000000000 +0100
+++ util.c	2012-12-18 16:24:38.911364000 +0100
@@ -28,9 +28,9 @@
 #include "libvolume_id.h"
 #include "util.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
-#if __FreeBSD_version < 800067
+#if __FreeBSD_version < 800067 && __DragonFly_version < 200202
 static size_t strnlen (const char *s, size_t maxlen)
 {
 	size_t i;
