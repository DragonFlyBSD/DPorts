--- gdk/wayland/gdkdevice-wayland.c.orig	2021-05-04 01:43:41 UTC
+++ gdk/wayland/gdkdevice-wayland.c
@@ -52,6 +52,8 @@
 #include <dev/evdev/input.h>
 #elif defined(HAVE_LINUX_INPUT_H)
 #include <linux/input.h>
+#elif defined(__DragonFly__)
+#include <dev/misc/evdev/input-event-codes.h>
 #endif
 
 /**
