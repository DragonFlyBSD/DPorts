--- src/gui/configure.cmake.orig	2026-05-07 07:50:01 UTC
+++ src/gui/configure.cmake
@@ -28,7 +28,7 @@ set_property(CACHE INPUT_libpng PROPERTY STRINGS undef
 
 
 #### Libraries
-if(LINUX OR HPUX OR FREEBSD OR NETBSD OR OPENBSD OR SOLARIS OR HURD)
+if(LINUX OR HPUX OR DRAGONFLY OR FREEBSD OR NETBSD OR OPENBSD OR SOLARIS OR HURD)
     set(X11_SUPPORTED 1)
 else()
     set(X11_SUPPORTED 0)
@@ -456,6 +456,8 @@ qt_config_compile_test(evdev
     CODE
 "#if defined(__FreeBSD__)
 #  include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+#  include <dev/misc/evdev/input.h>
 #else
 #  include <linux/input.h>
 #  include <linux/kd.h>
