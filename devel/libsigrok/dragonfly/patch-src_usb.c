--- src/usb.c.orig
+++ src/usb.c
@@ -479,18 +479,18 @@
  * have been opened with libusb_open().
  * This apparently also applies to some Mac OS X versions.
  */
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 	struct libusb_device_handle *devh;
 	if (libusb_open(dev, &devh) != 0)
 		return SR_ERR;
 #endif
 	n = libusb_get_port_numbers(dev, port_numbers, sizeof(port_numbers));
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 	libusb_close(devh);
 #endif
 
 /* Workaround FreeBSD / Mac OS X libusb_get_port_numbers() returning 0. */
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 	if (n == 0) {
 		port_numbers[0] = libusb_get_device_address(dev);
 		n = 1;
