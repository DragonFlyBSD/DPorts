--- libinotifytools/src/inotifytools.cpp.orig	2024-08-10 13:38:58.794882000 +0200
+++ libinotifytools/src/inotifytools.cpp	2024-08-10 13:39:16.475197000 +0200
@@ -36,7 +36,7 @@
 
 #include "inotifytools/inotify.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct fanotify_event_fid;
 
 #define FAN_EVENT_INFO_TYPE_FID 1
