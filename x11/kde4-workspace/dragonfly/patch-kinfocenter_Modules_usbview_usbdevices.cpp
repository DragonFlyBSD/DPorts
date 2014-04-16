--- kinfocenter/Modules/usbview/usbdevices.cpp.orig	2014-03-27 20:10:07.000000000 +0000
+++ kinfocenter/Modules/usbview/usbdevices.cpp
@@ -355,6 +355,7 @@ void USBDevice::collectData( int fd, int
 	_speed = di.udi_lowspeed ? 1.5 : 12.0;
 #endif
 
+#if !defined(__DragonFly__) || __DragonFly_version < 300703
 	// Get all attached devicenodes
 	for ( int i = 0; i < USB_MAX_DEVNAMES; ++i )
 	if ( di.udi_devnames[i][0] )
@@ -383,6 +384,7 @@ void USBDevice::collectData( int fd, int
 			device->collectData( fd, level + 1, di2, di.udi_addr );
 		}
 	}
+#endif
 }
 
 bool USBDevice::parse(const QString &fname)
