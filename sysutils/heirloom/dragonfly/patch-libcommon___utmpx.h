--- libcommon/_utmpx.h.intermediate	2019-08-04 11:29:11 UTC
+++ libcommon/_utmpx.h
@@ -28,7 +28,7 @@
 #include <sys/time.h>
 
 #include <sys/param.h>
-#if defined(__FreeBSD__) && __FreeBSD_version >= 900007
+#if (defined(__FreeBSD__) && __FreeBSD_version >= 900007) || defined(__DragonFly__)
 # include "/usr/include/utmpx.h"
 #else
 # include <utmp.h>
