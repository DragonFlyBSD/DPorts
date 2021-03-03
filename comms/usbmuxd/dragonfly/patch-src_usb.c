--- src/usb.c.intermediate	2021-03-03 06:12:17.000000000 +0000
+++ src/usb.c
@@ -794,8 +794,10 @@ static int usb_hotplug_cb(libusb_context
 int usb_init(void)
 {
 	int res;
+#ifndef __DragonFly__
 	const struct libusb_version* libusb_version_info = libusb_get_version();
 	usbmuxd_log(LL_NOTICE, "Using libusb %d.%d.%d", libusb_version_info->major, libusb_version_info->minor, libusb_version_info->micro);
+#endif
 
 	devlist_failures = 0;
 	device_polling = 1;
