--- sysdeps/freebsd/procsegment.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/procsegment.c
@@ -67,8 +67,13 @@ glibtop_get_proc_segment_p (glibtop *ser
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
