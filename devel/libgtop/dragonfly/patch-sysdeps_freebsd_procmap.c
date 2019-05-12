--- sysdeps/freebsd/procmap.c.intermediate	2019-05-12 09:40:18.000000000 +0000
+++ sysdeps/freebsd/procmap.c
@@ -24,6 +24,7 @@
 #include <glibtop/error.h>
 #include <glibtop/procmap.h>
 
+#ifndef __DragonFly__ /* TODO */
 #include <glibtop_suid.h>
 
 #include <kvm.h>
@@ -228,6 +229,9 @@ _glibtop_sysdeps_freebsd_dev_inode (glib
 	    } /* end-if IS_UFS */
 }
 #endif
+#else
+static const unsigned long _glibtop_sysdeps_proc_map = 0;
+#endif /* __DragonFly__ */
 
 /* Init function. */
 
@@ -243,6 +247,10 @@ glibtop_map_entry *
 glibtop_get_proc_map_p (glibtop *server, glibtop_proc_map *buf,
                         pid_t pid)
 {
+#ifdef __DragonFly__
+	memset (buf, 0, sizeof (glibtop_proc_map));
+	return NULL;
+#else
         struct kinfo_proc *pinfo;
         struct vm_map_entry entry, *first;
         struct vmspace vmspace;
@@ -394,4 +402,5 @@ glibtop_get_proc_map_p (glibtop *server,
         buf->total  = (guint64) (buf->number * buf->size);
 
         return (glibtop_map_entry*) g_array_free(maps, FALSE);
+#endif
 }
