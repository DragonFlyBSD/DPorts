--- libinotifytools/src/inotifytools.c.intermediate	2022-01-25 12:18:14.000000000 +0000
+++ libinotifytools/src/inotifytools.c
@@ -35,7 +35,7 @@
 
 #include "inotifytools/inotify.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct fanotify_event_fid;
 
 #define FAN_EVENT_INFO_TYPE_FID 1
