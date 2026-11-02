--- extras/Build/CMake/JUCEModuleSupport.cmake.orig
+++ extras/Build/CMake/JUCEModuleSupport.cmake
@@ -64,7 +64,7 @@
 
 if((CMAKE_SYSTEM_NAME STREQUAL "Windows")
    OR (CMAKE_SYSTEM_NAME STREQUAL "Linux")
-   OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+   OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
     # If you really need to override the detected arch for some reason,
     # you can configure the build with -DJUCE_TARGET_ARCHITECTURE=<custom arch>
     if(NOT DEFINED JUCE_TARGET_ARCHITECTURE)
@@ -281,7 +281,7 @@
 
     if(NOT CMAKE_SYSTEM_NAME STREQUAL "iOS" AND NOT CMAKE_SYSTEM_NAME STREQUAL "Android")
         list(APPEND result VST LV2)
-        if(NOT (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+        if(NOT (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
             list(APPEND result Unity VST3)
         endif()
     endif()
@@ -411,7 +411,7 @@
         _juce_add_library_path(${module_target} "${module_path}/libs/MacOSX")
     elseif(CMAKE_SYSTEM_NAME STREQUAL "iOS")
         _juce_add_library_path(${module_target} "${module_path}/libs/iOS")
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         _juce_add_library_path(${module_target} "${module_path}/libs/Linux/${JUCE_TARGET_ARCHITECTURE}")
     elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
         if(CMAKE_GENERATOR MATCHES "Visual Studio [0-9]+ (20[0-9]+)")
@@ -504,7 +504,7 @@
 
         target_link_libraries(juce_core INTERFACE juce::juce_atomic_wrapper)
 
-        if(CMAKE_SYSTEM_NAME MATCHES ".*BSD")
+        if(CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly")
             target_link_libraries(juce_core INTERFACE execinfo)
         elseif(CMAKE_SYSTEM_NAME STREQUAL "Android")
             target_sources(juce_core INTERFACE "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
@@ -555,7 +555,7 @@
 
     target_compile_definitions(${module_name} INTERFACE JUCE_MODULE_AVAILABLE_${module_name}=1)
 
-    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    if((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         target_compile_definitions(${module_name} INTERFACE LINUX=1)
     endif()
 
@@ -620,7 +620,7 @@
         endforeach()
 
         _juce_link_libs_from_metadata("${module_name}" "${metadata_dict}" iOSLibs)
-    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD"))
+    elseif((CMAKE_SYSTEM_NAME STREQUAL "Linux") OR (CMAKE_SYSTEM_NAME MATCHES ".*BSD|DragonFly"))
         _juce_get_metadata("${metadata_dict}" linuxPackages module_linuxpackages)
 
         if(module_linuxpackages)
