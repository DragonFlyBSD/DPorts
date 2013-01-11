TODO: Implement for DragonFly

--- sysdeps/freebsd/procmap.c.intermediate	2013-01-11 17:16:37.000000000 +0100
+++ sysdeps/freebsd/procmap.c	2013-01-11 17:16:50.000000000 +0100
@@ -19,6 +19,8 @@
    Boston, MA 02111-1307, USA.
 */
 
+#ifndef __DragonFly__ /* TODO */
+
 #include <config.h>
 #include <glibtop.h>
 #include <glibtop/error.h>
@@ -301,3 +303,29 @@
 
         return (glibtop_map_entry*) g_array_free(maps, FALSE);
 }
+#else /* __DragonFly__ */
+
+#include <config.h>
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
+        server->sysdeps.proc_map = _glibtop_sysdeps_proc_map;
+}
+
+/* Provides detailed information about a process. */
+
+glibtop_map_entry *
+glibtop_get_proc_map_p (glibtop *server, glibtop_proc_map *buf, pid_t pid)
+{
+        memset (buf, 0, sizeof (glibtop_proc_map));
+        return NULL;
+}
+#endif /* __DragonFly__ */
