--- hwloc/bind.c.orig	2020-11-23 14:37:17 UTC
+++ hwloc/bind.c
@@ -863,6 +863,10 @@ hwloc_set_native_binding_hooks(struct hw
     hwloc_set_darwin_hooks(hooks, support);
 #    endif /* HWLOC_DARWIN_SYS */
 
+#    ifdef HWLOC_DRAGONFLY_SYS
+    hwloc_set_dragonfly_hooks(hooks, support);
+#    endif /* HWLOC_DRAGONFLY_SYS */
+
 #    ifdef HWLOC_FREEBSD_SYS
     hwloc_set_freebsd_hooks(hooks, support);
 #    endif /* HWLOC_FREEBSD_SYS */
