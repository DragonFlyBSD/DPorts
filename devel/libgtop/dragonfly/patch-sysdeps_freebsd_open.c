--- sysdeps/freebsd/open.c.intermediate	2013-01-11 16:21:23.000000000 +0100
+++ sysdeps/freebsd/open.c	2013-01-11 16:22:42.000000000 +0100
@@ -42,5 +42,9 @@
 	sysctlbyname ("hw.ncpu", &ncpus, &len, NULL, 0);
 	server->real_ncpu = ncpus - 1;
 	server->ncpu = MIN(GLIBTOP_NCPU - 1, server->real_ncpu);
+#ifdef __DragonFly__
+	server->os_version_code = __DragonFly_version;
+#else
 	server->os_version_code = __FreeBSD_version;
+#endif
 }
