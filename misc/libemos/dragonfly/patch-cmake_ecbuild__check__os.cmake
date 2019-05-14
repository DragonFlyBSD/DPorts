--- cmake/ecbuild_check_os.cmake.orig	2018-07-06 16:41:55 UTC
+++ cmake/ecbuild_check_os.cmake
@@ -260,6 +260,12 @@ if( UNIX )
 
   ### FreeBSD ###
 
+  if( ${CMAKE_SYSTEM_NAME} MATCHES "DragonFly" )
+    set( EC_OS_NAME "dragonfly" )
+  endif()
+
+  ### FreeBSD ###
+
   if( ${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD" )
     set( EC_OS_NAME "freebsd" )
   endif()
