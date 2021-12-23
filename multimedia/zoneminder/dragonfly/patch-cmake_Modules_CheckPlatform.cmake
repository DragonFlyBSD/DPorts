--- cmake/Modules/CheckPlatform.cmake.orig	2021-06-22 18:35:13 UTC
+++ cmake/Modules/CheckPlatform.cmake
@@ -6,7 +6,7 @@ if(${CMAKE_SYSTEM_NAME} MATCHES ".*(SunO
   set(HOST_OS "solaris")
   set(SOLARIS 1)
 endif()
-if(${CMAKE_SYSTEM_NAME} MATCHES ".*BSD.*")
+if(${CMAKE_SYSTEM_NAME} MATCHES ".*BSD.*" OR ${CMAKE_SYSTEM_NAME} MATCHES "DragonFly")
   set(HOST_OS "BSD")
   set(BSD 1)
 endif()
