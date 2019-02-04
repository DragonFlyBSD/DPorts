--- xbmc/peripherals/bus/linux/PeripheralBusUSBLibUSB.cpp.orig	2018-08-04 15:08:36.325361000 +0200
+++ xbmc/peripherals/bus/linux/PeripheralBusUSBLibUSB.cpp	2018-08-04 15:08:49.245641000 +0200
@@ -51,7 +51,7 @@ bool CPeripheralBusUSB::PerformDeviceSca
                              dev->config[0].bNumInterfaces > 0 && dev->config[0].interface[0].num_altsetting > 0) ?
                                  GetType(dev->config[0].interface[0].altsetting[0].bInterfaceClass) :
                                  GetType(dev->descriptor.bDeviceClass);
-#ifdef TARGET_FREEBSD
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
       result.m_strLocation = StringUtils::Format("%s", dev->filename);
 #else
       result.m_strLocation = StringUtils::Format("/bus%s/dev%s", bus->dirname, dev->filename);
