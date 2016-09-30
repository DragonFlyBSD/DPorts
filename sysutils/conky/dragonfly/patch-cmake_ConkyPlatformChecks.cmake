--- cmake/ConkyPlatformChecks.cmake.orig	2016-09-30 17:34:10 UTC
+++ cmake/ConkyPlatformChecks.cmake
@@ -59,7 +59,7 @@ endif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD
 
 if(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
     set(OS_DRAGONFLY true)
-    set(conky_libs ${conky_libs} -ldevstat)
+    set(conky_libs ${conky_libs} -lkvm -ldevstat -lintl -linotify)
 endif(CMAKE_SYSTEM_NAME MATCHES "DragonFly")
 
 if(CMAKE_SYSTEM_NAME MATCHES "OpenBSD")
