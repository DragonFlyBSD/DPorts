--- cmake/modules/Findlibusb.cmake.orig
+++ cmake/modules/Findlibusb.cmake
@@ -10,7 +10,7 @@
 
 include(FindPackageHandleStandardArgs)
 
-if (CMAKE_SYSTEM_NAME STREQUAL "FreeBSD")                  # FreeBSD; libusb is integrated into the system
+if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")            # FreeBSD; libusb is integrated into the system
     FIND_PATH(
         LIBUSB_INCLUDE_DIR NAMES libusb.h
         HINTS /usr/include
