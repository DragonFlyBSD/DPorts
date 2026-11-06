--- libs/JUCE/extras/Build/CMake/JUCEUtils.cmake.orig	2026-11-06 08:49:13 UTC
+++ libs/JUCE/extras/Build/CMake/JUCEUtils.cmake
@@ -80,7 +80,7 @@ define_property(TARGET PROPERTY JUCE_COPY_PLUGIN_AFTER
     FULL_DOCS "Whether or not plugins should be copied after building")
 set_property(GLOBAL PROPERTY JUCE_COPY_PLUGIN_AFTER_BUILD FALSE)
 
-if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
     _juce_create_pkgconfig_target(JUCE_CURL_LINUX_DEPS libcurl)
     _juce_create_pkgconfig_target(JUCE_BROWSER_LINUX_DEPS webkit2gtk-4.0 gtk+-x11-3.0)
 elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
@@ -112,7 +112,7 @@ function(_juce_set_default_properties)
 
         set_property(GLOBAL PROPERTY JUCE_VST3_COPY_DIR "${prefix}/VST3")
         set_property(GLOBAL PROPERTY JUCE_AAX_COPY_DIR  "${prefix}/Avid/Audio/Plug-Ins")
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         set_property(GLOBAL PROPERTY JUCE_VST_COPY_DIR  "$ENV{HOME}/.vst")
         set_property(GLOBAL PROPERTY JUCE_VST3_COPY_DIR "$ENV{HOME}/.vst3")
     endif()
@@ -213,7 +213,7 @@ endfunction()
 # know they need it. Otherwise, we won't link anything.
 # See the NEEDS_CURL, NEEDS_WEB_BROWSER, and NEEDS_STORE_KIT options in the CMake/readme.md.
 function(_juce_link_optional_libraries target)
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         get_target_property(needs_curl ${target} JUCE_NEEDS_CURL)
 
         if(needs_curl)
@@ -893,7 +893,7 @@ function(_juce_set_plugin_target_properties shared_cod
 
         set(output_path "${products_folder}/${product_name}.vst3")
 
-        if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+        if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
             set_target_properties(${target_name} PROPERTIES
                 SUFFIX .so
                 LIBRARY_OUTPUT_DIRECTORY "${output_path}/Contents/${JUCE_TARGET_ARCHITECTURE}-linux")
@@ -1026,7 +1026,7 @@ function(_juce_link_plugin_wrapper shared_code_target 
         add_library(${target_name} MODULE)
     endif()
 
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         target_link_options(${target_name} PRIVATE "-Wl,--no-undefined")
     endif()
 
