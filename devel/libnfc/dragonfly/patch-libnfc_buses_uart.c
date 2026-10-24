--- libnfc/buses/uart.c.orig
+++ libnfc/buses/uart.c
@@ -75,7 +75,7 @@
 
 #  if defined(__APPLE__)
 const char *serial_ports_device_radix[] = { "tty.SLAB_USBtoUART", "tty.usbserial", "tty.usbmodem", NULL };
-#  elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__FreeBSD_kernel__)
+#  elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__FreeBSD_kernel__) || defined (__DragonFly__)
 const char *serial_ports_device_radix[] = { "cuaU", "cuau", NULL };
 #  elif defined (__NetBSD__)
 const char *serial_ports_device_radix[] = { "tty0", "ttyC", "ttyS", "ttyU", "ttyY", NULL };
