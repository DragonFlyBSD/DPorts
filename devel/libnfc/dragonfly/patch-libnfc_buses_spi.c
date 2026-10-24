--- libnfc/buses/spi.c.orig
+++ libnfc/buses/spi.c
@@ -60,7 +60,7 @@
 
 #  if defined(__APPLE__)
 const char *spi_ports_device_radix[] = { "spidev", NULL };
-#  elif defined (__FreeBSD__) || defined (__OpenBSD__)
+#  elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
 const char *spi_ports_device_radix[] = { "spidev", NULL };
 #  elif defined (__linux__)
 const char *spi_ports_device_radix[] = { "spidev", NULL };
