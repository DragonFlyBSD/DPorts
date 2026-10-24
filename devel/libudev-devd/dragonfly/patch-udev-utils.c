--- udev-utils.c.orig
+++ udev-utils.c
@@ -121,6 +121,7 @@
 		.subsystem = "drm",
 		.syspath = DEV_PATH_ROOT "/dri/card[0-9]*",
 		.symlink = DEV_PATH_ROOT "/drm/[0-9]*",
+		.devtype = "drm_minor",
 		.create_handler = create_drm_handler,
 	}, {
 		.subsystem = "net",
