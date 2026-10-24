-- Use the FreeBSD system loguru source instead of fetching from GitHub during the build.
-- The Poudriere build jail has no network/git access, so we link against devel/loguru.
--- cmake/extlib_loguru.cmake.orig	2026-07-09 20:55:57 UTC
+++ cmake/extlib_loguru.cmake
@@ -11,8 +11,9 @@ if(USE_SYSTEM_DEPS)
     # add_library(${ext_name_loguru} INTERFACE IMPORTED)
     # add_dependencies(${ext_name_loguru} loguru)
 
-    find_package(loguru CONFIG REQUIRED)
-    add_library(${ext_name_loguru} ALIAS loguru::loguru)
+    add_library(${ext_name_loguru} STATIC /usr/local/include/loguru.cpp)
+    target_include_directories(${ext_name_loguru} PUBLIC /usr/local/include)
+    set_target_properties(${ext_name_loguru} PROPERTIES POSITION_INDEPENDENT_CODE ON)
 
 else()
     message(STATUS "Ignoring system-deps extlib_loguru.cmake")
