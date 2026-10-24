--- cmake/QtPlatformSupport.cmake.intermediate	2026-09-11 11:33:21 UTC
+++ cmake/QtPlatformSupport.cmake
@@ -49,6 +49,12 @@ else()
     set(FREEBSD 0)
 endif()
 
+if(CMAKE_SYSTEM_NAME STREQUAL "DragonFly")
+    set(DRAGONFLY 1)
+else()
+    set(DRAGONFLY 0)
+endif()
+
 if(CMAKE_SYSTEM_NAME STREQUAL "NetBSD")
     set(NETBSD 1)
 else()
@@ -87,7 +93,7 @@ else()
     set(WEBOS 0)
 endif()
 
-if(APPLE OR OPENBSD OR FREEBSD OR NETBSD)
+if(APPLE OR OPENBSD OR FREEBSD OR NETBSD OR DRAGONFLY)
     set(BSD 1)
 else()
     set(BSD 0)
