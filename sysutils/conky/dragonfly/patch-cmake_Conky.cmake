--- cmake/Conky.cmake.orig	2026-06-02 12:21:16 UTC
+++ cmake/Conky.cmake
@@ -108,7 +108,7 @@ if(NOT OS_DARWIN AND NOT OS_OPENBSD)
   )
 endif(NOT OS_DARWIN AND NOT OS_OPENBSD)
 
-if(OS_FREEBSD)
+if(OS_FREEBSD OR OS_DRAGONFLY)
   add_definitions(-D__BSD_VISIBLE=1 -D_XOPEN_SOURCE=700)
   set(
     CMAKE_REQUIRED_DEFINITIONS
