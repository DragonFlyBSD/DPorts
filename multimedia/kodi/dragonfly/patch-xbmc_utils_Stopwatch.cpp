--- xbmc/utils/Stopwatch.cpp.orig	2018-08-04 15:48:40.697423000 +0200
+++ xbmc/utils/Stopwatch.cpp	2018-08-04 15:48:55.147735000 +0200
@@ -21,7 +21,7 @@
 #include "Stopwatch.h"
 #if defined(TARGET_POSIX)
 #include "threads/SystemClock.h" 
-#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD)
+#if !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
 #include <sys/sysinfo.h>
 #endif
 #endif
