--- src/shared/cmake/MacroCheckGccVisibility.cmake.intermediate	2018-02-21 16:07:02.000000000 +0000
+++ src/shared/cmake/MacroCheckGccVisibility.cmake
@@ -32,8 +32,8 @@ macro(MACRO_CHECK_GCC_VISIBILITY GccVisi
    
    
 
-   macro_ensure_version("4.1.0" "${_gcc_version}" GCC_IS_NEWER_THAN_4_1)
-   macro_ensure_version("4.2.0" "${_gcc_version}" GCC_IS_NEWER_THAN_4_2)
+   macro_ensure_version2("4.1" "${_gcc_version}" GCC_IS_NEWER_THAN_4_1)
+   macro_ensure_version2("4.2" "${_gcc_version}" GCC_IS_NEWER_THAN_4_2)
 
    set(_GCC_COMPILED_WITH_BAD_ALLOCATOR FALSE)
    if (GCC_IS_NEWER_THAN_4_1)
