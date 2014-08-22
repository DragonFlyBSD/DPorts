--- src/intel_device.c.orig	2014-06-06 12:29:52.000000000 +0000
+++ src/intel_device.c
@@ -159,8 +159,8 @@ static int __intel_open_device(const str
 			 pci->domain, pci->bus, pci->dev, pci->func);
 
 		ret = drmCheckModesettingSupported(id);
-		if (ret) {
-			if (xf86LoadKernelModule("i915"))
+		if (ret || 1) {
+			if (xf86LoadKernelModule("i915kms"))
 				ret = drmCheckModesettingSupported(id);
 			if (ret)
 				return -1;
