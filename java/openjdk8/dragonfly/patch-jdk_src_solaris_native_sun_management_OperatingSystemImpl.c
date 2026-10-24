--- jdk/src/solaris/native/sun/management/OperatingSystemImpl.c.orig	2026-10-23 00:00:00 UTC
+++ jdk/src/solaris/native/sun/management/OperatingSystemImpl.c
@@ -60,6 +60,9 @@
 #include <sys/user.h>
 #include <vm/vm_param.h>
 #endif
+#ifdef __DragonFly__
+#include <vm/vm_param.h>
+#endif
 
 #if defined(_AIX)
 #include <libperfstat.h>
@@ -388,10 +391,10 @@
         return -1;
     }
     return (jlong)vm_stats.free_count * page_size;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     static const char *vm_stats[] = {
        "vm.stats.vm.v_free_count",
-#if __FreeBSD_version < 1200016
+#if defined(__DragonFly__) || __FreeBSD_version < 1200016
        "vm.stats.vm.v_cache_count",
 #endif
        /* "vm.stats.vm.v_inactive_count", */
@@ -399,7 +402,11 @@
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
