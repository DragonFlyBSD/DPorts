--- src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c.orig	2026-01-23 01:38:48 UTC
+++ src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c
@@ -57,7 +57,10 @@
 #include <stdlib.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/user.h>
+#include <sys/sysctl.h>
+#ifdef __FreeBSD__
 #include <vm/vm_param.h>
 #endif
+#endif
@@ -261,7 +264,22 @@ Java_com_sun_management_internal_OperatingSystemImpl_getCommittedVirtualMemorySize0
         throw_internal_error(env, "task_info failed");
     }
     return t_info.virtual_size;
-#elif defined(__FreeBSD__)
+#elif defined(__DragonFly__)
+    {
+        struct kinfo_proc kp;
+        size_t len = sizeof(kp);
+        int mib[4];
+        mib[0] = CTL_KERN;
+        mib[1] = KERN_PROC;
+        mib[2] = KERN_PROC_PID;
+        mib[3] = getpid();
+        if (sysctl(mib, 4, &kp, &len, NULL, 0) == -1) {
+            throw_internal_error(env, "Cannot sysctl(kern.proc.pid)");
+            return -1;
+        }
+        return (jlong)kp.kp_vm_map_size;
+    }
+#elif defined(__FreeBSD__)
     int mib[4];
     struct kinfo_vmentry *kve;
     long total = 0;
@@ -381,7 +399,7 @@ Java_com_sun_management_internal_OperatingSystemImpl_getFreePhysicalMemorySize0
         return -1;
     }
     return (jlong)vm_stats.free_count * page_size;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     static const char *vm_stats[] = {
        "vm.stats.vm.v_free_count",
        "vm.stats.vm.v_cache_count",
@@ -390,7 +408,11 @@ Java_com_sun_management_internal_OperatingSystemImpl_getFreePhysicalMemorySize0
     };
     size_t size;
     jlong free_pages;
+#ifdef __DragonFly__
+    u_long i, npages;
+#else
     u_int i, npages;
+#endif
     for (i = 0, free_pages = 0, size = sizeof(npages); vm_stats[i] != NULL; i++) {
        if (sysctlbyname(vm_stats[i], &npages, &size, NULL, 0) == -1)
            return 0;
