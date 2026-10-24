--- src/hotspot/os/bsd/os_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -1058,7 +1058,7 @@
 uid_t os::Bsd::get_process_uid(pid_t pid) {
   struct KINFO_PROC_T kp;
   size_t size = sizeof kp;
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
   u_int namelen = 4;
   int mib_kern[4] = {CTL_KERN, KERN_PROC_MIB, KERN_PROC_PID, pid};
 #else
