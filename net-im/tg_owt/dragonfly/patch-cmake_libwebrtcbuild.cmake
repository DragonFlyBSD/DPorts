--- cmake/libwebrtcbuild.cmake.orig	2021-10-21 06:15:41 UTC
+++ cmake/libwebrtcbuild.cmake
@@ -80,6 +80,11 @@ else()
         INTERFACE
             WEBRTC_FREEBSD
         )
+    elseif (CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
+        target_compile_definitions(libwebrtcbuild
+        INTERFACE
+            WEBRTC_DRAGONFLY
+        )
     endif()
 endif()
 
