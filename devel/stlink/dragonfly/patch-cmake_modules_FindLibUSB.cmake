--- cmake/modules/FindLibUSB.cmake.orig	2017-01-31 06:29:44 UTC
+++ cmake/modules/FindLibUSB.cmake
@@ -28,7 +28,7 @@ if(WIN32 OR CMAKE_VS_PLATFORM_NAME OR MI
 endif()
 
 # FreeBSD
-if (CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
+if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
 	FIND_PATH(LIBUSB_INCLUDE_DIR NAMES libusb.h
 	HINTS
 	/usr/include
@@ -50,7 +50,7 @@ elseif(MSYS OR MINGW)
 	set(LIBUSB_NAME usb-1.0)
 elseif(WIN32 OR CMAKE_VS_PLATFORM_NAME)
 	set(LIBUSB_NAME libusb-1.0.lib)
-elseif(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")
+elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
 	set(LIBUSB_NAME usb)
 else()
 	set(LIBUSB_NAME usb-1.0)
