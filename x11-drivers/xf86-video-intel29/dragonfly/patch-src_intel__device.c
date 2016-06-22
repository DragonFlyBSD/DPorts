Force i915.ko loading?

--- src/intel_device.c.orig	2016-04-02 11:03:57.000000000 +0300
+++ src/intel_device.c
@@ -425,7 +425,7 @@ static int __intel_open_device__legacy(c
 		 pci->domain, pci->bus, pci->dev, pci->func);
 
 	ret = drmCheckModesettingSupported(id);
-	if (ret) {
+	if (ret || 1) {
 		if (load_i915_kernel_module() == 0)
 			ret = drmCheckModesettingSupported(id);
 		if (ret)
