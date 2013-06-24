--- hw/xfree86/os-support/xf86_OSlib.h.orig	2010-04-21 04:00:27.000000000 +0200
+++ hw/xfree86/os-support/xf86_OSlib.h	2013-01-03 02:43:14.619328000 +0100
@@ -345,6 +345,8 @@
 #   if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #    if defined(__FreeBSD_kernel_version) && (__FreeBSD_kernel_version >= 500013)
 #     include <sys/mouse.h>
+#    elif defined(__DragonFly__)
+#     include <sys/mouse.h>
 #    else
 #     undef MOUSE_GETINFO
 #     include <machine/mouse.h>
