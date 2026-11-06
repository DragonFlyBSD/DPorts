--- cmake/FindOSS.cmake.orig	2026-11-05 11:03:28 UTC
+++ cmake/FindOSS.cmake
@@ -5,7 +5,7 @@
 if(UNIX)
   if(CMAKE_SYSTEM_NAME MATCHES "Linux")
     set(PLATFORM_PREFIX "linux/")
-  elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
+  elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
     set(PLATFORM_PREFIX "sys/")
   elseif(CMAKE_SYSTEM_NAME MATCHES "OpenBSD")
     set(PLATFORM_PREFIX "machine/")
