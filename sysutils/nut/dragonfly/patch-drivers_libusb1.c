--- drivers/libusb1.c.orig	Sun Nov  2 12:24:30 2025
+++ drivers/libusb1.c	Mon Nov
@@ -54,7 +54,19 @@ static void nut_libusb_close(libusb_device_handle *ude
  */
 void nut_usb_addvars(void)
 {
+#if defined(__DragonFly__) && __DragonFly_version < 600514
+	const struct libusb_version {
+		const uint16_t major;
+		const uint16_t minor;
+		const uint16_t micro;
+	} _v = {
+		.major = 1,
+		.minor = 0,
+		.micro = 0,
+	}, *v = &_v;
+#else
 	const struct libusb_version	*v = libusb_get_version();
+#endif
 
 	/* allow -x vendor=X, vendorid=X, product=X, productid=X, serial=X */
 	addvar(VAR_VALUE, "vendor", "Regular expression to match UPS Manufacturer string");
