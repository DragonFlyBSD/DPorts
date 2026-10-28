--- cmake/Stdlib.cmake.orig	2026-10-26 01:17:16 UTC
+++ cmake/Stdlib.cmake
@@ -25,6 +25,8 @@ function(write_stdlib_bitcode_lib name target os bit out_arch out_os bitcode_fil
             set(fixed_os "macos")
         elseif (CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
             set(fixed_os "freebsd")
+        elseif (CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
+            set(fixed_os "dragonfly")
         endif()
     endif()
     set(${out_os} ${fixed_os} PARENT_SCOPE)
