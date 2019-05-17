--- sysdeps/freebsd/procmem.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/procmem.c
@@ -34,8 +34,10 @@
 #include <vm/vm_map.h>
 
 #include <sys/vnode.h>
+#ifndef __DragonFly__
 #include <ufs/ufs/quota.h>
 #include <ufs/ufs/inode.h>
+#endif
 
 #include <sys/ucred.h>
 #include <sys/user.h>
@@ -92,12 +94,23 @@ glibtop_get_proc_mem_p (glibtop *server,
 
 #define        PROC_VMSPACE   ki_vmspace
 
+#ifdef __DragonFly__
+       buf->rss_rlim = pinfo [0].kp_vm_rssize;
+#else
        buf->rss_rlim = pinfo [0].ki_rssize;
+#endif
 
+#ifdef __DragonFly__
+       buf->vsize = buf->size = (guint64)
+	       pinfo [0].kp_vm_map_size;
+       buf->resident = buf->rss = (guint64)
+	       ps_pgtok (pinfo [0].kp_vm_rssize) * 1024;
+#else
        buf->vsize = buf->size = (guint64)
 	       pinfo [0].ki_size;
        buf->resident = buf->rss = (guint64)
 	       ps_pgtok (pinfo [0].ki_rssize) * 1024;
+#endif
 
        buf->flags |= _glibtop_sysdeps_proc_mem;
 
