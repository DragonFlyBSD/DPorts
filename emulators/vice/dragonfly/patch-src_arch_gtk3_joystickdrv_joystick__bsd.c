--- src/arch/gtk3/joystickdrv/joystick_bsd.c.orig
+++ src/arch/gtk3/joystickdrv/joystick_bsd.c
@@ -69,6 +69,25 @@
 
 #endif  /* NETBSD_COMPILE */
 
+#ifdef DRAGONFLYBSD_COMPILE
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usb_ioctl.h>
+#include <bus/u4b/usbhid.h>
+
+#ifndef HUG_D_PAD_UP
+#define HUG_D_PAD_UP    0x0090
+#endif
+#ifndef HUG_D_PAD_DOWN
+#define HUG_D_PAD_DOWN  0x0091
+#endif
+#ifndef HUG_D_PAD_RIGHT
+#define HUG_D_PAD_RIGHT 0x0092
+#endif
+#ifndef HUG_D_PAD_LEFT
+#define HUG_D_PAD_LEFT  0x0093
+#endif
+#endif  /* DRAGONFLYBSD_COMPILE */
+
 #include "cmdline.h"
 #include "joystick.h"
 #include "keyboard.h"
