--- extras/Build/CMake/JUCEUtils.cmake.orig
+++ extras/Build/CMake/JUCEUtils.cmake
@@ -104,7 +104,7 @@
     endif()
 endfunction()
 
-if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
     _juce_create_pkgconfig_target(JUCE_CURL_LINUX_DEPS libcurl)
     _juce_available_pkgconfig_module_or_else(webkit_package_name webkit2gtk-4.1 webkit2gtk-4.0)
 
@@ -137,7 +137,7 @@
         set_property(GLOBAL PROPERTY JUCE_AAX_COPY_DIR    "${prefix}/Avid/Audio/Plug-Ins")
         set_property(GLOBAL PROPERTY JUCE_LV2_COPY_DIR    "$ENV{APPDATA}/LV2")
         set_property(GLOBAL PROPERTY JUCE_UNITY_COPY_DIR  "$ENV{APPDATA}/Unity")
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         set_property(GLOBAL PROPERTY JUCE_LV2_COPY_DIR   "$ENV{HOME}/.lv2")
         set_property(GLOBAL PROPERTY JUCE_VST_COPY_DIR   "$ENV{HOME}/.vst")
         set_property(GLOBAL PROPERTY JUCE_VST3_COPY_DIR  "$ENV{HOME}/.vst3")
@@ -259,7 +259,7 @@
 # know they need it. Otherwise, we won't link anything.
 # See the NEEDS_CURL, NEEDS_WEB_BROWSER, and NEEDS_STORE_KIT options in the CMake/readme.md.
 function(_juce_link_optional_libraries target)
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         get_target_property(needs_curl ${target} JUCE_NEEDS_CURL)
         get_target_property(needs_browser ${target} JUCE_NEEDS_WEB_BROWSER)
 
@@ -1085,7 +1085,7 @@
     if(TARGET ${helper_target}
        OR (CMAKE_SYSTEM_NAME STREQUAL "iOS")
        OR (CMAKE_SYSTEM_NAME STREQUAL "Android")
-       OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+       OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         return()
     endif()
 
@@ -1267,7 +1267,7 @@
 
         set(output_path "${products_folder}/${product_name}.vst3")
 
-        if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+        if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
             set_target_properties(${target_name} PROPERTIES
                 SUFFIX .so
                 LIBRARY_OUTPUT_DIRECTORY "${output_path}/Contents/${JUCE_TARGET_ARCHITECTURE}-linux")
@@ -1474,7 +1474,7 @@
         add_library(${target_name} MODULE)
     endif()
 
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         target_link_options(${target_name} PRIVATE "-Wl,--no-undefined")
     endif()
 
