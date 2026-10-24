--- cmake/QtRpathHelpers.cmake.orig	2026-05-07 07:50:01 UTC
+++ cmake/QtRpathHelpers.cmake
@@ -6,7 +6,7 @@
 function(qt_internal_get_relative_rpath_base_token out_var)
     if(APPLE)
         set(rpath_rel_base "@loader_path")
-    elseif(LINUX OR SOLARIS OR FREEBSD OR HURD OR OPENBSD)
+    elseif(LINUX OR SOLARIS OR FREEBSD OR HURD OR OPENBSD OR DRAGONFLY)
         set(rpath_rel_base "$ORIGIN")
     else()
         set(rpath_rel_base "NO_KNOWN_RPATH_REL_BASE")
