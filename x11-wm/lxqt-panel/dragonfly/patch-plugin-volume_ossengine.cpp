--- plugin-volume/ossengine.cpp.orig	2019-01-25 23:41:55 UTC
+++ plugin-volume/ossengine.cpp
@@ -36,7 +36,7 @@
 #include <sys/ioctl.h>
 #include <errno.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #elif defined(__linux__) || defined(__Linux__)
 #include <linux/soundcard.h>
