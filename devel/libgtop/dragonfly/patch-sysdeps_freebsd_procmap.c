--- sysdeps/freebsd/procmap.c.intermediate	2020-01-25 14:54:16.000000000 +0000
+++ sysdeps/freebsd/procmap.c
@@ -24,6 +24,7 @@
 #include <glibtop/error.h>
 #include <glibtop/procmap.h>
 
+#ifndef __DragonFly__ /* TODO */
 #include <glibtop_suid.h>
 
 #include <kvm.h>
@@ -226,6 +227,9 @@ _glibtop_sysdeps_freebsd_dev_inode (glib
 	    } /* end-if IS_UFS */
 }
 #endif
+#else
+static const unsigned long _glibtop_sysdeps_proc_map = 0;
+#endif /* __DragonFly__ */
 
 /* Init function. */
 
@@ -235,6 +239,7 @@ _glibtop_init_proc_map_p (glibtop *serve
         server->sysdeps.proc_map = _glibtop_sysdeps_proc_map;
 }
 
+#ifndef __DragonFly__
 static int
 vm_map_reader(void *token, vm_map_entry_t addr, vm_map_entry_t dest)
 {
@@ -244,7 +249,7 @@ vm_map_reader(void *token, vm_map_entry_
 	return (kvm_read (kd, (gulong) addr, dest, sizeof(*dest)) == sizeof(*dest));
 }
 
-#if (__FreeBSD_version < 1300062)
+#if (__FreeBSD_version < 1300062) && !defined(__DragonFly__)
 typedef int vm_map_entry_reader(void *token, vm_map_entry_t addr,
     vm_map_entry_t dest);
 
@@ -260,6 +265,7 @@ vm_map_entry_read_succ(void *token, stru
 	return (next);
 }
 #endif
+#endif
 
 /* Provides detailed information about a process. */
 
@@ -267,6 +273,10 @@ glibtop_map_entry *
 glibtop_get_proc_map_p (glibtop *server, glibtop_proc_map *buf,
                         pid_t pid)
 {
+#ifdef __DragonFly__
+	memset (buf, 0, sizeof (glibtop_proc_map));
+	return NULL;
+#else
         struct kinfo_proc *pinfo;
         struct vm_map_entry entry;
         struct vmspace vmspace;
@@ -403,4 +413,5 @@ glibtop_get_proc_map_p (glibtop *server,
         buf->total  = (guint64) (buf->number * buf->size);
 
         return (glibtop_map_entry*) g_array_free(maps, FALSE);
+#endif
 }
