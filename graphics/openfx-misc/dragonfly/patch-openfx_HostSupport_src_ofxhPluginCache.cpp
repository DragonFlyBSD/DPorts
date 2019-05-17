--- openfx/HostSupport/src/ofxhPluginCache.cpp.intermedediate	2019-05-14 10:16:11.000000000 +0000
+++ openfx/HostSupport/src/ofxhPluginCache.cpp
@@ -55,7 +55,7 @@
 #include "ofxhXml.h"
 #include "ofxhUtilities.h"
 
-#if defined (__linux__) || defined (__FreeBSD__)
+#if defined (__linux__) || defined (__FreeBSD__) || defined (__DragonFly__)
 
 #define DIRLIST_SEP_CHARS ":;"
 #define DIRSEP "/"
@@ -73,6 +73,8 @@ static const char *getArchStr()
   else {
 #if defined(__linux__)
     return  "Linux-x86-64";
+#elif defined(__DragonFly__
+    return  "DragonFly-x86-64";
 #else
     return  "FreeBSD-x86-64";
 #endif
@@ -313,7 +315,7 @@ PluginCache::PluginCache()
   _pluginPath.push_back(path);
   _pluginPath.push_back("C:\\Program Files\\Common Files\\OFX\\Plugins");
 #endif
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
   _pluginPath.push_back("/usr/OFX/Plugins");
 #endif
 #if defined(__APPLE__)
@@ -329,7 +331,7 @@ void PluginCache::setPluginHostPath(cons
   _pluginPath.push_back(path);
   _pluginPath.push_back("C:\\Program Files\\Common Files\\OFX\\" + hostId);
 #endif
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
   _pluginPath.push_back("/usr/OFX/" + hostId);
 #endif
 #if defined(__APPLE__)
