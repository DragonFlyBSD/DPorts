--- sysdeps/freebsd/mountlist.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/mountlist.c
@@ -99,6 +99,7 @@ static gboolean ignore_mount_entry(const
 		"mfs",
 		"none",
 		"nfs",
+		"null",
 		"nullfs",
 		"nwfs",
 		"portalfs",
