--- src/hotspot/os/bsd/os_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -140,6 +140,11 @@
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
