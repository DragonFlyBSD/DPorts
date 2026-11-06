--- cmake/ConkyPlatformChecks.cmake.orig	2026-06-02 12:21:16 UTC
+++ cmake/ConkyPlatformChecks.cmake
@@ -127,7 +127,7 @@ endif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
 
 if(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
   set(OS_DRAGONFLY true)
-  set(conky_libs ${conky_libs} -ldevstat)
+  set(conky_libs ${conky_libs} -ldevstat -linotify)
 else(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
   set(OS_DRAGONFLY false)
 endif(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
