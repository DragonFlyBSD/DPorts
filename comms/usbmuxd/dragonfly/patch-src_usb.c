--- src/usb.c.orig
+++ src/usb.c
@@ -1060,7 +1060,13 @@
 	collection_init(&device_list);
 
 #ifdef HAVE_LIBUSB_HOTPLUG_API
+#ifdef __DragonFly__
+	/* DragonFly's libusb has the hotplug API but no libusb_has_capability();
+	 * a failed registration below falls back to polling. */
+	if (1) {
+#else
 	if (libusb_has_capability(LIBUSB_CAP_HAS_HOTPLUG)) {
+#endif
 		usbmuxd_log(LL_INFO, "Registering for libusb hotplug events");
 		res = libusb_hotplug_register_callback(NULL, LIBUSB_HOTPLUG_EVENT_DEVICE_ARRIVED | LIBUSB_HOTPLUG_EVENT_DEVICE_LEFT, LIBUSB_HOTPLUG_ENUMERATE, VID_APPLE, LIBUSB_HOTPLUG_MATCH_ANY, 0, usb_hotplug_cb, NULL, &usb_hotplug_cb_handle);
 		if (res == LIBUSB_SUCCESS) {
