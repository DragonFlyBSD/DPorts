--- glfw/wl_init.c.orig	2021-08-17 06:07:24 UTC
+++ glfw/wl_init.c
@@ -46,6 +46,8 @@
 #ifdef __has_include
 #if __has_include(<linux/input.h>)
 #include <linux/input.h>
+#elif __has_include(<dev/misc/evdev/input.h>)
+#include <dev/misc/evdev/input.h>
 #elif __has_include(<dev/evdev/input.h>)
 #include <dev/evdev/input.h>
 #endif
