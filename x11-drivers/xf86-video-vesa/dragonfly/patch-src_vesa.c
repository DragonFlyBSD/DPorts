--- src/vesa.c.orig	2024-07-11 09:29:26 UTC
+++ src/vesa.c
@@ -464,7 +464,7 @@ VESAPciProbe(DriverPtr drv, int entity_n
     if (pScrn != NULL) {
 	VESAPtr pVesa;
 
-#ifndef __FreeBSD__
+#ifndef __DragonFly__
 	if (pci_device_has_kernel_driver(dev)) {
 	    ErrorF("vesa: Ignoring device with a bound kernel driver\n");
 	    return FALSE;
