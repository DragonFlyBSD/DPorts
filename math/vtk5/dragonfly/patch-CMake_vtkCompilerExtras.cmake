--- CMake/vtkCompilerExtras.cmake.orig	2012-10-15 20:33:21.000000000 +0000
+++ CMake/vtkCompilerExtras.cmake
@@ -25,7 +25,7 @@ if(CMAKE_COMPILER_IS_GNUCXX)
   # Now check if we can use visibility to selectively export symbols
   exec_program(${CMAKE_C_COMPILER} ARGS --version OUTPUT_VARIABLE
     _gcc_version_info)
-  string (REGEX MATCH "[345]\\.[0-9]\\.[0-9]" 
+  string (REGEX MATCH "[0-9]\\.[0-9]" 
     _gcc_version "${_gcc_version_info}")
   if(NOT _gcc_version)
     string (REGEX REPLACE ".*\\(GCC\\).* ([34]\\.[0-9]) .*" "\\1.0" 
@@ -37,7 +37,7 @@ if(CMAKE_COMPILER_IS_GNUCXX)
   option(VTK_USE_GCC_VISIBILITY "Use GCC visibility support if available." ON)
   mark_as_advanced(VTK_USE_GCC_VISIBILITY)
 
-  if(${_gcc_version} VERSION_GREATER 4.2.0 AND BUILD_SHARED_LIBS
+  if(${_gcc_version} VERSION_GREATER 4.2 AND BUILD_SHARED_LIBS
     AND HAVE_GCC_VISIBILITY AND VTK_USE_GCC_VISIBILITY
     AND NOT MINGW AND NOT CYGWIN)
     # Should only be set if GCC is newer than 4.2.0
