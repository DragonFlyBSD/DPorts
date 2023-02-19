--- src/gui/configure.cmake.orig	2022-11-16 07:54:24 UTC
+++ src/gui/configure.cmake
@@ -25,7 +25,7 @@ set_property(CACHE INPUT_libpng PROPERTY
 
 
 #### Libraries
-qt_set01(X11_SUPPORTED LINUX OR HPUX OR FREEBSD OR NETBSD OR OPENBSD OR SOLARIS OR HURD) # special case
+qt_set01(X11_SUPPORTED LINUX OR HPUX OR FREEBSD OR DRAGONFLY OR NETBSD OR OPENBSD OR SOLARIS OR HURD) # special case
 qt_find_package(ATSPI2 PROVIDED_TARGETS PkgConfig::ATSPI2 MODULE_NAME gui QMAKE_LIB atspi)
 qt_find_package(DirectFB PROVIDED_TARGETS PkgConfig::DirectFB MODULE_NAME gui QMAKE_LIB directfb)
 qt_find_package(Libdrm PROVIDED_TARGETS Libdrm::Libdrm MODULE_NAME gui QMAKE_LIB drm)
@@ -342,6 +342,8 @@ qt_config_compile_test(evdev
     CODE
 "#if defined(__FreeBSD__)
 #  include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+#  include <dev/misc/evdev/input.h>
 #else
 #  include <linux/input.h>
 #  include <linux/kd.h>
