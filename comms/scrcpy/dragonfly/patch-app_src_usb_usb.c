--- app/src/usb/usb.c.orig	2022-04-28 18:46:28 UTC
+++ app/src/usb/usb.c
@@ -282,11 +282,15 @@ run_libusb_event_handler(void *data) {
 
 static bool
 sc_usb_register_callback(struct sc_usb *usb) {
+#ifndef __DragonFly__
     if (!libusb_has_capability(LIBUSB_CAP_HAS_HOTPLUG)) {
+#endif
         LOGW("On this platform, libusb does not have hotplug capability; "
              "device disconnection will not be detected properly");
         return false;
+#ifndef __DragonFly__
     }
+#endif
 
     libusb_device *device = libusb_get_device(usb->handle);
     assert(device);
