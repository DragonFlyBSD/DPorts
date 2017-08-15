--- src/ck-device-udev.c.orig	2017-06-02 01:31:44 UTC
+++ src/ck-device-udev.c
@@ -189,7 +189,7 @@ ck_device_drm_drop_master (gint fd)
 {
         TRACE ();
 
-        return change_drm_master (fd, DRM_IOCTL_DROP_MASTER);
+        return -1; /* change_drm_master (fd, DRM_IOCTL_DROP_MASTER); */
 }
 
 
@@ -198,7 +198,7 @@ ck_device_drm_set_master (gint fd)
 {
         TRACE ();
 
-        return change_drm_master (fd, DRM_IOCTL_SET_MASTER);
+        return -1; /* change_drm_master (fd, DRM_IOCTL_SET_MASTER); */
 }
 
 
