-- Provide an abseil interface target that points to the system include directory.
-- re2's pkg-config already links the necessary absl libraries, so no separate absl linking is needed.
--- cmake/extlib_abseil.cmake.orig	2026-07-09 20:55:57 UTC
+++ cmake/extlib_abseil.cmake
@@ -5,9 +5,9 @@ if(USE_SYSTEM_DEPS)
 if(USE_SYSTEM_DEPS)
     message(STATUS "Using system-deps in extlib_abseil.cmake")
 
-    find_package(abseil CONFIG REQUIRED)
-    pkg_check_modules(abseil REQUIRED abseil)
-    add_library(${ext_name_abseil} ALIAS PkgConfig::libabseil)
+    # Abseil is pulled in via re2's pkg-config; only the headers are needed here.
+    add_library(${ext_name_abseil} INTERFACE)
+    target_include_directories(${ext_name_abseil} INTERFACE /usr/local/include)
 else()
     message(STATUS "Ignoring system-deps in extlib_abseil.cmake")
 
