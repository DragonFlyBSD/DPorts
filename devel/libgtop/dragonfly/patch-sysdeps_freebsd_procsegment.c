--- sysdeps/freebsd/procsegment.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/procsegment.c	2013-01-11 17:18:19.000000000 +0100
@@ -69,8 +69,13 @@
 		return;
 	}
 
+#ifdef __DragonFly__
+	buf->text_rss = pinfo[0].kp_vm_tsize * pagesize;
+	buf->data_rss = pinfo[0].kp_vm_dsize * pagesize;
+#else
 	buf->text_rss = pinfo[0].ki_tsize * pagesize;
 	buf->data_rss = pinfo[0].ki_dsize * pagesize;
+#endif
 
 	buf->flags = _glibtop_sysdeps_proc_segment;
 }
