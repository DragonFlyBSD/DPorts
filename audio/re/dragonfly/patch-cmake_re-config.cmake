--- cmake/re-config.cmake.orig	2023-11-06 15:50:50 UTC
+++ cmake/re-config.cmake
@@ -54,7 +54,6 @@ else()
   check_symbol_exists(res_ninit resolv.h HAVE_RESOLV)
 endif()
 if(HAVE_RESOLV)
-  set(RESOLV_LIBRARY resolv)
   list(APPEND RE_DEFINITIONS HAVE_RESOLV)
 else()
   set(RESOLV_LIBRARY)
