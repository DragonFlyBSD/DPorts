--- gdk/wayland/gdkdevice-wayland.c.intermediate	2019-02-27 12:19:54 UTC
+++ gdk/wayland/gdkdevice-wayland.c
@@ -45,6 +45,9 @@
 #elif defined(HAVE_LINUX_INPUT_H)
 #include <linux/input.h>
 #endif
+#ifdef __DragonFly__
+#include <dev/misc/evdev/input.h>
+#endif
 
 #define BUTTON_BASE (BTN_LEFT - 1) /* Used to translate to 1-indexed buttons */
 
