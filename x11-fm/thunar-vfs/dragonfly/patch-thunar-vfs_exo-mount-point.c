--- thunar-vfs/exo-mount-point.c.orig	2013-01-04 22:38:38.620199000 +0100
+++ thunar-vfs/exo-mount-point.c	2013-01-04 22:44:09.280661000 +0100
@@ -263,7 +263,7 @@
 
   /* close the file handle */
   fclose (fp);
-#elif defined(HAVE_GETVFSSTAT) /* Newer NetBSD */
+#elif defined(HAVE_GETVFSSTAT) && !defined(__DragonFly__) /* Newer NetBSD */
   struct statvfs *mntbuf = NULL;
   glong           bufsize = 0;
   gint            mntsize;
