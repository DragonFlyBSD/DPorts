--- cmake/ecbuild_append_to_rpath.cmake.orig	2018-02-16 15:04:28 UTC
+++ cmake/ecbuild_append_to_rpath.cmake
@@ -67,7 +67,7 @@ macro( ecbuild_append_to_rpath RPATH_DIR
 
 				endif()
 
-                if( EC_OS_NAME STREQUAL "freebsd" )
+                if( EC_OS_NAME MATCHES "freebsd|DragonFly" )
                     _path_append( CMAKE_INSTALL_RPATH "$ORIGIN/${RPATH_DIR}" )
                     set( _done 1 )
                 endif()
