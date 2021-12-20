--- cmake/modules/Findlibusb.cmake.orig	2021-04-24 22:24:02 UTC
+++ cmake/modules/Findlibusb.cmake
@@ -27,7 +27,7 @@ if (APPLE)
         message(FATAL_ERROR "No libusb library found on your system! Install libusb-1.0 from Homebrew or MacPorts")
     endif ()
 
-elseif (CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")              # FreeBSD; libusb is integrated into the system
+elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")              # FreeBSD; libusb is integrated into the system
     FIND_PATH(
         LIBUSB_INCLUDE_DIR NAMES libusb.h
         HINTS /usr/include
