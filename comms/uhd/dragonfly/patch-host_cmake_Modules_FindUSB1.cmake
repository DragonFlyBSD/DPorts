--- host/cmake/Modules/FindUSB1.cmake.orig	2016-10-17 17:15:00 UTC
+++ host/cmake/Modules/FindUSB1.cmake
@@ -23,7 +23,7 @@ FIND_PATH(LIBUSB_INCLUDE_DIRS
 set(libusb1_library_names usb-1.0 libusb-1.0)
 
 #libusb-1.0 compatible library on freebsd
-if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "kFreeBSD")
+if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
     list(APPEND libusb1_library_names usb)
 endif()
 
