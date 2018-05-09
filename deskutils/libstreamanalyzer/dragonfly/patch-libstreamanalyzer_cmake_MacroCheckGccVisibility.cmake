Only match first two.

--- libstreamanalyzer/cmake/MacroCheckGccVisibility.cmake.orig	2013-02-05 21:34:52.000000000 +0000
+++ libstreamanalyzer/cmake/MacroCheckGccVisibility.cmake
@@ -15,14 +15,14 @@ macro(MACRO_CHECK_GCC_VISIBILITY GccVisi
    # get the gcc version
    exec_program(${CMAKE_C_COMPILER} ARGS ${CMAKE_C_COMPILER_ARG1} --version OUTPUT_VARIABLE _gcc_version_info)
 
-   string (REGEX MATCH "[345]\\.[0-9]\\.[0-9]" _gcc_version "${_gcc_version_info}")
+   string (REGEX MATCH "[0-9]\\.[0-9]" _gcc_version "${_gcc_version_info}")
    # gcc on mac just reports: "gcc (GCC) 3.3 20030304 ..." without the patch level, handle this here:
    if (NOT _gcc_version)
       string (REGEX REPLACE ".*\\(GCC\\).* ([34]\\.[0-9]) .*" "\\1.0" _gcc_version "${_gcc_version_info}")
    endif (NOT _gcc_version)
 
-   macro_ensure_version("4.1.0" "${_gcc_version}" GCC_IS_NEWER_THAN_4_1)
-   macro_ensure_version("4.2.0" "${_gcc_version}" GCC_IS_NEWER_THAN_4_2)
+   macro_ensure_version2("4.1" "${_gcc_version}" GCC_IS_NEWER_THAN_4_1)
+   macro_ensure_version2("4.2" "${_gcc_version}" GCC_IS_NEWER_THAN_4_2)
 
    set(_GCC_COMPILED_WITH_BAD_ALLOCATOR FALSE)
    if (GCC_IS_NEWER_THAN_4_1)
