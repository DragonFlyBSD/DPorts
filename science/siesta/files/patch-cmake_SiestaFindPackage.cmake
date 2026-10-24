-- Disallow the "fetch" method in Siesta_find_package so the build
-- does not try to clone Git repositories during configure.  The
-- required dependency sources are now pre-fetched as GH_TUPLE/GL_TUPLE
-- distfiles and populated in External/ before the build starts.
--- cmake/SiestaFindPackage.cmake.orig	2026-07-08 15:31:28 UTC
+++ cmake/SiestaFindPackage.cmake
@@ -117,7 +117,7 @@ function(Siesta_find_package)
 
 
   # Determine the allowed find-methods
-  set(all_f_methods "cmake" "pkgconf" "source" "fetch")
+  set(all_f_methods "cmake" "pkgconf" "source")
   set(allowed_f_methods "cmake" "pkgconf")
   if(DEFINED _f_SOURCE_DIR)
     list(APPEND allowed_f_methods "source")
@@ -323,39 +323,6 @@ function(Siesta_find_package)
       else()
         mymsg(CHECK_FAIL "not found/compatible")
       endif()
-    endif()
-
-    if("${method}" STREQUAL "fetch")
-      mymsg(CHECK_START "fetching from ${_f_REPO}")
-
-      include(FetchContent)
-      FetchContent_Declare("${pkg}"
-        GIT_REPOSITORY "${_f_REPO}"
-        GIT_TAG "${_f_TAG}"
-      )
-      FetchContent_MakeAvailable("${pkg}")
-
-      add_library("${_f_TARGET}" INTERFACE IMPORTED GLOBAL)
-      target_link_libraries("${_f_TARGET}" INTERFACE "${pkg}")
-
-      # We need the module directory in the subproject before we finish the configure stage
-      # Note that this is relevant if the "Fortran_MODULE_DIRECTORY" property is set to
-      # the 'include' subdirectory, as it is done for some libraries.
-      #
-      # (This is found experimentally; it does not seem to apply always, but it does not
-      #  hurt to do it.)
-
-      FetchContent_GetProperties("${pkg}" BINARY_DIR "${pkg_uc}_BINARY_DIR")
-      message(STATUS "BINARY_DIR for fetched ${pkg}: ${${pkg_uc}_BINARY_DIR}")
-
-      if(NOT EXISTS "${${pkg_uc}_BINARY_DIR}/include")
-        make_directory("${${pkg_uc}_BINARY_DIR}/include")
-      endif()
-
-      mymsg(CHECK_PASS "fetched")
-      set(f_method "fetch")
-
-      break()
     endif()
 
   endforeach()
