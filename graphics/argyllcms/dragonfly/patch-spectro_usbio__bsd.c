--- spectro/usbio_bsd.c.orig
+++ spectro/usbio_bsd.c
@@ -44,7 +44,9 @@
 #include <fcntl.h>
 #include <glob.h>
 #include <sys/ioctl.h>
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__DragonFly__)
+# include <bus/u4b/usb_ioctl.h>		/* DragonFly's FreeBSD-derived USB stack */
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 # include <dev/usb/usb_ioctl.h>		/* Not sure what's going on with FreeBSD... */
 #else
 # include <dev/usb/usb.h>			/* The usual include for BSD */
