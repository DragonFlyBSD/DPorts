--- src/ck-device-udev.c.orig	2023-08-31 07:06:53 UTC
+++ src/ck-device-udev.c
@@ -60,7 +60,8 @@
 #include <libudev.h>
 #endif
 
-#ifdef HAVE_DEVATTR_H
+// Avoid conflict between devattr declarations and udevd's
+#if defined(HAVE_DEVATTR_H) && !defined(__DragonFly__)
 #include <devattr.h>
 #endif
 
@@ -189,7 +190,7 @@ ck_device_drm_drop_master (gint fd)
 {
         TRACE ();
 
-        return change_drm_master (fd, DRM_IOCTL_DROP_MASTER);
+        return -1; /* change_drm_master (fd, DRM_IOCTL_DROP_MASTER); */
 }
 
 
@@ -198,7 +199,7 @@ ck_device_drm_set_master (gint fd)
 {
         TRACE ();
 
-        return change_drm_master (fd, DRM_IOCTL_SET_MASTER);
+        return -1; /* change_drm_master (fd, DRM_IOCTL_SET_MASTER); */
 }
 
 
