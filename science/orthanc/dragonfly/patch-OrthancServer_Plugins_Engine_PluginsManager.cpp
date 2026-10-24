--- OrthancServer/Plugins/Engine/PluginsManager.cpp.orig
+++ OrthancServer/Plugins/Engine/PluginsManager.cpp
@@ -40,7 +40,7 @@
 
 #ifdef _WIN32
 #define PLUGIN_EXTENSION ".dll"
-#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define PLUGIN_EXTENSION ".so"
 #elif defined(__APPLE__) && defined(__MACH__)
 #define PLUGIN_EXTENSION ".dylib"
