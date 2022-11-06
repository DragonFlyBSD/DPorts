--- src/gui/configure.cmake.orig	2022-09-02 16:13:45 UTC
+++ src/gui/configure.cmake
@@ -342,6 +342,8 @@ qt_config_compile_test(evdev
     CODE
 "#if defined(__FreeBSD__)
 #  include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+#  include <dev/misc/evdev/input.h>
 #else
 #  include <linux/input.h>
 #  include <linux/kd.h>
