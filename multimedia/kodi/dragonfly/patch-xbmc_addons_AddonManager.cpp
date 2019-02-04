--- xbmc/addons/AddonManager.cpp.orig	2017-11-14 17:55:01.000000000 +0100
+++ xbmc/addons/AddonManager.cpp	2018-08-05 16:19:27.768045000 +0200
@@ -927,6 +927,9 @@ bool CAddonMgr::PlatformSupportsAddon(co
 #elif defined(TARGET_FREEBSD)
     "freebsd",
     "linux",
+#elif defined(TARGET_DRAGONFLY)
+    "dragonfly",
+    "linux",
 #elif defined(TARGET_LINUX)
     "linux",
 #elif defined(TARGET_WINDOWS) && defined(HAS_DX)
@@ -1009,7 +1012,7 @@ std::string CAddonMgr::GetPlatformLibrar
   std::string libraryName;
 #if defined(TARGET_ANDROID)
   libraryName = GetExtValue(base, "@library_android");
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #if defined(TARGET_FREEBSD)
   libraryName = GetExtValue(base, "@library_freebsd");
   if (libraryName.empty())
@@ -1017,6 +1020,10 @@ std::string CAddonMgr::GetPlatformLibrar
   libraryName = GetExtValue(base, "@library_rbpi");
   if (libraryName.empty())
 #endif
+#if defined(TARGET_DRAGONFLY)
+  libraryName = GetExtValue(base, "@library_dragonfly");
+  if (libraryName.empty())
+#endif
   libraryName = GetExtValue(base, "@library_linux");
 #elif defined(TARGET_WINDOWS) && defined(HAS_DX)
   libraryName = GetExtValue(base, "@library_windx");
