-- Use the FreeBSD devel/cxxopts port instead of FetchContent.
-- Upstream tries pkg_check_modules, but the FreeBSD cxxopts port installs
-- CMake config files defining the cxxopts::cxxopts target.

--- cmake/extlib_cxxopts.cmake.orig	2022-11-09 12:37:21 UTC
+++ cmake/extlib_cxxopts.cmake
@@ -5,15 +5,8 @@ if(USE_SYSTEM_DEPS)
 if(USE_SYSTEM_DEPS)
     message(STATUS "using system-deps in extlib_cxxopts.cmake")
 
-    # this will define the cxxopts target
-    # find_package(cxxopts REQUIRED)
-
-    # add_library(${ext_name_cxxopts} INTERFACE IMPORTED)
-    # add_dependencies(${ext_name_cxxopts} cxxopts)
-
-    find_package(PkgConfig)
-    pkg_check_modules(libcxxopts REQUIRED IMPORTED_TARGET cxxopts)
-    add_library(${ext_name_cxxopts} ALIAS PkgConfig::libcxxopts)
+    find_package(cxxopts CONFIG REQUIRED)
+    add_library(${ext_name_cxxopts} ALIAS cxxopts::cxxopts)
 
 else()
     message(STATUS "ignoring system-deps extlib_cxxopts.cmake")
