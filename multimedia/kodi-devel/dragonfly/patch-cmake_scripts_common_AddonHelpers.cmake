--- cmake/scripts/common/AddonHelpers.cmake.orig	2019-12-16 08:11:03 UTC
+++ cmake/scripts/common/AddonHelpers.cmake
@@ -324,7 +324,7 @@ macro (build_addon target prefix libs)
     endif()
     add_cpack_workaround(${target} ${${prefix}_VERSION} ${ext})
   else()
-    if(CORE_SYSTEM_NAME STREQUAL linux OR CORE_SYSTEM_NAME STREQUAL freebsd)
+    if(CORE_SYSTEM_NAME STREQUAL linux OR CORE_SYSTEM_NAME STREQUAL freebsd OR CORE_SYSTEM_NAME STREQUAL dragonfly)
       if(NOT OVERRIDE_PATHS)
         if(CMAKE_INSTALL_PREFIX AND NOT CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT AND NOT CMAKE_INSTALL_PREFIX STREQUAL "${${APP_NAME_UC}_PREFIX}")
           message(WARNING "CMAKE_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX} differs from ${APP_NAME} prefix, changing to ${${APP_NAME_UC}_PREFIX}. Please pass -DOVERRIDE_PATHS=1 to skip this check")
