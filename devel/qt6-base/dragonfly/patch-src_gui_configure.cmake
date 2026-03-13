--- src/gui/configure.cmake.orig	2025-06-02 22:37:34.546401000 +0200
+++ src/gui/configure.cmake	2025-06-02 22:37:46.696596000 +0200
@@ -28,7 +28,7 @@ set_property(CACHE INPUT_libpng PROPERTY
 
 
 #### Libraries
-qt_set01(X11_SUPPORTED LINUX OR HPUX OR FREEBSD OR NETBSD OR OPENBSD OR SOLARIS OR
+qt_set01(X11_SUPPORTED LINUX OR HPUX OR DRAGONFLY OR FREEBSD OR NETBSD OR OPENBSD OR SOLARIS OR
     HURD)
 qt_find_package(ATSPI2 PROVIDED_TARGETS PkgConfig::ATSPI2 MODULE_NAME gui QMAKE_LIB atspi)
 qt_find_package(DirectFB PROVIDED_TARGETS PkgConfig::DirectFB MODULE_NAME gui QMAKE_LIB directfb)
@@ -372,6 +372,8 @@ qt_config_compile_test(evdev
     CODE
 "#if defined(__FreeBSD__)
 #  include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+# include <dev/misc/evdev/input.h>
 #elif defined(__VXWORKS__)
 #include <evdevLib.h>
 typedef EV_DEV_EVENT input_event;
