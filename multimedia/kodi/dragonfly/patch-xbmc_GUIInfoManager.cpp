--- xbmc/GUIInfoManager.cpp.orig	2018-08-04 13:55:25.140580000 +0200
+++ xbmc/GUIInfoManager.cpp	2018-08-04 13:55:40.320906000 +0200
@@ -6928,7 +6928,7 @@ bool CGUIInfoManager::GetBool(int condit
     bReturn = g_application.IsMusicScanning();
   }
   else if (condition == SYSTEM_PLATFORM_LINUX)
-#if defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#if defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
     bReturn = true;
 #else
     bReturn = false;
