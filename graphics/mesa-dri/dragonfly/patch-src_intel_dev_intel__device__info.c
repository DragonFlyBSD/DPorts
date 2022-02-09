Workaround for SIGFPE on certain i915.ko combos.
Should not reach this, there is an explicit assert for this.

--- src/intel/dev/intel_device_info.c.intermediate	2022-02-09 09:26:55.000000000 +0000
+++ src/intel/dev/intel_device_info.c
@@ -1112,6 +1112,12 @@ update_from_topology(struct intel_device
    for (int b = 0; b < eu_mask_len; b++)
       n_eus += __builtin_popcount(devinfo->eu_masks[b]);
 
+#ifdef __DragonFly__
+   /* XXX avoid SIGFPE on divzero */
+   if (n_subslices == 0)
+   devinfo->num_eu_per_subslice = 0;
+   else
+#endif
    devinfo->num_eu_per_subslice = DIV_ROUND_UP(n_eus, n_subslices);
 }
 
