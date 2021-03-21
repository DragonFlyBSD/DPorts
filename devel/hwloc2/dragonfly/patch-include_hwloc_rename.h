--- include/hwloc/rename.h.orig	2020-11-23 14:37:17 UTC
+++ include/hwloc/rename.h
@@ -722,6 +722,7 @@ extern "C" {
 #define hwloc_aix_component HWLOC_NAME(aix_component)
 #define hwloc_bgq_component HWLOC_NAME(bgq_component)
 #define hwloc_darwin_component HWLOC_NAME(darwin_component)
+#define hwloc_dragonfly_component HWLOC_NAME(dragonfly_component)
 #define hwloc_freebsd_component HWLOC_NAME(freebsd_component)
 #define hwloc_hpux_component HWLOC_NAME(hpux_component)
 #define hwloc_linux_component HWLOC_NAME(linux_component)
@@ -791,6 +792,7 @@ extern "C" {
 #define hwloc_set_aix_hooks HWLOC_NAME(set_aix_hooks)
 #define hwloc_set_windows_hooks HWLOC_NAME(set_windows_hooks)
 #define hwloc_set_darwin_hooks HWLOC_NAME(set_darwin_hooks)
+#define hwloc_set_dragonfly_hooks HWLOC_NAME(set_dragonfly_hooks)
 #define hwloc_set_freebsd_hooks HWLOC_NAME(set_freebsd_hooks)
 #define hwloc_set_netbsd_hooks HWLOC_NAME(set_netbsd_hooks)
 #define hwloc_set_hpux_hooks HWLOC_NAME(set_hpux_hooks)
