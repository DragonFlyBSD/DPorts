--- host/cmake/Modules/FindLIBUSB.cmake.intermediate	2020-11-16 15:36:29.000000000 +0000
+++ host/cmake/Modules/FindLIBUSB.cmake
@@ -23,7 +23,7 @@ find_path(LIBUSB_INCLUDE_DIRS
 set(libusb1_library_names usb-1.0 libusb-1.0)
 
 #libusb-1.0 compatible library on freebsd
-if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "kFreeBSD")
+if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "kFreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
     list(APPEND libusb1_library_names usb)
 endif()
 
