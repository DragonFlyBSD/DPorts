--- ./libarchive/archive_read_disk_posix.c.orig	2013-01-14 01:43:45.000000000 +0000
+++ ./libarchive/archive_read_disk_posix.c
@@ -1475,7 +1475,11 @@ setup_current_filesystem(struct archive_
 	struct tree *t = a->tree;
 	struct statfs sfs;
 #if defined(HAVE_GETVFSBYNAME) && defined(VFCF_SYNTHETIC)
+#  ifdef __DragonFly__
+	struct vfsconf vfc;
+#  else
 	struct xvfsconf vfc;
+#  endif
 #endif
 	int r, xr = 0;
 #if !defined(HAVE_STRUCT_STATFS_F_NAMEMAX)
