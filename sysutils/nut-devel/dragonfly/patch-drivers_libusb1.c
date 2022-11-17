--- drivers/libusb1.c.orig	2022-11-16 12:13:14.225416000 +0100
+++ drivers/libusb1.c	2022-11-16 12:13:55.964500000 +0100
@@ -54,7 +54,9 @@
  */
 void nut_usb_addvars(void)
 {
+#ifndef __DragonFly__
 	const struct libusb_version	*v = libusb_get_version();
+#endif
 
 	/* allow -x vendor=X, vendorid=X, product=X, productid=X, serial=X */
 	addvar(VAR_VALUE, "vendor", "Regular expression to match UPS Manufacturer string");
@@ -68,11 +70,13 @@
 	addvar(VAR_VALUE, "device", "Regular expression to match USB device name");
 	addvar(VAR_VALUE, "usb_set_altinterface", "Force redundant call to usb_set_altinterface() (value=bAlternateSetting; default=0)");
 
+#ifndef __DragonFly__
 #ifdef LIBUSB_API_VERSION
 	dstate_setinfo("driver.version.usb", "libusb-%u.%u.%u (API: 0x%x)", v->major, v->minor, v->micro, LIBUSB_API_VERSION);
 #else  /* no LIBUSB_API_VERSION */
 	dstate_setinfo("driver.version.usb", "libusb-%u.%u.%u", v->major, v->minor, v->micro);
 #endif /* LIBUSB_API_VERSION */
+#endif
 }
 
 /* invoke matcher against device */
