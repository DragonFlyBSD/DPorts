--- cmake/scripts/common/Platform.cmake.orig	2020-12-07 05:54:45 UTC
+++ cmake/scripts/common/Platform.cmake
@@ -2,7 +2,7 @@ if(NOT CORE_SYSTEM_NAME)
   string(TOLOWER ${CMAKE_SYSTEM_NAME} CORE_SYSTEM_NAME)
 endif()
 
-if(CORE_SYSTEM_NAME STREQUAL linux OR CORE_SYSTEM_NAME STREQUAL freebsd)
+if(CORE_SYSTEM_NAME MATCHES "linux|freebsd|dragonfly")
   # Set default CORE_PLATFORM_NAME to X11 WAYLAND GBM
   # This is overridden by user setting -DCORE_PLATFORM_NAME=<platform>
   set(_DEFAULT_PLATFORM X11 WAYLAND GBM)
@@ -35,7 +35,7 @@ endforeach()
 string(REPLACE ";" " " CORE_PLATFORM_STRING "${CORE_PLATFORM_NAME_LC}")
 list(APPEND final_message "Platforms: ${CORE_PLATFORM_STRING}")
 
-if(CORE_SYSTEM_NAME STREQUAL linux OR CORE_SYSTEM_NAME STREQUAL freebsd)
+if(CORE_SYSTEM_NAME MATCHES "linux|freebsd|dragonfly")
   list(LENGTH CORE_PLATFORM_NAME_LC PLATFORM_COUNT)
   if(PLATFORM_COUNT EQUAL 1)
     option(ENABLE_APP_AUTONAME "Enable renaming the binary according to windowing?" ON)
