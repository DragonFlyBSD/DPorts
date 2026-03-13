--- src/libcec/cmake/CheckPlatformSupport.cmake.orig	Wed Feb 26 09:40:16 2025
+++ src/libcec/cmake/CheckPlatformSupport.cmake	Sat Nov
@@ -77,7 +77,7 @@ else()
   set(LIB_DESTINATION "${CMAKE_INSTALL_LIBDIR}")
 
   # always try DRM on Linux if other methods fail
-  if(NOT CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+  if(NOT CMAKE_SYSTEM_NAME MATCHES "FreeBSD" AND NOT CMAKE_SYSTEM_NAME MATCHES "DragonFly")
     set(HAVE_DRM_EDID_PARSER ON CACHE BOOL "drm edid parser supported")
   endif()
 
