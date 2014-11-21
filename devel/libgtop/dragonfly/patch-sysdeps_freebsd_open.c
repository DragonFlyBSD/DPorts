--- sysdeps/freebsd/open.c.orig	2014-04-28 21:09:24 UTC
+++ sysdeps/freebsd/open.c
@@ -43,6 +43,6 @@ glibtop_open_s (glibtop *server, const c
 	server->real_ncpu = ncpus - 1;
 	server->ncpu = MIN(GLIBTOP_NCPU - 1, server->real_ncpu);
 
-	server->os_version_code = __FreeBSD_version;
+	server->os_version_code = __DragonFly_version;
 
 }
