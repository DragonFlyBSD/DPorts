--- include/private/private.h.orig	2020-07-24 13:49:36.240480000 -0700
+++ include/private/private.h	2020-07-24 13:50:07.161857000 -0700
@@ -192,6 +192,10 @@
 extern void hwloc_set_netbsd_hooks(struct hwloc_binding_hooks *binding_hooks, struct hwloc_topology_support *support);
 #endif /* HWLOC_NETBSD_SYS */
 
+#ifdef HWLOC_DRAGONFLY_SYS
+extern void hwloc_set_dragonfly_hooks(struct hwloc_binding_hooks *binding_hooks, struct hwloc_topology_support *support);
+#endif /* HWLOC_DRAGONFLY_SYS */
+
 #ifdef HWLOC_HPUX_SYS
 extern void hwloc_set_hpux_hooks(struct hwloc_binding_hooks *binding_hooks, struct hwloc_topology_support *support);
 #endif /* HWLOC_HPUX_SYS */
