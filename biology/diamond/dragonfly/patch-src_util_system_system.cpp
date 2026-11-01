--- src/util/system/system.cpp.orig
+++ src/util/system/system.cpp
@@ -48,7 +48,7 @@
   #if defined(__APPLE__)
      #include <sys/sysctl.h>  // sysctlbyname (kern.maxfilesperproc)
   #endif
-  #ifdef __FreeBSD__
+  #if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/types.h>
     #include <sys/sysctl.h>
   #elif defined(HAVE_SYSINFO)
@@ -225,8 +225,12 @@
 }
 
 double total_ram() {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#ifdef __DragonFly__
+	int mib[2] = { CTL_HW, HW_PHYSMEM };
+#else
 	int mib[2] = { CTL_HW, HW_REALMEM };
+#endif
 	u_int namelen = sizeof(mib) / sizeof(mib[0]);
 	uint64_t oldp;
 	size_t oldlenp = sizeof(oldp);
