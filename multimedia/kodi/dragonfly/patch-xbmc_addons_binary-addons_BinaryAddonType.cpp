--- xbmc/addons/binary-addons/BinaryAddonType.cpp.orig	2020-05-31 13:31:35 UTC
+++ xbmc/addons/binary-addons/BinaryAddonType.cpp
@@ -50,8 +50,11 @@ const char* CBinaryAddonType::GetPlatfor
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
