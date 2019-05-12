--- sysdeps/freebsd/open.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/open.c
@@ -43,6 +43,10 @@ glibtop_open_s (glibtop *server, const c
 	server->real_ncpu = ncpus - 1;
 	server->ncpu = MIN(GLIBTOP_NCPU - 1, server->real_ncpu);
 
+#ifdef __DragonFly__
+	server->os_version_code = __DragonFly_version;
+#else
 	server->os_version_code = __FreeBSD_version;
+#endif
 
 }
