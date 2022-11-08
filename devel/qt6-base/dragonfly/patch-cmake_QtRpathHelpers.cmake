--- cmake/QtRpathHelpers.cmake.intermediate	2022-11-06 12:03:21 UTC
+++ cmake/QtRpathHelpers.cmake
@@ -5,7 +5,7 @@ function(qt_internal_get_relative_rpath_
         set(rpath_rel_base "@loader_path")
     elseif(LINUX OR SOLARIS OR FREEBSD OR HURD)
         set(rpath_rel_base "$ORIGIN")
-    elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+    elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
         set(rpath_rel_base "$ORIGIN")
     else()
         set(rpath_rel_base "NO_KNOWN_RPATH_REL_BASE")
