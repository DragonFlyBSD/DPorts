--- cpuinfo-with-freebsd-support/src/freebsd/topology.c.orig
+++ cpuinfo-with-freebsd-support/src/freebsd/topology.c
@@ -50,6 +50,15 @@
 		.threads_per_core = 0,
 		.threads = 0,
 	};
+#if defined(__DragonFly__)
+	/* No kern.sched.topology_spec or kern.smp.* here. */
+	topology.packages = sysctl_int("hw.cpu_topology_phys_ids");
+	topology.cores = topology.packages * sysctl_int("hw.cpu_topology_core_ids");
+	topology.threads_per_core = sysctl_int("hw.cpu_topology_ht_ids");
+	if (topology.cores == 0 || topology.threads_per_core == 0) {
+		goto fail;
+	}
+#else
 	char* topology_spec = sysctl_str("kern.sched.topology_spec");
 	if (!topology_spec) {
 		return topology;
@@ -86,6 +95,7 @@
 	if (topology.threads_per_core == 0) {
 		goto fail;
 	}
+#endif
 	cpuinfo_log_debug(
 		"freebsd topology: packages = %d, cores = %d, "
 		"threads_per_core = %d",
