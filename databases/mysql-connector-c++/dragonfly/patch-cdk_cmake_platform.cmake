--- cdk/cmake/platform.cmake.orig
+++ cdk/cmake/platform.cmake
@@ -91,7 +91,7 @@
   set(SUNOS ${CMAKE_SYSTEM_VERSION})
 endif()
 
-if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
   set(FREEBSD TRUE CACHE INTERNAL "")
 endif()
 
