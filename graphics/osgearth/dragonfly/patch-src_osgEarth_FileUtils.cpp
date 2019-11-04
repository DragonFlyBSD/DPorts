--- src/osgEarth/FileUtils.cpp.orig	2015-07-30 19:53:25.000000000 +0300
+++ src/osgEarth/FileUtils.cpp
@@ -104,7 +104,7 @@
     #if (MAC_OS_X_VERSION_MAX_ALLOWED <= 1040)
         #define stat64 stat
     #endif
-#elif defined(__CYGWIN__) || defined(__FreeBSD__) || (defined(__hpux) && !defined(_LARGEFILE64_SOURCE))
+#elif defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__) || (defined(__hpux) && !defined(_LARGEFILE64_SOURCE))
     #define stat64 stat
 #endif
 
