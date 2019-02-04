--- xbmc/storage/IoSupport.cpp.orig	2018-08-04 15:15:15.824017000 +0200
+++ xbmc/storage/IoSupport.cpp	2018-08-04 15:15:35.664447000 +0200
@@ -54,7 +54,7 @@
 #include <IOKit/storage/IOStorageDeviceCharacteristics.h>
 #endif
 #endif
-#ifdef TARGET_FREEBSD
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/syslimits.h>
 #endif
 #include "cdioSupport.h"
@@ -205,7 +205,7 @@ INT CIoSupport::ReadSectorMode2(HANDLE h
     return -1;
   }
   return MODE2_DATA_SIZE;
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   // NYI
 #elif defined(TARGET_POSIX)
   if (hDevice->m_bCDROM)
