--- src/hotspot/os/bsd/os_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -152,6 +152,13 @@
 #define KI_RSS         ki_rssize
 #define KI_UID         ki_uid
 #define KI_PID         ki_pid
+#elif defined(__DragonFly__)
+#include <sys/user.h>
+#define KERN_PROC_MIB  KERN_PROC
+#define KINFO_PROC_T   kinfo_proc
+#define KI_RSS         kp_vm_rssize
+#define KI_UID         kp_uid
+#define KI_PID         kp_pid
 #elif defined(__NetBSD__)
 #define KERN_PROC_MIB  KERN_PROC2
 #define KINFO_PROC_T   kinfo_proc2
