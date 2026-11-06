--- extras/Build/CMake/JUCEUtils.cmake.orig	2023-08-03 10:07:31 UTC
+++ extras/Build/CMake/JUCEUtils.cmake
@@ -84,7 +84,7 @@ define_property(TARGET PROPERTY JUCE_COPY_PLUGIN_AFTER
     FULL_DOCS "Whether or not plugins should be copied after building")
 set_property(GLOBAL PROPERTY JUCE_COPY_PLUGIN_AFTER_BUILD FALSE)
 
-if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
     _juce_create_pkgconfig_target(JUCE_CURL_LINUX_DEPS libcurl)
     _juce_create_pkgconfig_target(JUCE_BROWSER_LINUX_DEPS webkit2gtk-4.0 gtk+-x11-3.0)
 endif()
@@ -114,7 +114,7 @@ function(_juce_set_default_properties)
         set_property(GLOBAL PROPERTY JUCE_AAX_COPY_DIR    "${prefix}/Avid/Audio/Plug-Ins")
         set_property(GLOBAL PROPERTY JUCE_LV2_COPY_DIR    "$ENV{APPDATA}/LV2")
         set_property(GLOBAL PROPERTY JUCE_UNITY_COPY_DIR  "$ENV{APPDATA}/Unity")
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         set_property(GLOBAL PROPERTY JUCE_LV2_COPY_DIR   "$ENV{HOME}/.lv2")
         set_property(GLOBAL PROPERTY JUCE_VST_COPY_DIR   "$ENV{HOME}/.vst")
         set_property(GLOBAL PROPERTY JUCE_VST3_COPY_DIR  "$ENV{HOME}/.vst3")
@@ -236,7 +236,7 @@ endfunction()
 # know they need it. Otherwise, we won't link anything.
 # See the NEEDS_CURL, NEEDS_WEB_BROWSER, and NEEDS_STORE_KIT options in the CMake/readme.md.
 function(_juce_link_optional_libraries target)
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         get_target_property(needs_curl ${target} JUCE_NEEDS_CURL)
 
         if(needs_curl)
@@ -941,7 +941,7 @@ function(_juce_add_vst3_manifest_helper_target)
     if(TARGET juce_vst3_helper
        OR (CMAKE_SYSTEM_NAME STREQUAL "iOS")
        OR (CMAKE_SYSTEM_NAME STREQUAL "Android")
-       OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+       OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         return()
     endif()
 
@@ -1017,7 +1017,7 @@ function(_juce_set_plugin_target_properties shared_cod
         # Forward-slash separator is vital for moduleinfotool to work correctly on Windows!
         set(output_path "${products_folder}/${product_name}.vst3")
 
-        if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+        if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
             set_target_properties(${target_name} PROPERTIES
                 SUFFIX .so
                 LIBRARY_OUTPUT_DIRECTORY "${output_path}/Contents/${JUCE_TARGET_ARCHITECTURE}-linux")
@@ -1196,7 +1196,7 @@ function(_juce_link_plugin_wrapper shared_code_target 
         add_library(${target_name} MODULE)
     endif()
 
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         target_link_options(${target_name} PRIVATE "-Wl,--no-undefined")
     endif()
 
@@ -2059,7 +2059,7 @@ function(juce_add_pip header)
                 list(APPEND extra_formats VST)
             endif()
 
-            if(NOT (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+            if(NOT (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
                 list(APPEND extra_formats VST3)
             endif()
 
