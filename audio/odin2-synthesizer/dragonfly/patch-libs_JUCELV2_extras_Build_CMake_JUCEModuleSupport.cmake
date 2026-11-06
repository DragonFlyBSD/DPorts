--- libs/JUCELV2/extras/Build/CMake/JUCEModuleSupport.cmake.orig	2026-11-06 08:49:14 UTC
+++ libs/JUCELV2/extras/Build/CMake/JUCEModuleSupport.cmake
@@ -53,7 +53,7 @@ function(_juce_find_target_architecture result)
     set("${result}" "${match_result}" PARENT_SCOPE)
 endfunction()
 
-if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD") OR MSYS OR MINGW)
+if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly") OR MSYS OR MINGW)
     # If you really need to override the detected arch for some reason,
     # you can configure the build with -DJUCE_TARGET_ARCHITECTURE=<custom arch>
     if(NOT DEFINED JUCE_TARGET_ARCHITECTURE)
@@ -371,7 +371,7 @@ function(_juce_add_module_staticlib_paths module_targe
         _juce_add_library_path(${module_target} "${module_path}/libs/MacOSX")
     elseif(CMAKE_SYSTEM_NAME STREQUAL "iOS")
         _juce_add_library_path(${module_target} "${module_path}/libs/iOS")
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         _juce_add_library_path(${module_target} "${module_path}/libs/Linux/${JUCE_TARGET_ARCHITECTURE}")
     elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
         if(CMAKE_GENERATOR MATCHES "Visual Studio [0-9]+ (20[0-9]+)")
@@ -464,7 +464,7 @@ function(juce_add_module module_path)
 
         target_link_libraries(juce_core INTERFACE juce::juce_atomic_wrapper)
 
-        if(CMAKE_SYSTEM_NAME MATCHES ".*BSD")
+        if(CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly")
             target_link_libraries(juce_core INTERFACE execinfo)
         elseif(CMAKE_SYSTEM_NAME STREQUAL "Android")
             target_sources(juce_core INTERFACE "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
@@ -493,7 +493,7 @@ function(juce_add_module module_path)
 
     target_compile_definitions(${module_name} INTERFACE JUCE_MODULE_AVAILABLE_${module_name}=1)
 
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         target_compile_definitions(${module_name} INTERFACE LINUX=1)
     endif()
 
@@ -550,7 +550,7 @@ function(juce_add_module module_path)
         endforeach()
 
         _juce_link_libs_from_metadata("${module_name}" "${metadata_dict}" iOSLibs)
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         _juce_get_metadata("${metadata_dict}" linuxPackages module_linuxpackages)
 
         if(module_linuxpackages)
