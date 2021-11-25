--- src/jtag/drivers/xds110.c.orig	2020-12-09 19:43:09 UTC
+++ src/jtag/drivers/xds110.c
@@ -420,7 +420,7 @@ static bool usb_connect(void)
 		xds110.dev = dev;
 
 		/* Set libusb to auto detach kernel */
-		(void)libusb_set_auto_detach_kernel_driver(dev, 1);
+		LOG_WARNING("libusb_set_auto_detach_kernel_driver not supported in DragonFly");
 
 		/* Claim the debug interface on the XDS110 */
 		result = libusb_claim_interface(dev, xds110.interface);
