--- xbmc/addons/AddonManager.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/addons/AddonManager.cpp
@@ -1048,6 +1048,9 @@ bool CAddonMgr::PlatformSupportsAddon(co
 #else
     #warning no architecture dependant platform tag
 #endif
+#elif defined(TARGET_DRAGONFLY)
+    "dragonfly",
+    "linux",
 #elif defined(TARGET_FREEBSD)
     "freebsd",
     "linux",
@@ -1153,7 +1156,11 @@ std::string CAddonMgr::GetPlatformLibrar
   std::string libraryName;
 #if defined(TARGET_ANDROID)
   libraryName = GetExtValue(base, "@library_android");
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
+#if defined(TARGET_DRAGONFLY)
+  libraryName = GetExtValue(base, "@library_dragonfly");
+  if (libraryName.empty())
+#endif
 #if defined(TARGET_FREEBSD)
   libraryName = GetExtValue(base, "@library_freebsd");
   if (libraryName.empty())
