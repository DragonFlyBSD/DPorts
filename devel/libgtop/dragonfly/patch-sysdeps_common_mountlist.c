--- sysdeps/common/mountlist.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/common/mountlist.c
@@ -106,7 +106,7 @@ static struct mount_entry *read_filesyst
 #endif
 
 
-#if defined (MOUNTED_GETMNTINFO) && !defined (__NetBSD__) && !defined (__OpenBSD__) && !defined(__FreeBSD__)
+#if defined (MOUNTED_GETMNTINFO) && !defined (__NetBSD__) && !defined (__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 static const char *
 fstype_to_string (short t)
 {
@@ -309,7 +309,7 @@ read_filesystem_list (void)
 	me = (struct mount_entry *) g_malloc (sizeof (struct mount_entry));
 	me->me_devname = g_strdup (fsp->f_mntfromname);
 	me->me_mountdir = g_strdup (fsp->f_mntonname);
-#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	me->me_type = g_strdup (fsp->f_fstypename);
 #else
 	me->me_type = g_strdup (fstype_to_string (fsp->f_type));
