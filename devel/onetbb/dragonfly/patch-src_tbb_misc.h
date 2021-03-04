--- src/tbb/misc.h.orig	2020-12-08 11:00:57 UTC
+++ src/tbb/misc.h
@@ -35,7 +35,7 @@
 #include <atomic>
 
 // Does the operating system have a system call to pin a thread to a set of OS processors?
-#define __TBB_OS_AFFINITY_SYSCALL_PRESENT ((__linux__ && !__ANDROID__) || (__FreeBSD_version >= 701000))
+#define __TBB_OS_AFFINITY_SYSCALL_PRESENT ((__linux__ && !__ANDROID__) || (__FreeBSD_version >= 701000) || (__DragonFly__))
 // On IBM* Blue Gene* CNK nodes, the affinity API has restrictions that prevent its usability for TBB,
 // and also sysconf(_SC_NPROCESSORS_ONLN) already takes process affinity into account.
 #define __TBB_USE_OS_AFFINITY_SYSCALL (__TBB_OS_AFFINITY_SYSCALL_PRESENT && !__bg__)
@@ -185,7 +185,7 @@ T1 atomic_update(std::atomic<T1>& dst, T
 }
 
 #if __TBB_USE_OS_AFFINITY_SYSCALL
-  #if __linux__
+  #if __linux__ || __DragonFly__
     typedef cpu_set_t basic_mask_t;
   #elif __FreeBSD_version >= 701000
     typedef cpuset_t basic_mask_t;
