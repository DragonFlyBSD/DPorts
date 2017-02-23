Needed due to removed patches from graphics/libdrm.
Sometimes fails to probe for given PCI:0:0:60 and leaves everything in funny
state: no /dev/dri/card0 (devq-lsdri also) thou kms console works.
It looks like reprobing should be done like this.

--- src/radeon_probe.c.orig	2016-10-05 09:40:47.000000000 +0300
+++ src/radeon_probe.c
@@ -50,7 +50,7 @@
 #include "xf86drmMode.h"
 #include "dri.h"
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <xf86_OSproc.h>
 #endif
 
@@ -96,7 +96,7 @@ static Bool radeon_kernel_mode_enabled(S
 
     busIdString = DRICreatePCIBusID(pci_dev);
     ret = drmCheckModesettingSupported(busIdString);
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     if (ret) {
       if (xf86LoadKernelModule("radeonkms"))
         ret = drmCheckModesettingSupported(busIdString);
