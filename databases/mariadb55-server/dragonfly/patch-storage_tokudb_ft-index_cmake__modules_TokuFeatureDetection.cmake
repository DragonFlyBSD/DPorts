--- storage/tokudb/ft-index/cmake_modules/TokuFeatureDetection.cmake.orig	2013-09-19 22:34:24.000000000 +0000
+++ storage/tokudb/ft-index/cmake_modules/TokuFeatureDetection.cmake
@@ -90,16 +90,8 @@ if (NOT HAVE_DLSYM_WITHOUT_DL)
     message(FATAL_ERROR "Cannot find dlsym(), even with -ldl.")
   endif ()
 endif ()
-check_function_exists(backtrace HAVE_BACKTRACE_WITHOUT_EXECINFO)
-if (NOT HAVE_BACKTRACE_WITHOUT_EXECINFO)
-  set(CMAKE_REQUIRED_LIBRARIES execinfo)
-  check_function_exists(backtrace HAVE_BACKTRACE_WITH_EXECINFO)
-  if (HAVE_BACKTRACE_WITH_EXECINFO)
-    list(APPEND EXTRA_SYSTEM_LIBS execinfo)
-  else ()
-    message(FATAL_ERROR "Cannot find backtrace(), even with -lexecinfo.")
-  endif ()
-endif ()
+
+list(APPEND EXTRA_SYSTEM_LIBS execinfo)
 
 if(HAVE_CLOCK_REALTIME)
   list(APPEND EXTRA_SYSTEM_LIBS rt)
