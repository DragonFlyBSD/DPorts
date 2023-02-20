--- cmake-proxies/cmake-modules/conan.cmake.orig	2022-12-27 11:53:35 UTC
+++ cmake-proxies/cmake-modules/conan.cmake
@@ -93,10 +93,13 @@ macro(_conan_check_system_name)
         if(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
             set(CONAN_SYSTEM_NAME Macos)
         endif()
+        if(${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly")
+            set(CONAN_SYSTEM_NAME FreeBSD)
+        endif()
         if(${CMAKE_SYSTEM_NAME} STREQUAL "QNX")
             set(CONAN_SYSTEM_NAME Neutrino)
         endif()
-        set(CONAN_SUPPORTED_PLATFORMS Windows Linux Macos Android iOS FreeBSD WindowsStore WindowsCE watchOS tvOS FreeBSD SunOS AIX Arduino Emscripten Neutrino)
+        set(CONAN_SUPPORTED_PLATFORMS Windows Linux Macos Android iOS FreeBSD WindowsStore WindowsCE watchOS tvOS FreeBSD SunOS AIX Arduino Emscripten Neutrino DragonFly)
         list (FIND CONAN_SUPPORTED_PLATFORMS "${CONAN_SYSTEM_NAME}" _index)
         if (${_index} GREATER -1)
             #check if the cmake system is a conan supported one
