--- cmake/CommonStdlibBuiltins.cmake.orig	2026-10-26 01:17:16 UTC
+++ cmake/CommonStdlibBuiltins.cmake
@@ -305,6 +305,8 @@ function(generate_generic ispc_name target arch bit os component)
             endif()
         elseif(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
             set(fixed_os "freebsd")
+        elseif (CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
+            set(fixed_os "dragonfly")
         else()
             message(FATAL_ERROR "Error: unknown OS for target ${fixed_os}")
         endif()
