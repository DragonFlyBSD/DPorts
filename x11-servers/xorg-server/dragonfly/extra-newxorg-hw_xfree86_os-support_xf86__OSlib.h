--- hw/xfree86/os-support/xf86_OSlib.h.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/os-support/xf86_OSlib.h
@@ -277,12 +277,7 @@ struct pcvtid {
 #include <dev/wscons/wsdisplay_usl_io.h>
 #endif                          /* WSCONS_SUPPORT */
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
-#if defined(__FreeBSD_kernel_version) && (__FreeBSD_kernel_version >= 500013)
 #include <sys/mouse.h>
-#else
-#undef MOUSE_GETINFO
-#include <machine/mouse.h>
-#endif
 #endif
     /* Include these definitions in case ioctl_pc.h didn't get included */
 #ifndef CONSOLE_X_MODE_ON
