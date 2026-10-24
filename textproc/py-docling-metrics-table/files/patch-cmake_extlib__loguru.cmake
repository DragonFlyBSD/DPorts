-- Build a local loguru static library from the FreeBSD devel/loguru port.
-- The port installs loguru.hpp and loguru.cpp under ${PREFIX}/include, but
-- provides no CMake target.  This replaces the upstream find_package path.

--- cmake/extlib_loguru.cmake.orig	2022-11-09 12:37:21 UTC
+++ cmake/extlib_loguru.cmake
@@ -5,14 +5,16 @@ if(USE_SYSTEM_DEPS)
 if(USE_SYSTEM_DEPS)
     message(STATUS "using system-deps in extlib_loguru.cmake")
 
-    # this will define the loguru target
-    # find_package(loguru REQUIRED)
-
-    # add_library(${ext_name_loguru} INTERFACE IMPORTED)
-    # add_dependencies(${ext_name_loguru} loguru)
-
-    find_package(loguru CONFIG REQUIRED)
-    add_library(${ext_name_loguru} ALIAS loguru::loguru)
+    find_package(Threads REQUIRED)
+    find_file(LOGURU_HPP loguru.hpp PATHS ${CMAKE_INSTALL_PREFIX}/include)
+    find_file(LOGURU_CPP loguru.cpp PATHS ${CMAKE_INSTALL_PREFIX}/include)
+    if(NOT LOGURU_HPP OR NOT LOGURU_CPP)
+        message(FATAL_ERROR "loguru.hpp and loguru.cpp not found in ${CMAKE_INSTALL_PREFIX}/include")
+    endif()
+    add_library(loguru STATIC ${LOGURU_CPP})
+    target_include_directories(loguru PUBLIC ${CMAKE_INSTALL_PREFIX}/include)
+    target_link_libraries(loguru PUBLIC Threads::Threads)
+    add_library(loguru::loguru ALIAS loguru)
 
 else()
     message(STATUS "ignoring system-deps extlib_loguru.cmake")
