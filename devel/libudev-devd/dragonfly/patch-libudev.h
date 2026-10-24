--- libudev.h.orig
+++ libudev.h
@@ -78,6 +78,8 @@
     struct udev_device *udev_device);
 struct udev_list_entry * udev_device_get_tags_list_entry(
     struct udev_device *udev_device);
+struct udev_list_entry * udev_device_get_current_tags_list_entry(
+    struct udev_device *udev_device);
 int udev_device_has_tag(struct udev_device *udev_device, const char *tag);
 struct udev_list_entry * udev_device_get_devlinks_list_entry(
     struct udev_device *udev_device);
