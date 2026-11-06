--- extras/Build/CMake/JUCEModuleSupport.cmake.orig	2023-08-03 10:07:31 UTC
+++ extras/Build/CMake/JUCEModuleSupport.cmake
@@ -53,7 +53,7 @@ function(_juce_find_target_architecture result)
     set("${result}" "${match_result}" PARENT_SCOPE)
 endfunction()
 
-if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD") OR MSYS OR MINGW)
+if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly") OR MSYS OR MINGW)
     # If you really need to override the detected arch for some reason,
     # you can configure the build with -DJUCE_TARGET_ARCHITECTURE=<custom arch>
     if(NOT DEFINED JUCE_TARGET_ARCHITECTURE)
@@ -163,7 +163,7 @@ function(_juce_should_build_module_source filename out
     set(system_name_regex_for_suffix
         "android\;Android"
         "ios\;iOS"
-        "linux\;Linux|.*BSD"
+        "linux\;Linux|.*BSD|DragonFly"
         "mac\;Darwin"
         "osx\;Darwin"
         "windows\;Windows")
@@ -254,7 +254,7 @@ function(_juce_get_platform_plugin_kinds out)
 
     if(NOT CMAKE_SYSTEM_NAME STREQUAL "iOS" AND NOT CMAKE_SYSTEM_NAME STREQUAL "Android")
         list(APPEND result VST LV2)
-        if(NOT (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+        if(NOT (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
             list(APPEND result Unity VST3)
         endif()
     endif()
@@ -389,7 +389,7 @@ function(_juce_add_module_staticlib_paths module_targe
         _juce_add_library_path(${module_target} "${module_path}/libs/MacOSX")
     elseif(CMAKE_SYSTEM_NAME STREQUAL "iOS")
         _juce_add_library_path(${module_target} "${module_path}/libs/iOS")
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         _juce_add_library_path(${module_target} "${module_path}/libs/Linux/${JUCE_TARGET_ARCHITECTURE}")
     elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
         if(CMAKE_GENERATOR MATCHES "Visual Studio [0-9]+ (20[0-9]+)")
@@ -482,7 +482,7 @@ function(juce_add_module module_path)
 
         target_link_libraries(juce_core INTERFACE juce::juce_atomic_wrapper)
 
-        if(CMAKE_SYSTEM_NAME MATCHES ".*BSD")
+        if(CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly")
             target_link_libraries(juce_core INTERFACE execinfo)
         elseif(CMAKE_SYSTEM_NAME STREQUAL "Android")
             target_sources(juce_core INTERFACE "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
@@ -533,7 +533,7 @@ function(juce_add_module module_path)
 
     target_compile_definitions(${module_name} INTERFACE JUCE_MODULE_AVAILABLE_${module_name}=1)
 
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         target_compile_definitions(${module_name} INTERFACE LINUX=1)
     endif()
 
@@ -598,7 +598,7 @@ function(juce_add_module module_path)
         endforeach()
 
         _juce_link_libs_from_metadata("${module_name}" "${metadata_dict}" iOSLibs)
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         _juce_get_metadata("${metadata_dict}" linuxPackages module_linuxpackages)
 
         if(module_linuxpackages)
