--- src/include/libufm.h.orig	2014-08-06 23:09:27.000000000 +0300
+++ src/include/libufm.h
@@ -34,11 +34,12 @@
 #define LIBUFM_H_SEEN
 
 #include <sys/param.h>
-#if __FreeBSD_version < 800000
-#include <dev/usb/dsbr100io.h>
-#else
+#ifdef __FreeBSD__
 #include <dev/usb/ufm_ioctl.h>
 #endif
+#ifdef __DragonFly__
+#include <bus/u4b/ufm_ioctl.h>
+#endif
 #include <err.h>
 #include <stdio.h>
 
