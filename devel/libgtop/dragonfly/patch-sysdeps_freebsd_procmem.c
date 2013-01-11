TODO: Implement for DragonFly

--- sysdeps/freebsd/procmem.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/procmem.c	2013-01-11 17:10:04.000000000 +0100
@@ -34,8 +34,10 @@
 #include <vm/vm_map.h>
 
 #include <sys/vnode.h>
+#ifndef __DragonFly__
 #include <ufs/ufs/quota.h>
 #include <ufs/ufs/inode.h>
+#endif
 
 #include <sys/ucred.h>
 #include <sys/user.h>
@@ -93,6 +95,7 @@
 		return;
 	}
 
+#ifndef __DragonFly__
 #define        PROC_VMSPACE   ki_vmspace
 
        buf->rss_rlim = pinfo [0].ki_rssize;
@@ -157,4 +160,5 @@
 
 	buf->flags = _glibtop_sysdeps_proc_mem |
 		_glibtop_sysdeps_proc_mem_share;
+#endif
 }
