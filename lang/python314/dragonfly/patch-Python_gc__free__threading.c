--- Python/gc_free_threading.c.orig	2026-08-05 10:29:49 UTC
+++ Python/gc_free_threading.c
@@ -35,6 +35,11 @@
     #include <unistd.h> // For sysconf, getpid
     #include <fcntl.h> // For O_RDONLY
     #include <limits.h> // For _POSIX2_LINE_MAX
+#elif defined(__DragonFly__)
+    #include <sys/types.h>
+    #include <sys/sysctl.h>
+    #include <sys/kinfo.h> // For struct kinfo_proc
+    #include <unistd.h> // For sysconf, getpid
 #elif defined(__OpenBSD__)
     #include <sys/types.h>
     #include <sys/sysctl.h>
@@ -2040,6 +2045,38 @@ get_process_mem_usage(void)
     kvm_close(kd);
     return rss_kb;
 
+#elif defined(__DragonFly__)
+    // NOTE: Returns RSS only. Per-process swap usage isn't readily available.
+    // DragonFly's struct kinfo_proc (sys/kinfo.h) carries kp_vm_rssize in
+    // resident pages, like OpenBSD's p_vm_rssize, so use the sysctl path
+    // rather than the FreeBSD libkvm path. mib is 4 elements here, not 6
+    // as on OpenBSD.
+    long page_size_kb_dfly = sysconf(_SC_PAGESIZE) / 1024;
+    if (page_size_kb_dfly <= 0) {
+        return -1;
+    }
+
+    struct kinfo_proc kp_dfly;
+    pid_t pid_dfly = getpid();
+    int mib_dfly[4];
+
+    mib_dfly[0] = CTL_KERN;
+    mib_dfly[1] = KERN_PROC;
+    mib_dfly[2] = KERN_PROC_PID;
+    mib_dfly[3] = pid_dfly;
+    size_t len_dfly = sizeof(kp_dfly);
+    if (sysctl(mib_dfly, 4, &kp_dfly, &len_dfly, NULL, 0) == -1) {
+         return -1;
+    }
+
+    if (len_dfly > 0) {
+        // kp_vm_rssize is in pages on DragonFly. Convert to KB.
+        return (Py_ssize_t)kp_dfly.kp_vm_rssize * page_size_kb_dfly;
+    }
+    else {
+        // Process info not returned
+        return -1;
+    }
 #elif defined(__OpenBSD__)
     // NOTE: Returns RSS only. Per-process swap usage isn't readily available
     long page_size_kb = sysconf(_SC_PAGESIZE) / 1024;
