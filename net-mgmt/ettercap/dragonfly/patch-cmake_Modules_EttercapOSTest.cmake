--- cmake/Modules/EttercapOSTest.cmake.orig	2015-03-14 15:43:11.000000000 +0200
+++ cmake/Modules/EttercapOSTest.cmake
@@ -1,6 +1,6 @@
 if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
     set(OS_LINUX 1)
-elseif(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD")
+elseif(${CMAKE_SYSTEM_NAME} MATCHES "FreeBSD|DragonFly")
     set(OS_BSD 1)
     set(OS_BSD_FREE 1)
 elseif(${CMAKE_SYSTEM_NAME} MATCHES "NetBSD")
