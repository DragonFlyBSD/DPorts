--- gdk/wayland/gdkdevice-wayland.c.orig	2020-12-02 22:21:55 UTC
+++ gdk/wayland/gdkdevice-wayland.c
@@ -42,6 +42,8 @@
 #include <sys/mman.h>
 #if defined(HAVE_DEV_EVDEV_INPUT_H)
 #include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+#include <dev/misc/evdev/input.h>
 #elif defined(HAVE_LINUX_INPUT_H)
 #include <linux/input.h>
 #endif
