--- src/bind.c.orig	2020-07-24 11:26:28.090629000 -0700
+++ src/bind.c	2020-07-24 11:26:30.130722000 -0700
@@ -827,6 +827,10 @@
     hwloc_set_netbsd_hooks(hooks, support);
 #    endif /* HWLOC_NETBSD_SYS */
 
+#    ifdef HWLOC_DRAGONFLY_SYS
+    hwloc_set_dragonfly_hooks(hooks, support);
+#    endif /* HWLOC_DRAGONFLY_SYS */
+
 #    ifdef HWLOC_HPUX_SYS
     hwloc_set_hpux_hooks(hooks, support);
 #    endif /* HWLOC_HPUX_SYS */
