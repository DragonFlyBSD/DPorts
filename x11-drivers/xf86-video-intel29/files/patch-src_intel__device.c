--- src/intel_device.c.orig	2014-08-31 10:47:52 UTC
+++ src/intel_device.c
@@ -401,8 +401,8 @@ static int __intel_open_device__legacy(c
 		 pci->domain, pci->bus, pci->dev, pci->func);
 
 	ret = drmCheckModesettingSupported(id);
-	if (ret) {
-		if (xf86LoadKernelModule("i915"))
+	if (ret || 1) {
+		if (xf86LoadKernelModule("i915kms"))
 			ret = drmCheckModesettingSupported(id);
 		if (ret)
 			return -1;
