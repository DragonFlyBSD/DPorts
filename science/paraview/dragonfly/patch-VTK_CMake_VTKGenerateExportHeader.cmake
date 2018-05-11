--- VTK/CMake/VTKGenerateExportHeader.cmake.orig	2016-11-14 15:41:57.000000000 +0000
+++ VTK/CMake/VTKGenerateExportHeader.cmake
@@ -174,7 +174,7 @@ macro(_vtk_test_compiler_hidden_visibili
     execute_process(COMMAND ${CMAKE_C_COMPILER} --version
       OUTPUT_VARIABLE _gcc_version_info
       ERROR_VARIABLE _gcc_version_info)
-    string(REGEX MATCH "[3-9]\\.[0-9]\\.[0-9]*"
+    string(REGEX MATCH "[3-9]\\.[0-9]"
       _gcc_version "${_gcc_version_info}")
     # gcc on mac just reports: "gcc (GCC) 3.3 20030304 ..." without the
     # patch level, handle this here:
