--- udev-utils.c.orig	2023-01-16 23:20:51 UTC
+++ udev-utils.c
@@ -843,7 +843,7 @@ create_drm_handler(struct udev_device *u

 	/* Get the hw.dri.<cardnum>.busid entry */
 	realpath(devpath, devbuf);
-	if (sscanf(devbuf, "/dev/drm/%d", &cardnum) != 1)
+	if (sscanf(devbuf, "/dev/dri/card%d", &cardnum) != 1)
 		return;

 	snprintf(buf, sizeof(buf), "hw.dri.%d.busid", cardnum);

