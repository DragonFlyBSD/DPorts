--- cmake/FindBoehm_GC.cmake.orig	2021-09-10 19:33:30 UTC
+++ cmake/FindBoehm_GC.cmake
@@ -50,7 +50,7 @@ ELSE()
 ENDIF()
 
 # For FreeBSD we need to use gc-threaded
-IF (${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD")
+IF (${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly")
   # checks if 'gc' supports 'GC_get_parallel' and if it does
   # then use it
   INCLUDE(${CMAKE_ROOT}/Modules/CheckCSourceCompiles.cmake)
