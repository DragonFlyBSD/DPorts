--- cpucounters.cpp.orig	2016-10-03 20:32:05 UTC
+++ cpucounters.cpp
@@ -63,7 +63,7 @@
 
 #endif
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/module.h>
 #include <sys/types.h>
@@ -77,7 +77,7 @@
 #undef PCM_UNCORE_PMON_BOX_CHECK_STATUS // debug only
 
 // FreeBSD is much more restrictive about names for semaphores
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined (__DragonFly__)
 #define PCM_INSTANCE_LOCK_SEMAPHORE_NAME "/Intel_PCM_inst_lock"
 #define PCM_NUM_INSTANCES_SEMAPHORE_NAME "/Intel_num_PCM_inst"
 #else
@@ -805,17 +805,25 @@
     }
     fclose(f_cpuinfo);
 
-#elif defined(__FreeBSD__) 
+#elif defined(__FreeBSD__)  || defined(__DragonFly__)
 
     size_t size = sizeof(num_cores);
     cpuctl_cpuid_args_t cpuid_args_freebds;
     int fd;
 
+#if defined(__DragonFly__)
+    if(0 != sysctlbyname("hw.ncpu", &num_cores, &size, NULL, 0))
+    {
+        std::cerr << "Unable to get hw.ncpu from sysctl." << std::endl;
+        return false;
+    }
+#else
     if(0 != sysctlbyname("kern.smp.cpus", &num_cores, &size, NULL, 0))
     {
         std::cerr << "Unable to get kern.smp.cpus from sysctl." << std::endl;
         return false;
     }
+#endif
 
     if (modfind("cpuctl") == -1)
     {
@@ -1018,7 +1026,7 @@
 #elif defined(__linux__)
         std::cerr << "Try to execute 'modprobe msr' as root user and then" << std::endl;
         std::cerr << "you also must have read and write permissions for /dev/cpu/*/msr devices (/dev/msr* for Android). The 'chown' command can help." << std::endl;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
         std::cerr << "Ensure cpuctl module is loaded and that you have read and write" << std::endl;
         std::cerr << "permissions for /dev/cpuctl* devices (the 'chown' command can help)." << std::endl;
 #endif
