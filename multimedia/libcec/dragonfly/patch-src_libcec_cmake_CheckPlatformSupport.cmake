--- src/libcec/cmake/CheckPlatformSupport.cmake.orig	2018-08-05 09:45:25.404963000 +0200
+++ src/libcec/cmake/CheckPlatformSupport.cmake	2018-08-05 09:45:41.545310000 +0200
@@ -63,7 +63,7 @@ else()
   set(LIB_INFO "${LIB_INFO}, features: P8_USB")
 
   # always try DRM on Linux if other methods fail
-  if(NOT CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+  if(NOT CMAKE_SYSTEM_NAME MATCHES "FreeBSD" AND NOT CMAKE_SYSTEM_NAME MATCHES "DragonFly")
     set(HAVE_DRM_EDID_PARSER ON CACHE BOOL "drm edid parser not supported" FORCE)
     set(LIB_INFO "${LIB_INFO}, DRM")
   endif()
