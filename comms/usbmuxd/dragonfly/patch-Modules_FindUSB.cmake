--- Modules/FindUSB.cmake.orig	2012-04-07 22:50:09.000000000 +0000
+++ Modules/FindUSB.cmake
@@ -10,7 +10,7 @@ include(LibFindMacros)
 # Dependencies
 
 # pkg-config + libusb fails on FreeBSD, though libusb is in base
-if(NOT(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD"))
+if(NOT(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD" OR ${CMAKE_SYSTEM_NAME} MATCHES "DragonFly"))
   # Use pkg-config to get hints about paths
   libfind_pkg_check_modules(USB_PKGCONF libusb-1.0>=1.0.3)
   # We want to look for libusb-1.0
