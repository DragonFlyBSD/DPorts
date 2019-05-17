--- sysdeps/freebsd/proclist.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/proclist.c
@@ -74,6 +74,11 @@ glibtop_get_proclist_p (glibtop *server,
 
 	memset (buf, 0, sizeof (glibtop_proclist));
 
+#ifdef __DragonFly__
+	/* XXX uninplemented */
+	glibtop_warn_io_r (server, "sysctl (kern.proc.all)");
+	return NULL;
+#else
 	if (sysctlbyname ("kern.proc.all", NULL, &len, NULL, 0)) {
 		glibtop_warn_io_r (server, "sysctl (kern.proc.all)");
 		return NULL;
@@ -162,4 +167,5 @@ glibtop_get_proclist_p (glibtop *server,
 	buf->total = buf->number * buf->size;
 
 	return (pid_t *) g_array_free (pids, FALSE);
+#endif
 }
