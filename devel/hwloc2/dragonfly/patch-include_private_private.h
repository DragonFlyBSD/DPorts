--- include/private/private.h.orig	2020-11-23 14:37:17 UTC
+++ include/private/private.h
@@ -350,6 +350,10 @@ extern void hwloc_set_windows_hooks(stru
 extern void hwloc_set_darwin_hooks(struct hwloc_binding_hooks *binding_hooks, struct hwloc_topology_support *support);
 #endif /* HWLOC_DARWIN_SYS */
 
+#ifdef HWLOC_DRAGONFLY_SYS
+extern void hwloc_set_dragonfly_hooks(struct hwloc_binding_hooks *binding_hooks, struct hwloc_topology_support *support);
+#endif /* HWLOC_DRAGONFLY_SYS */
+
 #ifdef HWLOC_FREEBSD_SYS
 extern void hwloc_set_freebsd_hooks(struct hwloc_binding_hooks *binding_hooks, struct hwloc_topology_support *support);
 #endif /* HWLOC_FREEBSD_SYS */
