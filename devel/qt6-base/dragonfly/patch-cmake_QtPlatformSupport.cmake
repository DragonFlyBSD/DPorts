--- cmake/QtPlatformSupport.cmake.orig	2022-11-16 07:54:24 UTC
+++ cmake/QtPlatformSupport.cmake
@@ -14,7 +14,8 @@ qt_set01(INTEGRITY CMAKE_SYSTEM_NAME STR
 qt_set01(VXWORKS CMAKE_SYSTEM_NAME STREQUAL "VxWorks") # FIXME: How to identify this?
 qt_set01(QNX CMAKE_SYSTEM_NAME STREQUAL "QNX") # FIXME: How to identify this?
 qt_set01(OPENBSD CMAKE_SYSTEM_NAME STREQUAL "OpenBSD") # FIXME: How to identify this?
-qt_set01(FREEBSD CMAKE_SYSTEM_NAME STREQUAL "FreeBSD") # FIXME: How to identify this?
+qt_set01(FREEBSD CMAKE_SYSTEM_NAME MATCHES "FreeBSD") # FIXME: How to identify this?
+qt_set01(DRAGONFLY CMAKE_SYSTEM_NAME MATCHES "DragonFly") # FIXME: How to identify this?
 qt_set01(NETBSD CMAKE_SYSTEM_NAME STREQUAL "NetBSD") # FIXME: How to identify this?
 qt_set01(WASM CMAKE_SYSTEM_NAME STREQUAL "Emscripten" OR EMSCRIPTEN)
 qt_set01(SOLARIS CMAKE_SYSTEM_NAME STREQUAL "SunOS")
@@ -24,7 +25,7 @@ qt_set01(HURD CMAKE_SYSTEM_NAME STREQUAL
 # compile definition into its generated toolchain.cmake file
 qt_set01(WEBOS CMAKE_CXX_FLAGS MATCHES "-D__WEBOS__")
 
-qt_set01(BSD APPLE OR OPENBSD OR FREEBSD OR NETBSD)
+qt_set01(BSD APPLE OR OPENBSD OR FREEBSD OR NETBSD OR DRAGONFLY)
 
 qt_set01(IOS APPLE AND CMAKE_SYSTEM_NAME STREQUAL "iOS")
 qt_set01(TVOS APPLE AND CMAKE_SYSTEM_NAME STREQUAL "tvOS")
