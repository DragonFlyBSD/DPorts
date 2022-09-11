--- Source/WTF/wtf/PlatformGTK.cmake.orig	2020-08-12 09:17:54 UTC
+++ Source/WTF/wtf/PlatformGTK.cmake
@@ -50,7 +50,7 @@ if (CMAKE_SYSTEM_NAME MATCHES "Linux")
 
         unix/MemoryPressureHandlerUnix.cpp
     )
-elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
     list(APPEND WTF_SOURCES
         generic/MemoryFootprintGeneric.cpp
 
