--- include/hwloc/rename.h.orig	2020-07-24 11:17:13.725255000 -0700
+++ include/hwloc/rename.h	2020-07-24 11:18:02.627493000 -0700
@@ -579,6 +579,7 @@
 #define hwloc_hpux_component HWLOC_NAME(hpux_component)
 #define hwloc_linux_component HWLOC_NAME(linux_component)
 #define hwloc_netbsd_component HWLOC_NAME(netbsd_component)
+#define hwloc_dragonfly_component HWLOC_NAME(dragonfly_component)
 #define hwloc_noos_component HWLOC_NAME(noos_component)
 #define hwloc_osf_component HWLOC_NAME(osf_component)
 #define hwloc_solaris_component HWLOC_NAME(solaris_component)
@@ -638,6 +639,7 @@
 #define hwloc_set_darwin_hooks HWLOC_NAME(set_darwin_hooks)
 #define hwloc_set_freebsd_hooks HWLOC_NAME(set_freebsd_hooks)
 #define hwloc_set_netbsd_hooks HWLOC_NAME(set_netbsd_hooks)
+#define hwloc_set_dragonfly_hooks HWLOC_NAME(set_dragonfly_hooks)
 #define hwloc_set_hpux_hooks HWLOC_NAME(set_hpux_hooks)
 
 #define hwloc_look_hardwired_fujitsu_k HWLOC_NAME(look_hardwired_fujitsu_k)
