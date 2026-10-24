--- cmake/QtFlagHandlingHelpers.cmake.orig	2026-05-07 07:50:01 UTC
+++ cmake/QtFlagHandlingHelpers.cmake
@@ -154,6 +154,12 @@ function(qt_internal_add_link_flags_no_undefined targe
         # set and thread_local is used
         return()
     endif()
+    if (DRAGONFLY)
+        # DragonFly's linker setup reports undefined symbols (environ,
+        # compiler-rt half-precision helpers) that are resolved at load
+        # time; keep historical behavior of not enforcing --no-undefined.
+        return()
+    endif()
     if(CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
         # ld64 defaults to -undefined,error, and in Xcode 15
         # passing this option is deprecated, causing a warning.
