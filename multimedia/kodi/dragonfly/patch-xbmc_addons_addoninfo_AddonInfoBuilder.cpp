--- xbmc/addons/addoninfo/AddonInfoBuilder.cpp.orig
+++ xbmc/addons/addoninfo/AddonInfoBuilder.cpp
@@ -789,8 +789,11 @@
   const char* libraryName = nullptr;
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
 #endif
@@ -832,6 +835,9 @@
 #else
     #warning no architecture dependant platform tag
 #endif
+#elif defined(TARGET_DRAGONFLY)
+    "dragonfly",
+    "linux",
 #elif defined(TARGET_FREEBSD)
     "freebsd",
 #elif defined(TARGET_LINUX)
