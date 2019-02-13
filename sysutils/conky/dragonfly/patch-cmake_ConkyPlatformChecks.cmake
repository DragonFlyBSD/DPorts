--- cmake/ConkyPlatformChecks.cmake.orig	2019-01-08 01:26:24 UTC
+++ cmake/ConkyPlatformChecks.cmake
@@ -66,7 +66,7 @@ endif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD
 
 if(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
   set(OS_DRAGONFLY true)
-  set(conky_libs ${conky_libs} -ldevstat)
+  set(conky_libs ${conky_libs} -lkvm -ldevstat -lintl -linotify)
 endif(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
 
 if(CMAKE_SYSTEM_NAME MATCHES "OpenBSD")
