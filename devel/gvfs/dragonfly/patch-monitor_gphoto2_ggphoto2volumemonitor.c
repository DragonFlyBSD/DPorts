--- monitor/gphoto2/ggphoto2volumemonitor.c.orig	2012-05-15 18:01:50.000000000 +0000
+++ monitor/gphoto2/ggphoto2volumemonitor.c
@@ -787,7 +787,7 @@ update_cameras (GGPhoto2VolumeMonitor *m
       usb_bus_num = hal_device_get_property_int (d, "usb.bus_number");
 #if defined(__linux__)
       usb_device_num = hal_device_get_property_int (d, "usb.linux.device_number");
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__)
       usb_device_num = hal_device_get_property_int (d, "freebsd.unit");
 #else
 # error "Need OS specific tweaks"
