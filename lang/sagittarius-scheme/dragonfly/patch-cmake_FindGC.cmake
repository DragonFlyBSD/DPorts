--- cmake/FindGC.cmake.orig	2019-06-09 21:33:40 UTC
+++ cmake/FindGC.cmake
@@ -50,7 +50,7 @@ ELSE()
 ENDIF()
 
 # For FreeBSD we need to use gc-threaded
-IF (${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD")
+IF (${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly")
   # checks if 'gc' supports 'GC_get_parallel' and if it does
   # then use it
   INCLUDE(${CMAKE_ROOT}/Modules/CheckCSourceCompiles.cmake)
