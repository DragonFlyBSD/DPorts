--- src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c.orig	2026-10-23 00:00:00 UTC
+++ src/jdk.management/unix/native/libmanagement_ext/OperatingSystemImpl.c
@@ -62,6 +62,10 @@
 #include <vm/vm_param.h>
 #endif
 
+#ifdef __DragonFly__
+#include <vm/vm_param.h>
+#endif
+
 #if defined(_AIX)
 #include <libperfstat.h>
 #endif
@@ -206,6 +210,25 @@
     }
     free(buf);
     return total;
+#elif defined(__DragonFly__)
+    FILE *fp;
+    unsigned long end, start;
+    jlong total = 0;
+
+    if ((fp = fopen("/proc/curproc/map", "r")) == NULL) {
+        throw_internal_error(env, "Unable to open /proc/curproc/map");
+        return -1;
+    }
+
+    for (;;) {
+       // Ignore everything except start and end entries
+       if (fscanf(fp, "0x%lx 0x%lx %*[^\n]\n", &start, &end) != 2 || start > end)
+           break;
+       total += end - start;
+    }
+
+    fclose(fp);
+    return total;
 #else /* _ALLBSD_SOURCE */
     /*
      * XXXBSD: there's no way available to do it in FreeBSD, AFAIK.
@@ -288,7 +311,7 @@
         return -1;
     }
     return (jlong)vm_stats.free_count * page_size;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     static const char *vm_stats[] = {
        "vm.stats.vm.v_free_count",
        "vm.stats.vm.v_cache_count",
@@ -297,7 +320,11 @@
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
