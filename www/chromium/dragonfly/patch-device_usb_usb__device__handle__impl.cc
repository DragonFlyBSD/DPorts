--- device/usb/usb_device_handle_impl.cc.intermediate	2015-04-30 14:25:59 UTC
+++ device/usb/usb_device_handle_impl.cc
@@ -2,6 +2,8 @@
 // Use of this source code is governed by a BSD-style license that can be
 // found in the LICENSE file.
 
+#define __STDC_LIMIT_MACROS
+#include <stdint.h>
 #include "device/usb/usb_device_handle_impl.h"
 
 #include <algorithm>
@@ -111,18 +113,6 @@ static UsbTransferStatus ConvertTransfer
 
 }  // namespace
 
-// Define for FreeBSD < 9.3, thanks to db@freebsd.org
-#if defined(OS_FREEBSD) && __FreeBSD_version < 903000
-int libusb_get_string_descriptor(libusb_device_handle *dev,
-  uint8_t descriptor_index, uint16_t lang_id, unsigned char* data, int length) {
-  return libusb_control_transfer(dev,
-    LIBUSB_ENDPOINT_IN | 0x0, /* Endpoint 0 IN */
-    LIBUSB_REQUEST_GET_DESCRIPTOR,
-    (LIBUSB_DT_STRING << 8) | descriptor_index,
-    lang_id, data, (uint16_t)length, 1000);
-}
-#endif
-
 class UsbDeviceHandleImpl::InterfaceClaimer
     : public base::RefCountedThreadSafe<UsbDeviceHandleImpl::InterfaceClaimer> {
  public:
