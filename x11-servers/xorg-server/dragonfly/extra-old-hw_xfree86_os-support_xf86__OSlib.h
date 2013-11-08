--- hw/xfree86/os-support/xf86_OSlib.h.orig	2010-04-21 02:00:27.000000000 +0000
+++ hw/xfree86/os-support/xf86_OSlib.h
@@ -342,7 +342,9 @@
 #    include <dev/wscons/wsconsio.h>
 #    include <dev/wscons/wsdisplay_usl_io.h>
 #   endif /* WSCONS_SUPPORT */
-#   if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
+#   if defined(__DragonFly__)
+#     include <sys/mouse.h>
+#   elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #    if defined(__FreeBSD_kernel_version) && (__FreeBSD_kernel_version >= 500013)
 #     include <sys/mouse.h>
 #    else
