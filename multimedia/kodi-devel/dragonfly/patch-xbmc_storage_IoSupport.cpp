--- xbmc/storage/IoSupport.cpp.orig	2019-12-16 08:11:03 UTC
+++ xbmc/storage/IoSupport.cpp
@@ -42,6 +42,9 @@
 #include <IOKit/storage/IOStorageDeviceCharacteristics.h>
 #endif
 #endif
+#ifdef TARGET_DRAGONFLY
+#include <limits.h>
+#endif
 #ifdef TARGET_FREEBSD
 #include <sys/syslimits.h>
 #endif
@@ -194,7 +197,7 @@ int CIoSupport::ReadSectorMode2(HANDLE h
     return -1;
   }
   return MODE2_DATA_SIZE;
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   // NYI
 #elif defined(TARGET_POSIX)
   if (hDevice->m_bCDROM)
