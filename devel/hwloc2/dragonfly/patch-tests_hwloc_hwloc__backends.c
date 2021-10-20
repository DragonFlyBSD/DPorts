--- tests/hwloc/hwloc_backends.c.orig	2020-11-23 14:37:17 UTC
+++ tests/hwloc/hwloc_backends.c
@@ -240,6 +240,10 @@ int main(void)
   err = hwloc_topology_set_components(topology1, HWLOC_TOPOLOGY_COMPONENTS_FLAG_BLACKLIST, "windows");
   assert(!err);
 #endif
+#ifdef HWLOC_DRAGONFLY_SYS
+  err = hwloc_topology_set_components(topology1, HWLOC_TOPOLOGY_COMPONENTS_FLAG_BLACKLIST, "dragonfly");
+  assert(!err);
+#endif
 #ifdef HWLOC_FREEBSD_SYS
   err = hwloc_topology_set_components(topology1, HWLOC_TOPOLOGY_COMPONENTS_FLAG_BLACKLIST, "freebsd");
   assert(!err);
