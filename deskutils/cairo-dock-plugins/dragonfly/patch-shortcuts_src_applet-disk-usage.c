--- shortcuts/src/applet-disk-usage.c.intermediate	2019-05-09 17:59:29.000000000 +0000
+++ shortcuts/src/applet-disk-usage.c
@@ -19,7 +19,7 @@
 
 #include <string.h>
 #include <sys/types.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/ucred.h>
 #include <sys/mount.h>
@@ -170,7 +170,7 @@ static void _cd_shortcuts_get_fs_info (c
 {
 	const gchar *cMountPath = (strncmp (cDiskURI, "file://", 7) == 0 ? cDiskURI + 7 : cDiskURI);
 	
-	#if defined(__FreeBSD__)
+	#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct statfs *me;
 	int i, count = getfsstat(me, NULL, MNT_WAIT);
 	if (count>0)
@@ -183,7 +183,11 @@ static void _cd_shortcuts_get_fs_info (c
 					D_("Mount point:"), me->f_mntonname,
 					D_("File system:"), me->f_mntfromname,
 					D_("Device:"), me->f_fstypename,
+#ifdef __DragonFly__
+					D_("Mount options:"), "N/I");
+#else
 					D_("Mount options:"), me->f_charspare);
+#endif
 				// if (me->mnt_freq != 0)
 				// g_string_append_printf (sInfo, "\nBackup frequency : %d days", me->mnt_freq);
 				break ;
