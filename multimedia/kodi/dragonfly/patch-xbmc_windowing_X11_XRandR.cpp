--- xbmc/windowing/X11/XRandR.cpp.orig	2018-08-04 16:07:55.812422000 +0200
+++ xbmc/windowing/X11/XRandR.cpp	2018-08-04 16:08:05.902640000 +0200
@@ -32,7 +32,7 @@
 #include "threads/SystemClock.h"
 #include "CompileInfo.h"
 
-#if defined(TARGET_FREEBSD)
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/types.h>
 #include <sys/wait.h>
 #endif
