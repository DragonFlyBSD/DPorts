--- os_freebsd.cpp.intermediate	2014-04-20 20:12:01.708094000 +0000
+++ os_freebsd.cpp
@@ -57,16 +57,26 @@
 #define FREEBSDVER __FreeBSD_kernel_version
 #endif
 
+#ifdef __DragonFly__
+#if __DragonFly_version < 300703
+#include <bus/usb/usb.h>
+#include <bus/usb/usbhid.h>
+#else
+#define  DFU4B 1
+#include <libusb20_desc.h>
+#include <libusb20.h>
+#include <bus/u4b/usb.h>
+#include <bus/u4b/usbhid.h>
+#endif
+#else
 #if (FREEBSDVER >= 800000)
 #include <libusb20_desc.h>
 #include <libusb20.h>
-#elif defined(__DragonFly__)
-#include <bus/usb/usb.h>
-#include <bus/usb/usbhid.h>
 #else
 #include <dev/usb/usb.h>
 #include <dev/usb/usbhid.h>
 #endif
+#endif
 
 #define CONTROLLER_3WARE_9000_CHAR      0x01
 #define CONTROLLER_3WARE_678K_CHAR      0x02
@@ -1307,6 +1317,12 @@ smart_device * freebsd_scsi_device::auto
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
@@ -1673,7 +1689,7 @@ bool freebsd_smart_interface::scan_smart
 }
 
 
-#if (FREEBSDVER < 800000) // without this build fail on FreeBSD 8
+#if (FREEBSDVER < 800000) && !defined(DFU4B)
 static char done[USB_MAX_DEVICES];
 
 static int usbdevinfo(int f, int a, int rec, int busno, unsigned short & vendor_id,
@@ -1729,7 +1745,7 @@ static int usbdevinfo(int f, int a, int
 static int usbdevlist(int busno,unsigned short & vendor_id,
   unsigned short & product_id, unsigned short & version)
 {
-#if (FREEBSDVER >= 800000) // libusb2 interface
+#if (FREEBSDVER >= 800000) || defined(DFU4B) // libusb2 interface
   struct libusb20_device *pdev = NULL;
   struct libusb20_backend *pbe;
   uint32_t matches = 0;
