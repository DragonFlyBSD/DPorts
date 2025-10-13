--- Source/WTF/wtf/PlatformGTK.cmake.orig	Mon Aug 19 06:28:38 2024
+++ Source/WTF/wtf/PlatformGTK.cmake	Mon Oct
@@ -57,7 +57,7 @@ if (CMAKE_SYSTEM_NAME MATCHES "Linux")
 
         unix/MemoryPressureHandlerUnix.cpp
     )
-elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
     list(APPEND WTF_SOURCES
         generic/MemoryFootprintGeneric.cpp
 
