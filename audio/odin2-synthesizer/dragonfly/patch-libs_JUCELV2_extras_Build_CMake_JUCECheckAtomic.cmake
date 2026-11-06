--- libs/JUCELV2/extras/Build/CMake/JUCECheckAtomic.cmake.orig	2026-11-06 08:49:14 UTC
+++ libs/JUCELV2/extras/Build/CMake/JUCECheckAtomic.cmake
@@ -25,7 +25,7 @@ function(_juce_create_atomic_target target_name)
     add_library("${target_name}" INTERFACE)
     add_library("juce::${target_name}" ALIAS "${target_name}")
 
-    if(NOT ((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD")))
+    if(NOT ((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly")))
         return()
     endif()
 
