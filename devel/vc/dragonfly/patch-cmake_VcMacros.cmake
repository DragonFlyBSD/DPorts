--- cmake/VcMacros.cmake.orig	2019-03-27 08:19:56 UTC
+++ cmake/VcMacros.cmake
@@ -111,11 +111,6 @@ macro(vc_determine_compiler)
                endif()
             endif()
          endif()
-
-         # break build with too old GCC as early as possible.
-         if(Vc_GCC_VERSION VERSION_LESS 4.8.1)
-            message(FATAL_ERROR "Vc 1.x requires C++11 support. This requires at least GCC 4.8.1")
-         endif()
       else()
          message(WARNING "Untested/-supported Compiler (${CMAKE_CXX_COMPILER}) for use with Vc.\nPlease fill out the missing parts in the CMake scripts and submit a patch to http://code.compeng.uni-frankfurt.de/projects/vc")
       endif()
