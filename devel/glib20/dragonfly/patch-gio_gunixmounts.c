--- gio/gunixmounts.c.orig	2018-09-21 09:29:23 UTC
+++ gio/gunixmounts.c
@@ -328,6 +328,7 @@ g_unix_is_system_fs_type (const char *fs
     "mqueue",
     "ncpfs",
     "nfsd",
+    "null",
     "nullfs",
     "ocfs2",
     "overlay",
