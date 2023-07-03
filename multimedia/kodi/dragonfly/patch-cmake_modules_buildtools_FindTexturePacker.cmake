--- cmake/modules/buildtools/FindTexturePacker.cmake.orig	2023-03-11 22:16:38 UTC
+++ cmake/modules/buildtools/FindTexturePacker.cmake
@@ -53,7 +53,7 @@ if(NOT TARGET TexturePacker::TexturePack
     endif()
 
     # Ship TexturePacker only on Linux and FreeBSD
-    if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "Linux")
+    if(CMAKE_SYSTEM_NAME MATCHES "Linux|FreeBSD|DragonFly")
       # But skip shipping it if build architecture can be executed on host
       # and TEXTUREPACKER_EXECUTABLE is found
       if(NOT (HOST_CAN_EXECUTE_TARGET AND TEXTUREPACKER_EXECUTABLE))
