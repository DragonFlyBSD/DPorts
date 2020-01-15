--- src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c.orig	2019-10-16 18:31:09 UTC
+++ src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c
@@ -57,7 +57,7 @@
 #include <stdlib.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <vm/vm_param.h>
 #endif
 
@@ -260,7 +260,7 @@ Java_com_sun_management_internal_Operati
         throw_internal_error(env, "task_info failed");
     }
     return t_info.virtual_size;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     FILE *fp;
     unsigned long end, start;
     jlong total = 0;
@@ -360,7 +360,7 @@ Java_com_sun_management_internal_Operati
         return -1;
     }
     return (jlong)vm_stats.free_count * page_size;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     static const char *vm_stats[] = {
        "vm.stats.vm.v_free_count",
        "vm.stats.vm.v_cache_count",
@@ -369,7 +369,11 @@ Java_com_sun_management_internal_Operati
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
