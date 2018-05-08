--- libstreams/cmake/MacroCheckGccVisibility.cmake.orig	2013-02-05 21:34:57.000000000 +0000
+++ libstreams/cmake/MacroCheckGccVisibility.cmake
@@ -16,9 +16,9 @@ macro(MACRO_CHECK_GCC_VISIBILITY GccVisi
    exec_program(${CMAKE_C_COMPILER} ARGS ${CMAKE_C_COMPILER_ARG1} --version OUTPUT_VARIABLE _gcc_version_info)
 
    string (REGEX MATCH "[345]\\.[0-9]\\.[0-9]" _gcc_version "${_gcc_version_info}")
-   # gcc on mac just reports: "gcc (GCC) 3.3 20030304 ..." without the patch level, handle this here:
+   # match newer gcc like gcc-8 using just two numbers
    if (NOT _gcc_version)
-      string (REGEX REPLACE ".*\\(GCC\\).* ([34]\\.[0-9]) .*" "\\1.0" _gcc_version "${_gcc_version_info}")
+      string (REGEX REPLACE ".* ([3-9]\\.[0-9]).*" "\\1.0" _gcc_version "${_gcc_version_info}")
    endif (NOT _gcc_version)
 
    macro_ensure_version("4.1.0" "${_gcc_version}" GCC_IS_NEWER_THAN_4_1)
