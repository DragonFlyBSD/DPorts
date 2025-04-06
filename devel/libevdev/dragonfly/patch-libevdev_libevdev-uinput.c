--- libevdev/libevdev-uinput.c.orig	Fri May 31 05:24:44 2024
+++ libevdev/libevdev-uinput.c	Sun Apr
@@ -163,7 +163,7 @@ libevdev_uinput_get_fd(const struct libevdev_uinput *u
 	return uinput_dev->fd;
 }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /*
  * FreeBSD does not have anything similar to sysfs.
  * Set libevdev_uinput->syspath to NULL unconditionally.
