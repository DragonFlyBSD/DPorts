--- src/jtag/drivers/ft232r.c.orig	2020-12-09 19:43:09 UTC
+++ src/jtag/drivers/ft232r.c
@@ -265,9 +265,9 @@ static int ft232r_init(void)
 
 	if (ft232r_restore_bitmode == 0xFFFF) /* serial port will not be restored after jtag: */
 		libusb_detach_kernel_driver(adapter, 0);
-	else /* serial port will be restored after jtag: */
-		libusb_set_auto_detach_kernel_driver(adapter, 1); /* 1: DONT_DETACH_SIO_MODULE */
-
+	else { /* serial port will be restored after jtag: */
+		LOG_WARNING("libusb_set_auto_detach_kernel_driver not supported in DragonFly");
+	}
 	if (libusb_claim_interface(adapter, 0)) {
 		LOG_ERROR("unable to claim interface");
 		return ERROR_JTAG_INIT_FAILED;
