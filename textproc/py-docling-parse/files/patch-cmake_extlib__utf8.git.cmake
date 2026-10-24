-- FreeBSD's devel/utf8cpp port installs headers under
-- ${PREFIX}/include/utf8cpp without a CMake config package.  Create an
-- INTERFACE target that exposes the utf8cpp include directory to the build.
--- cmake/extlib_utf8.git.cmake.orig	2026-07-01 07:01:36 UTC
+++ cmake/extlib_utf8.git.cmake
@@ -6,11 +6,16 @@ if(USE_SYSTEM_DEPS)
 if(USE_SYSTEM_DEPS)
     message(STATUS "using system-deps in extlib_utf8.cmake")
 
-    # this will define the utf8cpp target
-    find_package(utf8cpp REQUIRED)
+    # FreeBSD's devel/utfcpp port installs headers under
+    # ${PREFIX}/include/utf8cpp.  Create an INTERFACE target so the rest of
+    # the build can use the plain "utf8" target and #include <utf8.h>.
+    find_path(UTF8CPP_INCLUDE_DIR utf8.h PATHS ${CMAKE_INSTALL_PREFIX}/include/utf8cpp)
+    if(NOT UTF8CPP_INCLUDE_DIR)
+        message(FATAL_ERROR "utf8.h not found in ${CMAKE_INSTALL_PREFIX}/include/utf8cpp")
+    endif()
 
     add_library(${ext_name} INTERFACE IMPORTED)
-    add_dependencies(${ext_name} utf8cpp)
+    target_include_directories(${ext_name} INTERFACE ${CMAKE_INSTALL_PREFIX}/include/utf8cpp)
 
 else()
     message(STATUS "ignoring system-deps extlib_utf8.cmake")
