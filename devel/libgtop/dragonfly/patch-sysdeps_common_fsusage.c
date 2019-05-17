--- sysdeps/common/fsusage.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/common/fsusage.c
@@ -140,7 +140,7 @@ _glibtop_get_fsusage_read_write(glibtop
 }
 
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 void
 _glibtop_freebsd_get_fsusage_read_write(glibtop *server,
 					glibtop_fsusage *buf,
@@ -279,7 +279,7 @@ glibtop_get_fsusage_s (glibtop *server,
     return;
 
 #if (defined(sun) || defined(__sun)) && (defined(__SVR4) || defined(__svr4__)) \
-	|| defined(__FreeBSD__) || defined(__OpenBSD__)
+	|| defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   /* Solaris but not SunOS and FreeBSD */
   buf->block_size = fsd.f_frsize;
 #else
