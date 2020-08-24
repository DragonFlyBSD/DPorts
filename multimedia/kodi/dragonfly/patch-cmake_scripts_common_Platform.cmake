--- cmake/scripts/common/Platform.cmake.orig	2019-12-16 08:11:03 UTC
+++ cmake/scripts/common/Platform.cmake
@@ -2,7 +2,7 @@ if(NOT CORE_SYSTEM_NAME)
   string(TOLOWER ${CMAKE_SYSTEM_NAME} CORE_SYSTEM_NAME)
 endif()
 
-if(CORE_SYSTEM_NAME STREQUAL linux OR CORE_SYSTEM_NAME STREQUAL freebsd)
+if(CORE_SYSTEM_NAME STREQUAL linux OR CORE_SYSTEM_NAME STREQUAL freebsd OR CORE_SYSTEM_NAME STREQUAL dragonfly)
   # Set default CORE_PLATFORM_NAME to X11
   # This is overridden by user setting -DCORE_PLATFORM_NAME=<platform>
   set(_DEFAULT_PLATFORM X11)
