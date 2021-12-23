--- input/input_keymaps.c.orig	2021-07-25 05:58:25 UTC
+++ input/input_keymaps.c
@@ -54,6 +54,8 @@
 #if defined(__linux__)
 #include <linux/input.h>
 #include <linux/kd.h>
+#elif defined(__DragonFly__)
+#include <dev/misc/evdev/input.h>
 #elif defined(__FreeBSD__)
 #include <dev/evdev/input.h>
 #endif
