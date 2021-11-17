--- OrthancServer/Plugins/Engine/PluginsManager.cpp.orig	2021-11-14 15:16:47.176802000 +0100
+++ OrthancServer/Plugins/Engine/PluginsManager.cpp	2021-11-14 15:17:14.536193000 +0100
@@ -49,7 +49,7 @@
 
 #ifdef WIN32
 #define PLUGIN_EXTENSION ".dll"
-#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define PLUGIN_EXTENSION ".so"
 #elif defined(__APPLE__) && defined(__MACH__)
 #define PLUGIN_EXTENSION ".dylib"
