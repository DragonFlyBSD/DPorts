Use only first two.

--- CMake/vtkCompilerExtras.cmake.orig	2015-03-03 20:37:14.000000000 +0000
+++ CMake/vtkCompilerExtras.cmake	2018-02-28 14:38:36.000000000 +0000
@@ -27,7 +27,7 @@ if(CMAKE_COMPILER_IS_GNUCXX)
     OUTPUT_VARIABLE _gcc_version_info
     ERROR_VARIABLE _gcc_version_info)
 
-  string (REGEX MATCH "[345]\\.[0-9]\\.[0-9]*"
+  string (REGEX MATCH "[0-9]\\.[0-9]"
     _gcc_version "${_gcc_version_info}")
   if(NOT _gcc_version)
     string (REGEX REPLACE ".*\\(GCC\\).*([34]\\.[0-9]).*" "\\1.0"
@@ -39,7 +39,7 @@ if(CMAKE_COMPILER_IS_GNUCXX)
   option(VTK_USE_GCC_VISIBILITY "Use GCC visibility support if available." OFF)
   mark_as_advanced(VTK_USE_GCC_VISIBILITY)
 
-  if(${_gcc_version} VERSION_GREATER 4.2.0 AND BUILD_SHARED_LIBS
+  if(${_gcc_version} VERSION_GREATER 4.2 AND BUILD_SHARED_LIBS
     AND HAVE_GCC_VISIBILITY AND VTK_USE_GCC_VISIBILITY
     AND NOT MINGW AND NOT CYGWIN)
     # Should only be set if GCC is newer than 4.2.0
--- CMake/tmp/GenerateExportHeader.cmake.orig	2015-03-03 20:37:14.000000000 +0000
+++ CMake/GenerateExportHeader.cmake
@@ -166,7 +166,7 @@ macro(_test_compiler_hidden_visibility)
     execute_process(COMMAND ${CMAKE_C_COMPILER} ARGS --version
       OUTPUT_VARIABLE _gcc_version_info
       ERROR_VARIABLE _gcc_version_info)
-    string(REGEX MATCH "[345]\\.[0-9]\\.[0-9]*"
+    string(REGEX MATCH "[0-9]\\.[0-9]"
       _gcc_version "${_gcc_version_info}")
     # gcc on mac just reports: "gcc (GCC) 3.3 20030304 ..." without the
     # patch level, handle this here:
