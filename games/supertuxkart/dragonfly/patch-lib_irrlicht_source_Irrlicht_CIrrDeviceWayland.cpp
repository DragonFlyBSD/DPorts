--- lib/irrlicht/source/Irrlicht/CIrrDeviceWayland.cpp.orig	2019-04-20 16:40:13 UTC
+++ lib/irrlicht/source/Irrlicht/CIrrDeviceWayland.cpp
@@ -28,7 +28,9 @@
 #include <unistd.h>
 #include <time.h>
 
-#ifdef __FreeBSD__
+#if defined(__DragonFly__)
+#include <dev/misc/evdev/input.h>
+#elif defined(__FreeBSD__)
 #include <dev/evdev/input.h>
 #else
 #include <linux/input.h>
