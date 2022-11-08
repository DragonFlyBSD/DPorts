--- cmake/QtFlagHandlingHelpers.cmake.intermediate	2022-11-06 12:12:38 UTC
+++ cmake/QtFlagHandlingHelpers.cmake
@@ -64,7 +64,7 @@ function(qt_internal_add_link_flags_no_u
             set(no_undefined_flag "-Wl,--no-undefined")
         endif()
 
-        if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+        if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
              set(no_undefined_flag "")
         endif()
 
