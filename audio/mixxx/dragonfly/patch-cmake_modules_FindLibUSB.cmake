--- cmake/modules/FindLibUSB.cmake.intermediate	2021-12-19 18:53:22.000000000 +0000
+++ cmake/modules/FindLibUSB.cmake
@@ -57,7 +57,7 @@ find_path(LibUSB_INCLUDE_DIR
 mark_as_advanced(LibUSB_INCLUDE_DIR)
 
 find_library(LibUSB_LIBRARY
-if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
+if(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD|DragonFly")
   NAMES usb
 else
   NAMES usb-1.0
