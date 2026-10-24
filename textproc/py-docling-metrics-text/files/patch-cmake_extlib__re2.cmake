-- Use the FreeBSD system re2 via pkg-config instead of fetching/building from GitHub.
-- The Poudriere build jail has no network/git access.
--- cmake/extlib_re2.cmake.orig	2026-07-09 20:55:57 UTC
+++ cmake/extlib_re2.cmake
@@ -5,8 +5,8 @@ if(USE_SYSTEM_DEPS)
 if(USE_SYSTEM_DEPS)
     message(STATUS "Using system-deps in extlib_re2.cmake")
 
-    find_package(re2 CONFIG REQUIRED)
-    pkg_check_modules(RE2 REQUIRED re2)
+    find_package(PkgConfig REQUIRED)
+    pkg_check_modules(libre2 REQUIRED IMPORTED_TARGET re2)
     add_library(${ext_name_re2} ALIAS PkgConfig::libre2)
 else()
     message(STATUS "Ignoring system-deps in extlib_re2.cmake")
