--- sysdeps/common/mountlist.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/common/mountlist.c	2013-01-11 15:53:27.000000000 +0100
@@ -106,7 +106,10 @@
 #endif
 
 
-#if defined (MOUNTED_GETMNTINFO) && !defined (__NetBSD__) && !defined (__OpenBSD__) && !defined(__FreeBSD__)
+#if defined (MOUNTED_GETMNTINFO) && !defined (__NetBSD__) && \
+  !defined(__OpenBSD__) && \
+  !defined(__FreeBSD__) && \
+  !defined(__DragonFly__)
 static const char *
 fstype_to_string (short t)
 {
@@ -309,7 +312,10 @@
 	me = (struct mount_entry *) g_malloc (sizeof (struct mount_entry));
 	me->me_devname = g_strdup (fsp->f_mntfromname);
 	me->me_mountdir = g_strdup (fsp->f_mntonname);
-#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) \
+ || defined(__OpenBSD__) \
+ || defined(__FreeBSD__) \
+ || defined(__DragonFly__)
 	me->me_type = g_strdup (fsp->f_fstypename);
 #else
 	me->me_type = g_strdup (fstype_to_string (fsp->f_type));
