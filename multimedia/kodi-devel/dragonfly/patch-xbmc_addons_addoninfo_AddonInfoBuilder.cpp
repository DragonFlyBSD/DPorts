--- xbmc/addons/addoninfo/AddonInfoBuilder.cpp.orig	2019-12-16 08:11:03 UTC
+++ xbmc/addons/addoninfo/AddonInfoBuilder.cpp
@@ -539,8 +539,11 @@ const char* CAddonInfoBuilder::GetPlatfo
   const char* libraryName;
 #if defined(TARGET_ANDROID)
   libraryName = element->Attribute("library_android");
-#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD)
-#if defined(TARGET_FREEBSD)
+#elif defined(TARGET_LINUX) || defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
+#if defined(TARGET_DRAGONFLY)
+  libraryName = element->Attribute("library_dragonfly");
+  if (libraryName == nullptr)
+#elif defined(TARGET_FREEBSD)
   libraryName = element->Attribute("library_freebsd");
   if (libraryName == nullptr)
 #elif defined(TARGET_RASPBERRY_PI)
@@ -583,6 +586,9 @@ bool CAddonInfoBuilder::PlatformSupports
 #else
     #warning no architecture dependant platform tag
 #endif
+#elif defined(TARGET_DRAGONFLY)
+    "dragonfly",
+    "linux",
 #elif defined(TARGET_FREEBSD)
     "freebsd",
     "linux",
