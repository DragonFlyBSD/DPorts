--- cmake/modules/LXQtCreatePkgConfigFile.cmake.orig	2018-05-21 17:06:51 UTC
+++ cmake/modules/LXQtCreatePkgConfigFile.cmake
@@ -233,7 +233,7 @@ function(lxqt_create_pkgconfig_file)
     if (DEFINED USER_INSTALL)
         # FreeBSD loves to install files to different locations
         # https://www.freebsd.org/doc/handbook/dirstructure.html
-        if(${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD")
+        if(${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD" OR ${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly")
             set(_PKGCONFIG_INSTALL_DESTINATION "libdata/pkgconfig")
         else()
             set(_PKGCONFIG_INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig")
