TODO: Implement for DragonFly

--- sysdeps/freebsd/proctime.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/proctime.c	2013-01-11 17:23:40.000000000 +0100
@@ -80,7 +80,9 @@
 
 	glibtop_suid_leave (server);
 
+#ifndef __DragonFly__ /* TODO */
 	buf->rtime = pinfo [0].ki_runtime * 1e-6;
+#endif
 
 	len = sizeof (ci);
 	if (sysctlbyname ("kern.clockrate", &ci, &len, NULL, 0)) {
@@ -94,6 +96,7 @@
 
 	buf->rtime *= buf->frequency;
 
+#ifndef __DragonFly__ /* TODO */
        if ((pinfo [0].ki_flag & PS_INMEM)) {
            buf->utime = (pinfo [0].ki_runtime * 1e-6) * buf->frequency;
 	   buf->stime = tv2sec (pinfo [0].ki_rusage.ru_stime) * buf->frequency;
@@ -106,4 +109,5 @@
            buf->start_time = tv2sec (pinfo [0].ki_start);
            buf->flags |= _glibtop_sysdeps_proc_time_user;
        }
+#endif
 }
