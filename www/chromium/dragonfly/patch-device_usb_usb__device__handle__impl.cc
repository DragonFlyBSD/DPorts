--- device/usb/usb_device_handle_impl.cc.intermediate	2014-12-16 03:49:08 UTC
+++ device/usb/usb_device_handle_impl.cc
@@ -111,18 +111,6 @@ static UsbTransferStatus ConvertTransfer
 
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
