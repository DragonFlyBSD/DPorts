--- app/src/version.c.intermediate	2022-09-10 10:02:14 UTC
+++ app/src/version.c
@@ -59,9 +59,11 @@ scrcpy_print_version(void) {
 #endif
 
 #ifdef HAVE_USB
+#ifndef __DragonFly__
     const struct libusb_version *usb = libusb_get_version();
     // The compiled version may not be known
     printf(" - libusb: - / %u.%u.%u\n",
            (unsigned) usb->major, (unsigned) usb->minor, (unsigned) usb->micro);
 #endif
+#endif
 }
