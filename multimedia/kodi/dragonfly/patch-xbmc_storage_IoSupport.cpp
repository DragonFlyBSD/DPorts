--- xbmc/storage/IoSupport.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/storage/IoSupport.cpp
@@ -192,7 +192,7 @@ int CIoSupport::ReadSectorMode2(HANDLE h
     return -1;
   }
   return MODE2_DATA_SIZE;
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   // NYI
 #elif defined(TARGET_POSIX)
   if (hDevice->m_bCDROM)
