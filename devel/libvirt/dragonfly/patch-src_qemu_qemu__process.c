--- src/qemu/qemu_process.c.orig	2021-09-27 22:10:19 UTC
+++ src/qemu/qemu_process.c
@@ -27,7 +27,7 @@
 #include <sys/stat.h>
 #if defined(__linux__)
 # include <linux/capability.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
 # include <sys/param.h>
 # include <sys/cpuset.h>
 #endif
@@ -9081,7 +9081,7 @@ qemuProcessQMPLaunch(qemuProcessQMP *pro
     if (proc->forceTCG)
         machine = "none,accel=tcg";
     else
-        machine = "none,accel=kvm:tcg";
+        machine = "none,accel=nvmm:kvm:tcg";
 
     VIR_DEBUG("Try to probe capabilities of '%s' via QMP, machine %s",
               proc->binary, machine);
