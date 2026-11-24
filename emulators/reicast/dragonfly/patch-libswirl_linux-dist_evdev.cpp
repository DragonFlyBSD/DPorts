--- libswirl/linux-dist/evdev.cpp.orig
+++ libswirl/linux-dist/evdev.cpp
@@ -10,6 +10,8 @@
 #include <fcntl.h>
 #if defined(__FreeBSD__)
 #include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+#include <dev/misc/evdev/input.h>
 #else
 #include <linux/input.h>
 #endif
