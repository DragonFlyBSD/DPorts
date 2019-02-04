--- xbmc/cores/VideoPlayer/Process/overrides/linux/ProcessInfoLinux.cpp.orig	2018-08-04 14:32:09.078019000 +0200
+++ xbmc/cores/VideoPlayer/Process/overrides/linux/ProcessInfoLinux.cpp	2018-08-04 14:32:23.498330000 +0200
@@ -22,7 +22,7 @@
 #include "threads/SingleLock.h"
 
 // Override for platform ports
-#if defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#if defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 
 CProcessInfo* CProcessInfo::CreateInstance()
 {
