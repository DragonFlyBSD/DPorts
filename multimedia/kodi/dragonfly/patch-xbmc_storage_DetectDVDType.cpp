--- xbmc/storage/DetectDVDType.cpp.orig	2018-08-04 15:13:55.432276000 +0200
+++ xbmc/storage/DetectDVDType.cpp	2018-08-04 15:14:06.772522000 +0200
@@ -34,7 +34,7 @@
 #include <sys/types.h>
 #include <sys/ioctl.h>
 #include <fcntl.h>
-#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD)
+#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
 #include <linux/cdrom.h>
 #endif
 #endif
