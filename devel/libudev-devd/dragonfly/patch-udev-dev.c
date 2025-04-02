--- udev-dev.c.orig	Fri Sep 20 07:46:46 2024
+++ udev-dev.c	Wed Apr
@@ -626,7 +626,7 @@ create_drm_handler(struct udev_device *ud)
 
 	/* Get the hw.dri.<cardnum>.busid entry */
 	realpath(devpath, devbuf);
-	if (sscanf(devbuf, "/dev/drm/%d", &cardnum) != 1)
+	if (sscanf(devbuf, "/dev/dri/card%d", &cardnum) != 1)
 		return;
 
 	snprintf(buf, sizeof(buf), "hw.dri.%d.busid", cardnum);
