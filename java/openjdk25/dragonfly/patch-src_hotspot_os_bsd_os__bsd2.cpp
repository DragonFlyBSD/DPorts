--- src/hotspot/os/bsd/os_bsd.cpp.orig	2026-04-22 18:05:58 UTC
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -137,9 +137,14 @@
     #define _MACHINE_CPUFUNC_H_
   #endif
 #include <sys/user.h>
 #define KERN_PROC_MIB  KERN_PROC
 #define KINFO_PROC_T   kinfo_proc
 #define KI_RSS         ki_rssize
+#elif defined(__DragonFly__)
+#include <sys/user.h>
+#define KERN_PROC_MIB  KERN_PROC
+#define KINFO_PROC_T   kinfo_proc
+#define KI_RSS         kp_vm_rssize
 #elif defined(__NetBSD__)
 #define KERN_PROC_MIB  KERN_PROC2
 #define KINFO_PROC_T   kinfo_proc2
