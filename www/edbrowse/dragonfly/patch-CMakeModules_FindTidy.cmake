--- CMakeModules/FindTidy.cmake.orig	2020-11-07 16:19:44 UTC
+++ CMakeModules/FindTidy.cmake
@@ -25,7 +25,7 @@ if (_TIDY_ROOT)
 endif ()
 
 set(TIDY_NAMES tidy)
-if (${CMAKE_SYSTEM_NAME} STREQUAL  "FreeBSD")
+if (${CMAKE_SYSTEM_NAME} STREQUAL  "FreeBSD" OR ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly")
     set(TIDY_NAMES tidy5)
 endif ()
 
