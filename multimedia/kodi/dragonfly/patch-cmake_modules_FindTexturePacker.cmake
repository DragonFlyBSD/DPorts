--- cmake/modules/FindTexturePacker.cmake.orig	2022-03-02 18:38:51 UTC
+++ cmake/modules/FindTexturePacker.cmake
@@ -54,7 +54,7 @@ if(NOT TARGET TexturePacker::TexturePack
     endif()
 
     # Ship TexturePacker only on Linux and FreeBSD
-    if(CMAKE_SYSTEM_NAME STREQUAL "FreeBSD" OR CMAKE_SYSTEM_NAME STREQUAL "Linux")
+    if(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly" OR CMAKE_SYSTEM_NAME STREQUAL "Linux")
       set(INTERNAL_TEXTUREPACKER_INSTALLABLE TRUE)
     endif()
 
