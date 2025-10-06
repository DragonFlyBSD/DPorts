--- gusb/gusb-device.c.orig	Mon Apr 22 14:16:24 2024
+++ gusb/gusb-device.c	Mon Oct
@@ -1331,11 +1331,13 @@ g_usb_device_get_bos_descriptors(GUsbDevice *self, GEr
 		rc = libusb_get_bos_descriptor(priv->handle, &bos);
 		if (!g_usb_device_libusb_error_to_gerror(self, rc, error))
 			return NULL;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		num_device_caps = bos->bNumDeviceCapabilities;
 #else
 		num_device_caps = bos->bNumDeviceCaps;
 #endif
+
+#ifndef __DragonFly__
 		for (guint i = 0; i < num_device_caps; i++) {
 			GUsbBosDescriptor *bos_descriptor = NULL;
 			struct libusb_bos_dev_capability_descriptor *bos_cap =
@@ -1343,8 +1345,11 @@ g_usb_device_get_bos_descriptors(GUsbDevice *self, GEr
 			bos_descriptor = _g_usb_bos_descriptor_new(bos_cap);
 			g_ptr_array_add(priv->bos_descriptors, bos_descriptor);
 		}
-		libusb_free_bos_descriptor(bos);
 		priv->bos_descriptors_valid = TRUE;
+#else
+		priv->bos_descriptors_valid = FALSE;
+#endif
+		libusb_free_bos_descriptor(bos);
 	}
 
 	/* success */
