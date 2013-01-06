--- kcontrol/usbview/usbdevices.cpp.orig	2006-07-22 10:15:22.000000000 +0200
+++ kcontrol/usbview/usbdevices.cpp	2013-01-06 18:14:35.819441000 +0100
@@ -345,7 +345,8 @@
 	_channels     = di.udi_nports;
 	
 	// determine the speed
-#if __FreeBSD_version > 490102
+#if defined(__DragonFly__) || \
+   (defined(__FreeeBSD__) && __FreeBSD_version > 490102)
 	switch (di.udi_speed) {
 		case USB_SPEED_LOW:  _speed = 1.5;   break;
 		case USB_SPEED_FULL: _speed = 12.0;  break;
