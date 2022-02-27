--- cmake-proxies/cmake-modules/AudacityDependencies.cmake.orig	2021-12-22 15:35:36 UTC
+++ cmake-proxies/cmake-modules/AudacityDependencies.cmake
@@ -243,6 +243,11 @@ function ( _conan_install build_type )
         list( APPEND settings ENV "CONAN_CMAKE_SYSTEM_PROCESSOR=x86_64")
     endif()
 
+    if( CMAKE_SYSTEM_NAME MATCHES "DragonFly" )
+        list( APPEND settings "os=FreeBSD" )
+        list( APPEND settings "os_build=FreeBSD" )
+    endif()
+
     if (build_type MATCHES "MinSizeRel|RelWithDebInfo")
         message(STATUS "Release only libraries: ${CONAN_ONLY_DEBUG_RELEASE}")
 
