--- gusb/gusb-bos-descriptor-private.h.orig	Mon Apr 22 14:16:24 2024
+++ gusb/gusb-bos-descriptor-private.h	Mon Oct
@@ -11,7 +11,23 @@
 #include <json-glib/json-glib.h>
 #include <libusb.h>
 
+#ifndef libusb_bos_dev_capability_descriptor
+typedef struct libusb_bos_dev_capability_descriptor {
+        uint8_t bLength;
+        uint8_t bDescriptorType;
+        uint8_t bDevCapabilityType;
+        uint8_t dev_capability_data[0];
+}       libusb_bos_dev_capability_descriptor __aligned(sizeof(void *));
+#endif
+
 G_BEGIN_DECLS
+
+/* XXX Not implemented in DragonFly yet */
+static inline int
+libusb_get_bos_descriptor(libusb_device_handle *handle,
+    struct libusb_bos_descriptor **bos) {
+	return LIBUSB_ERROR_NOT_SUPPORTED;
+}
 
 GUsbBosDescriptor *
 _g_usb_bos_descriptor_new(const struct libusb_bos_dev_capability_descriptor *bos_cap);
