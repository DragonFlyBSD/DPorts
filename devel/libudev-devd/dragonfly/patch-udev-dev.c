--- udev-dev.c.orig
+++ udev-dev.c
@@ -600,6 +600,10 @@
 #endif

 	udev_list_insert(udev_device_get_properties_list(ud), "HOTPLUG", "1");
+	/* Linux udev exposes DEVTYPE=drm_minor for card/render nodes; GNOME
+	 * mutter filters GPUs on this property. */
+	udev_list_insert(udev_device_get_properties_list(ud), "DEVTYPE",
+	    "drm_minor");
 	devpath = udev_device_get_devnode(ud);
 	if (devpath == NULL)
 		return;
@@ -626,7 +630,7 @@

 	/* Get the hw.dri.<cardnum>.busid entry */
 	realpath(devpath, devbuf);
-	if (sscanf(devbuf, "/dev/drm/%d", &cardnum) != 1)
+	if (sscanf(devbuf, "/dev/dri/card%d", &cardnum) != 1)
 		return;

 	snprintf(buf, sizeof(buf), "hw.dri.%d.busid", cardnum);
