--- cmake/common/helpers_common.cmake.orig	2026-11-05 08:38:36 UTC
+++ cmake/common/helpers_common.cmake
@@ -42,7 +42,7 @@
   add_library(plugin-support STATIC)
   target_sources(plugin-support PRIVATE plugin-support.c PUBLIC src/plugin-support.h)
   target_include_directories(plugin-support PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
-  if(OS_LINUX OR OS_FREEBSD OR OS_OPENBSD)
+  if(OS_LINUX OR OS_FREEBSD OR OS_OPENBSD OR OS_DRAGONFLY)
     # add fPIC on Linux to prevent shared object errors
     set_property(TARGET plugin-support PROPERTY POSITION_INDEPENDENT_CODE ON)
   endif()
