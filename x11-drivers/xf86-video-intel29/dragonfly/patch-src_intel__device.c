i915 does not use hw.dri.0.busid
so simplify to basics.

--- src/intel_device.c.orig	2017-01-03 23:03:54.000000000 +0200
+++ src/intel_device.c
@@ -424,6 +424,10 @@ static int __intel_open_device__legacy(c
 		 "pci:%04x:%02x:%02x.%d",
 		 pci->domain, pci->bus, pci->dev, pci->func);
 
+#if defined(__DragonFly__)
+	/* assume modesetting for i915, allow multiple loads and no fbcon */
+	load_i915_kernel_module();
+#else
 	ret = drmCheckModesettingSupported(id);
 	if (ret) {
 		if (load_i915_kernel_module() == 0)
@@ -433,6 +437,7 @@ static int __intel_open_device__legacy(c
 		/* Be nice to the user and load fbcon too */
 		(void)xf86LoadKernelModule("fbcon");
 	}
+#endif
 
 	return fd_set_nonblock(drmOpen(NULL, id));
 }
