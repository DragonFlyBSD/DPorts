XXX

--- src/ftdi.c.orig	2020-07-07 19:32:55 UTC
+++ src/ftdi.c
@@ -619,8 +619,11 @@ int ftdi_usb_open_dev(struct ftdi_contex
     }
     else if (ftdi->module_detach_mode == AUTO_DETACH_REATACH_SIO_MODULE)
     {
+#ifndef __DragonFly__
+	/* XXX */
         if (libusb_set_auto_detach_kernel_driver(ftdi->usb_dev, 1) != LIBUSB_SUCCESS)
             detach_errno = errno;
+#endif
     }
 
     if (libusb_get_configuration (ftdi->usb_dev, &cfg) < 0)
