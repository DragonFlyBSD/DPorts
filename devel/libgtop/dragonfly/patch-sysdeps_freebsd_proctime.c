--- sysdeps/freebsd/proctime.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/proctime.c
@@ -92,8 +92,12 @@ glibtop_get_proc_time_p (glibtop *server
 	}
 
 	buf->frequency = (ci.stathz ? ci.stathz : ci.hz);
+#ifdef __DragonFly__
+	buf->rtime = 0; /* XXX TODO */
+#else
 	buf->rtime = pinfo [0].ki_runtime * buf->frequency / 1000000;
 	buf->flags = _glibtop_sysdeps_proc_time;
+#endif
 
 	/*
 	  All the following used to be 'if (pinfo [0].ki_flag & PS_INMEM)'
@@ -101,6 +105,13 @@ glibtop_get_proc_time_p (glibtop *server
 	  I have no idea what this PS_INMEM is, but it works perfectly
 	  without this check.
 	 */
+#ifdef __DragonFly__
+	buf->utime = 0;
+	buf->stime = 0;
+	buf->cutime = 0;
+	buf->cstime = 0;
+           buf->start_time = 0;
+#else
 	buf->utime = tv2sec_freq (pinfo [0].ki_rusage.ru_utime, buf->frequency);
 	buf->stime = tv2sec_freq (pinfo [0].ki_rusage.ru_stime, buf->frequency);
 	buf->cutime = tv2sec_freq (pinfo [0].ki_childtime, buf->frequency);
@@ -111,4 +122,5 @@ glibtop_get_proc_time_p (glibtop *server
 #endif
            buf->start_time = tv2sec (pinfo [0].ki_start);
            buf->flags |= _glibtop_sysdeps_proc_time_user;
+#endif
 }
