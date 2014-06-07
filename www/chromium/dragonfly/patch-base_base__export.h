--- base/base_export.h.orig	2013-12-04 20:54:55.000000000 +0000
+++ base/base_export.h
@@ -5,6 +5,16 @@
 #ifndef BASE_BASE_EXPORT_H_
 #define BASE_BASE_EXPORT_H_
 
+#ifdef __DragonFly__
+#define ki_pid    kp_pid
+#define ki_pgid   kp_pgid
+#define ki_ppid   kp_ppid
+#define ki_stat   kp_stat
+#define ki_size   kp_vm_map_size
+#define ki_rssize kp_vm_rssize
+#define ki_pctcpu kp_lwp.kl_pctcpu
+#endif
+
 #if defined(COMPONENT_BUILD)
 #if defined(WIN32)
 
