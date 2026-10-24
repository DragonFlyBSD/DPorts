--- udev-device.c.orig
+++ udev-device.c
@@ -168,6 +168,16 @@
 	return (udev_list_entry_get_first(udev_device_get_tags_list(ud)));
 }

+LIBUDEV_EXPORT struct udev_list_entry *
+udev_device_get_current_tags_list_entry(struct udev_device *ud)
+{
+
+	TRC("(%p(%s))", ud, ud->syspath);
+	/* devd has no runtime "current" tag distinction; current tags are
+	 * the same as all tags. */
+	return (udev_list_entry_get_first(udev_device_get_tags_list(ud)));
+}
+
 LIBUDEV_EXPORT int
 udev_device_has_tag(struct udev_device *ud, const char *tag)
 {
