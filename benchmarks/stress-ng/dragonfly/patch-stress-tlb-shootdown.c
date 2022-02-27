--- stress-tlb-shootdown.c.intermediate	2022-01-31 03:24:15.000000000 +0000
+++ stress-tlb-shootdown.c
@@ -64,11 +64,7 @@ static int stress_tlb_shootdown(const st
 		const int32_t max_cpus = stress_get_processors_configured();
 
 		CPU_ZERO(&proc_mask);
-#ifdef CPU_ALLOC
 		CPU_OR(&proc_mask, &proc_mask_initial, &proc_mask);
-#else
-		CPU_OR(&proc_mask, &proc_mask_initial);
-#endif
 
 		tlb_procs = max_cpus;
 		if (tlb_procs > MAX_TLB_PROCS)
