--- cmake/modules/DefinePlatformDefaults.cmake.orig	Tue Apr 23 18:39:56 2024
+++ cmake/modules/DefinePlatformDefaults.cmake	Fri Mar
@@ -13,6 +13,11 @@ if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
     set(BSD TRUE)
 endif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
 
+if (CMAKE_SYSTEM_NAME MATCHES "DragonFly")
+    set(DRAGONFLY TRUE)
+    set(BSD TRUE)
+endif (CMAKE_SYSTEM_NAME MATCHES "DragonFly")
+
 if (CMAKE_SYSTEM_NAME MATCHES "OpenBSD")
     set(OPENBSD TRUE)
     set(BSD TRUE)
