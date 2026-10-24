-- FreeBSD's devel/loguru port ships loguru.hpp and loguru.cpp as
-- header-only source files without a CMake config package.  Compile
-- loguru.cpp into a static library with PIC and expose the loguru::loguru
-- alias expected by the rest of the build.
--- cmake/extlib_loguru.cmake.orig	2026-07-01 07:01:36 UTC
+++ cmake/extlib_loguru.cmake
@@ -6,14 +6,22 @@ if(USE_SYSTEM_DEPS)
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
+    # FreeBSD's devel/loguru port ships loguru.hpp and loguru.cpp as
+    # header-only source files without a CMake config package.  Compile
+    # loguru.cpp into a small static library and provide the loguru::loguru
+    # alias expected by the rest of the project.
+    find_package(Threads REQUIRED)
+    find_file(LOGURU_HPP loguru.hpp PATHS ${CMAKE_INSTALL_PREFIX}/include)
+    find_file(LOGURU_CPP loguru.cpp PATHS ${CMAKE_INSTALL_PREFIX}/include)
+    if(NOT LOGURU_HPP OR NOT LOGURU_CPP)
+        message(FATAL_ERROR "loguru.hpp and loguru.cpp not found in ${CMAKE_INSTALL_PREFIX}/include")
+    endif()
+    add_library(loguru STATIC ${LOGURU_CPP})
+    target_include_directories(loguru PUBLIC ${CMAKE_INSTALL_PREFIX}/include)
+    target_link_libraries(loguru PUBLIC Threads::Threads)
+    target_compile_definitions(loguru PUBLIC LOGURU_WITH_STREAMS=1)
+    set_target_properties(loguru PROPERTIES POSITION_INDEPENDENT_CODE ON)
+    add_library(loguru::loguru ALIAS loguru)
 
 else()
     message(STATUS "ignoring system-deps extlib_loguru.cmake")
