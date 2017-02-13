TODO: Implement for DragonFly

--- sysdeps/freebsd/cpu.c.intermediate	2013-01-11 16:19:27.000000000 +0100
+++ sysdeps/freebsd/cpu.c	2013-01-11 16:18:37.000000000 +0100
@@ -53,6 +53,7 @@
 void
 glibtop_get_cpu_s (glibtop *server, glibtop_cpu *buf)
 {
+#if !defined(__DragonFly__) || __DragonFly_version >= 400713
 	long cpts [CPUSTATES];
 	long *cp_times = NULL;
 	struct clockinfo ci;
@@ -132,4 +133,5 @@
 	if (ncpu > 1) {
 		buf->flags |= _glibtop_sysdeps_cpu_smp;
 	}
+#endif
 }
