--- cmake/QtPlatformSupport.cmake.orig	2022-09-02 16:13:45 UTC
+++ cmake/QtPlatformSupport.cmake
@@ -14,7 +14,7 @@ qt_set01(INTEGRITY CMAKE_SYSTEM_NAME STR
 qt_set01(VXWORKS CMAKE_SYSTEM_NAME STREQUAL "VxWorks") # FIXME: How to identify this?
 qt_set01(QNX CMAKE_SYSTEM_NAME STREQUAL "QNX") # FIXME: How to identify this?
 qt_set01(OPENBSD CMAKE_SYSTEM_NAME STREQUAL "OpenBSD") # FIXME: How to identify this?
-qt_set01(FREEBSD CMAKE_SYSTEM_NAME STREQUAL "FreeBSD") # FIXME: How to identify this?
+qt_set01(FREEBSD CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly") # FIXME: How to identify this?
 qt_set01(NETBSD CMAKE_SYSTEM_NAME STREQUAL "NetBSD") # FIXME: How to identify this?
 qt_set01(WASM CMAKE_SYSTEM_NAME STREQUAL "Emscripten" OR EMSCRIPTEN)
 qt_set01(SOLARIS CMAKE_SYSTEM_NAME STREQUAL "SunOS")
