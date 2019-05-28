--- third_party/sparsepp/sparsepp/spp_memory.h.orig	2018-02-07 02:03:54 UTC
+++ third_party/sparsepp/sparsepp/spp_memory.h
@@ -152,7 +152,11 @@ namespace spp
         int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, getpid() };
 
         sysctl(mib, sizeof(mib) / sizeof(*mib), &info, &infoLen, NULL, 0);
+#ifdef __DragonFly__
+        return static_cast<uint64_t>(info.kp_vm_rssize * getpagesize());
+#else
         return static_cast<uint64_t>(info.ki_rssize * getpagesize());
+#endif
 #else
         return 0;
 #endif
