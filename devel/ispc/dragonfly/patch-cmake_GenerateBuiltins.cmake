--- cmake/GenerateBuiltins.cmake.orig	2026-10-26 01:17:16 UTC
+++ cmake/GenerateBuiltins.cmake
@@ -224,6 +224,9 @@ function (get_target_flags os arch out)
     elseif (${os} STREQUAL "freebsd")
         set(triple ${arch}-unknown-freebsd)
         set(fpic -fPIC)
+    elseif (${os} STREQUAL "dragonfly")
+        set(triple ${arch}-unknown-dragonfly)
+        set(fpic -fPIC)
     elseif (${os} STREQUAL "macos")
         set(triple ${arch}-apple-macosx)
     elseif (${os} STREQUAL "android")
@@ -469,6 +472,10 @@ function (generate_common_builtins)
         builtin_to_cpp(64 android x86)
     endif()
 
+    if (ISPC_DRAGONFLY_TARGET AND X86_ENABLED)
+        builtin_to_cpp(64 dragonfly x86)
+    endif()
+
     if (ISPC_FREEBSD_TARGET AND ARM_ENABLED)
         builtin_to_cpp(32 freebsd arm)
         builtin_to_cpp(64 freebsd arm)
