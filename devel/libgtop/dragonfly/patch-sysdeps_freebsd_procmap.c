--- sysdeps/freebsd/procmap.c.orig	2024-11-19 00:00:00 UTC
+++ sysdeps/freebsd/procmap.c
@@ -22,2 +22,29 @@
 #include <config.h>
 
+#ifdef __DragonFly__
+#include <glibtop.h>
+#include <glibtop/error.h>
+#include <glibtop/procmap.h>
+
+static const unsigned long _glibtop_sysdeps_proc_map = 0;
+
+/* Init function. */
+
+void
+_glibtop_init_proc_map_p (glibtop *server)
+{
+	server->sysdeps.proc_map = _glibtop_sysdeps_proc_map;
+}
+
+/* Provides detailed information about a process. */
+
+glibtop_map_entry *
+glibtop_get_proc_map_p (glibtop *server, glibtop_proc_map *buf,
+			pid_t pid)
+{
+	memset (buf, 0, sizeof (glibtop_proc_map));
+	return NULL;
+}
+
+#else /* FreeBSD kvm implementation */
+
@@ -428,3 +455,4 @@
 
         return (glibtop_map_entry*) g_array_free(maps, FALSE);
 }
+#endif /* __DragonFly__ */
