--- os_freebsd.cpp.orig	2014-04-17 14:59:05.429462000 +0000
+++ os_freebsd.cpp
@@ -61,9 +61,16 @@
 #include <libusb20_desc.h>
 #include <libusb20.h>
 #elif defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version < 300703
 #include <bus/usb/usb.h>
 #include <bus/usb/usbhid.h>
 #else
+#define  DFU4B 1
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#endif
+#else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
 #endif
@@ -1307,6 +1314,12 @@ smart_device * freebsd_scsi_device::auto
   if (len < 36)
     return this;
 
+  if (m_camdev == NULL) {
+      close();
+      set_err(EINVAL, "m_camdev not set");
+      return this;
+  }
+
   // Use INQUIRY to detect type
 
   // 3ware ?
@@ -1673,7 +1686,7 @@ bool freebsd_smart_interface::scan_smart
 }
 
 
-#if (FREEBSDVER < 800000) // without this build fail on FreeBSD 8
+#if (FREEBSDVER < 800000) && !defined(DFU4B)
 static char done[USB_MAX_DEVICES];
 
 static int usbdevinfo(int f, int a, int rec, int busno, unsigned short & vendor_id,
@@ -1729,6 +1742,9 @@ static int usbdevinfo(int f, int a, int
 static int usbdevlist(int busno,unsigned short & vendor_id,
   unsigned short & product_id, unsigned short & version)
 {
+#ifdef DFU4B
+  return (0);
+#else
 #if (FREEBSDVER >= 800000) // libusb2 interface
   struct libusb20_device *pdev = NULL;
   struct libusb20_backend *pbe;
@@ -1805,6 +1821,7 @@ static int usbdevlist(int busno,unsigned
   }
   return 0;
 #endif
+#endif
 }
 
 smart_device * freebsd_smart_interface::autodetect_smart_device(const char * name)
