--- gio/gunixmounts.c.intermediate	2013-03-10 00:05:13.397226000 +0000
+++ gio/gunixmounts.c
@@ -616,7 +616,7 @@ get_mtab_monitor_file (void)
 static GList *
 _g_get_unix_mounts (void)
 {
-#if defined(HAVE_GETVFSSTAT)
+#if defined(HAVE_GETVFSSTAT) && !defined(__DragonFly__)
   struct statvfs *mntent = NULL;
 #elif defined(HAVE_GETFSSTAT)
   struct statfs *mntent = NULL;
@@ -629,7 +629,7 @@ _g_get_unix_mounts (void)
   GList *return_list;
   
   /* Pass NOWAIT to avoid blocking trying to update NFS mounts. */
-#if defined(HAVE_GETVFSSTAT)
+#if defined(HAVE_GETVFSSTAT) && !defined(__DragonFly__)
   num_mounts = getvfsstat (NULL, 0, ST_NOWAIT);
 #elif defined(HAVE_GETFSSTAT)
   num_mounts = getfsstat (NULL, 0, MNT_NOWAIT);
@@ -639,7 +639,7 @@ _g_get_unix_mounts (void)
 
   bufsize = num_mounts * sizeof (*mntent);
   mntent = g_malloc (bufsize);
-#if defined(HAVE_GETVFSSTAT)
+#if defined(HAVE_GETVFSSTAT) && !defined(__DragonFly__)
   num_mounts = getvfsstat (mntent, bufsize, ST_NOWAIT);
 #elif defined(HAVE_GETFSSTAT)
   num_mounts = getfsstat (mntent, bufsize, MNT_NOWAIT);
@@ -656,7 +656,7 @@ _g_get_unix_mounts (void)
       mount_entry->mount_path = g_strdup (mntent[i].f_mntonname);
       mount_entry->device_path = g_strdup (mntent[i].f_mntfromname);
       mount_entry->filesystem_type = g_strdup (mntent[i].f_fstypename);
-#if defined(HAVE_GETVFSSTAT)
+#if defined(HAVE_GETVFSSTAT) && !defined(__DragonFly__)
       if (mntent[i].f_flag & ST_RDONLY)
 #elif defined(HAVE_GETFSSTAT)
       if (mntent[i].f_flags & MNT_RDONLY)
