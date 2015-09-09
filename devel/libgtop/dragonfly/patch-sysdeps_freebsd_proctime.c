--- sysdeps/freebsd/proctime.c.orig	2015-08-17 18:59:37 UTC
+++ sysdeps/freebsd/proctime.c
@@ -92,7 +92,9 @@ glibtop_get_proc_time_p (glibtop *server
 	}
 
 	buf->frequency = (ci.stathz ? ci.stathz : ci.hz);
+#ifndef __DragonFly__ /* TODO */
 	buf->rtime = pinfo [0].ki_runtime * buf->frequency / 1000000;
+#endif
 	buf->flags = _glibtop_sysdeps_proc_time;
 
 	/*
@@ -101,6 +103,7 @@ glibtop_get_proc_time_p (glibtop *server
 	  I have no idea what this PS_INMEM is, but it works perfectly
 	  without this check.
 	 */
+#ifndef __DragonFly__ /* TODO */
 	buf->utime = tv2sec_freq (pinfo [0].ki_rusage.ru_utime, buf->frequency);
 	buf->stime = tv2sec_freq (pinfo [0].ki_rusage.ru_stime, buf->frequency);
 	buf->cutime = tv2sec_freq (pinfo [0].ki_childtime, buf->frequency);
@@ -111,4 +114,5 @@ glibtop_get_proc_time_p (glibtop *server
 #endif
            buf->start_time = tv2sec (pinfo [0].ki_start);
            buf->flags |= _glibtop_sysdeps_proc_time_user;
+#endif
 }
