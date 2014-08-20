--- src/intel_device.c.orig	2014-06-06 12:29:52.000000000 +0000
+++ src/intel_device.c
@@ -179,7 +179,7 @@ static int __intel_open_device(const str
 
 		ret = drmCheckModesettingSupported(id);
 		if (ret) {
-			if (xf86LoadKernelModule("i915"))
+			if (xf86LoadKernelModule("i915kms"))
 				ret = drmCheckModesettingSupported(id);
 			if (ret)
 				return -1;
