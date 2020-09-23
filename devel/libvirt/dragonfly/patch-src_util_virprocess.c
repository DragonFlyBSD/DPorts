--- src/util/virprocess.c.orig	2020-09-01 07:09:12 UTC
+++ src/util/virprocess.c
@@ -446,8 +446,9 @@ int virProcessSetAffinity(pid_t pid, vir
     size_t i;
     int numcpus = 1024;
     size_t masklen;
-    cpu_set_t *mask;
 
+# ifdef CPU_ALLOC
+    /* New method dynamically allocates cpu mask, allowing unlimted cpus */
     VIR_DEBUG("Set process affinity on %lld", (long long)pid);
 
     /* Not only may the statically allocated cpu_set_t be too small,
@@ -484,6 +485,22 @@ int virProcessSetAffinity(pid_t pid, vir
         return -1;
     }
     CPU_FREE(mask);
+# else
+    /* Legacy method uses a fixed size cpu mask, only allows up to 1024 cpus */
+    cpu_set_t mask;
+
+    CPU_ZERO(&mask);
+    for (i = 0; i < virBitmapSize(map); i++) {
+        if (virBitmapIsBitSet(map, i))
+            CPU_SET(i, &mask);
+    }
+
+    if (sched_setaffinity(pid, sizeof(mask), &mask) < 0) {
+        virReportSystemError(errno,
+                             _("cannot set CPU affinity on process %d"), pid);
+        return -1;
+    }
+# endif
 
     return 0;
 }
@@ -492,11 +509,16 @@ virBitmapPtr
 virProcessGetAffinity(pid_t pid)
 {
     size_t i;
+# ifdef CPU_ALLOC
     cpu_set_t *mask;
+#else
+    cpu_set_t maskt;
+#endif
     size_t masklen;
     size_t ncpus;
     virBitmapPtr ret = NULL;
 
+# ifdef CPU_ALLOC
     /* 262144 cpus ought to be enough for anyone */
     ncpus = 1024 << 8;
     masklen = CPU_ALLOC_SIZE(ncpus);
@@ -508,8 +530,17 @@ virProcessGetAffinity(pid_t pid)
     }
 
     CPU_ZERO_S(masklen, mask);
+# else
+    ncpus = 256; /* XXX */
+    masklen = sizeof(maskt);
+    CPU_ZERO(&maskt);
+# endif
 
+# ifdef CPU_ALLOC
     if (sched_getaffinity(pid, masklen, mask) < 0) {
+# else
+    if (sched_getaffinity(pid, masklen, &maskt) < 0) {
+#endif
         virReportSystemError(errno,
                              _("cannot get CPU affinity of process %d"), pid);
         goto cleanup;
@@ -519,13 +550,20 @@ virProcessGetAffinity(pid_t pid)
           goto cleanup;
 
     for (i = 0; i < ncpus; i++) {
+# ifdef CPU_ALLOC
          /* coverity[overrun-local] */
         if (CPU_ISSET_S(i, masklen, mask))
             ignore_value(virBitmapSetBit(ret, i));
+# else
+        if (CPU_ISSET(i, &maskt))
+            ignore_value(virBitmapSetBit(ret, i));
+# endif
     }
 
  cleanup:
+# ifdef CPU_ALLOC
     CPU_FREE(mask);
+# endif
 
     return ret;
 }
@@ -1019,7 +1057,7 @@ int virProcessGetStartTime(pid_t pid,
 
     return 0;
 }
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) && ! defined __DragonFly__
 int virProcessGetStartTime(pid_t pid,
                            unsigned long long *timestamp)
 {
