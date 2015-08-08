--- spectro/usbio_bsd.c.orig	2014-01-31 04:08:58 UTC
+++ spectro/usbio_bsd.c
@@ -37,7 +37,9 @@
 #include <fcntl.h>
 #include <glob.h>
 #include <sys/ioctl.h>
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__)
+# include <bus/u4b/usb_ioctl.h>
+#elif defined(__FreeBSD__)
 # include <dev/usb/usb_ioctl.h>		/* Not sure what's going on with FreeBSD... */
 #else
 # include <dev/usb/usb.h>			/* The usual include for BSD */
