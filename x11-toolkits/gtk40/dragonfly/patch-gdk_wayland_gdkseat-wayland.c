--- gdk/wayland/gdkseat-wayland.c.orig	2023-04-28 14:48:52.357892000 +0200
+++ gdk/wayland/gdkseat-wayland.c	2023-04-28 14:50:34.309499000 +0200
@@ -53,6 +53,12 @@
 #include <dev/evdev/input.h>
 #elif defined(HAVE_LINUX_INPUT_H)
 #include <linux/input.h>
+#elif defined(HAVE_DEV_MISC_EVDEV_INPUT_H)
+#include <dev/misc/evdev/input.h>
+#endif
+
+#if defined(HAVE_DEV_MISC_EVDEV_INPUT_EVENT_CODES_H)
+#include <dev/misc/evdev/input-event-codes.h>
 #endif
 
 /**
