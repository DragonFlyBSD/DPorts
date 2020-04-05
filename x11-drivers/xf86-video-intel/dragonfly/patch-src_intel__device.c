--- src/intel_device.c.intermediate	2020-04-04 23:50:24 UTC
+++ src/intel_device.c
@@ -428,6 +428,11 @@ static int __intel_open_device__legacy(c
 		 "pci:%04x:%02x:%02x.%d",
 		 pci->domain, pci->bus, pci->dev, pci->func);
 
+#if defined(__DragonFly__)
+	/* assume modesetting for i915, allow multiple loads and no fbcon */
+	load_i915_kernel_module();
+#else
+
 	ret = drmCheckModesettingSupported(id);
 	if (ret) {
 		if (load_i915_kernel_module() == 0)
@@ -437,7 +442,7 @@ static int __intel_open_device__legacy(c
 		/* Be nice to the user and load fbcon too */
 		(void)xf86LoadKernelModule("fbcon");
 	}
-
+#endif
 	return fd_set_nonblock(drmOpen(NULL, id));
 }
 
