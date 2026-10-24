--- src/hotspot/os/bsd/os_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -384,7 +384,7 @@
   pid_t pid = getpid();
   struct KINFO_PROC_T kp;
   size_t bufSize = sizeof kp;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   u_int namelen = 6;
   int mib[6] = {CTL_KERN, KERN_PROC_MIB, KERN_PROC_PID, pid,
                 static_cast<int>(bufSize), 1};
