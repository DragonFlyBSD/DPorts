--- xbmc/storage/MediaManager.cpp.orig	2018-08-04 15:16:23.445481000 +0200
+++ xbmc/storage/MediaManager.cpp	2018-08-04 15:16:46.185974000 +0200
@@ -57,7 +57,7 @@
 #include "osx/DarwinStorageProvider.h"
 #elif defined(TARGET_ANDROID)
 #include "android/AndroidStorageProvider.h"
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include "linux/LinuxStorageProvider.h"
 #elif defined(TARGET_POSIX)
 #include "linux/LinuxStorageProvider.h"
@@ -618,7 +618,7 @@ void CMediaManager::CloseTray(const char
 #ifdef HAS_DVD_DRIVE
 #if defined(TARGET_DARWIN)
   // FIXME...
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   // NYI
 #elif defined(TARGET_POSIX)
   char* dvdDevice = CLibcdio::GetInstance()->GetDeviceFileName();
