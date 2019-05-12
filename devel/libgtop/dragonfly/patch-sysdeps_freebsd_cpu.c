--- sysdeps/freebsd/cpu.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/cpu.c
@@ -61,6 +61,10 @@ glibtop_get_cpu_s (glibtop *server, glib
 
 	memset (buf, 0, sizeof (glibtop_cpu));
 
+#ifdef __DragonFly__
+	glibtop_warn_io_r (server, "sysctl (kern.cp_time)");
+	return;
+#else
 	length = sizeof (cpts);
 	if (sysctlbyname ("kern.cp_time", cpts, &length, NULL, 0)) {
 		glibtop_warn_io_r (server, "sysctl (kern.cp_time)");
@@ -130,4 +134,5 @@ glibtop_get_cpu_s (glibtop *server, glib
 	if (ncpu > 1) {
 		buf->flags |= _glibtop_sysdeps_cpu_smp;
 	}
+#endif
 }
