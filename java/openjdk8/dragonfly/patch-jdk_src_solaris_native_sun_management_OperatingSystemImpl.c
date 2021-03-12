--- jdk/src/solaris/native/sun/management/OperatingSystemImpl.c.orig	2021-01-20 00:41:17 UTC
+++ jdk/src/solaris/native/sun/management/OperatingSystemImpl.c
@@ -56,7 +56,7 @@
 #include <limits.h>
 #include <stdlib.h>
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <vm/vm_param.h>
 #endif
 
@@ -365,10 +365,10 @@ Java_sun_management_OperatingSystemImpl_
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
@@ -376,7 +376,11 @@ Java_sun_management_OperatingSystemImpl_
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
