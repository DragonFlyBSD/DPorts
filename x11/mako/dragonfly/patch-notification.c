--- notification.c.orig	2020-01-12 02:44:08 UTC
+++ notification.c
@@ -7,6 +7,8 @@
 #include <wayland-client.h>
 #ifdef __linux__
 #include <linux/input-event-codes.h>
+#elif __DragonFly__
+#include <dev/misc/evdev/input-event-codes.h>
 #elif __FreeBSD__
 #include <dev/evdev/input-event-codes.h>
 #endif
