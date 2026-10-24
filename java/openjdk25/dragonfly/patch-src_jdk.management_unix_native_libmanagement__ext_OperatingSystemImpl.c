--- src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c.orig
+++ src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c
@@ -57,7 +57,7 @@
 #include <stdlib.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <vm/vm_param.h>
 #endif
 
@@ -240,7 +240,7 @@
         return -1;
     }
     return (jlong)vm_stats.free_count * page_size;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     static const char *vm_stats[] = {
        "vm.stats.vm.v_free_count",
        "vm.stats.vm.v_cache_count",
@@ -249,7 +249,11 @@
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
