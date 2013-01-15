--- ./source3/smbd/statvfs.c.intermediate	2013-01-15 17:46:31.920228000 +0100
+++ ./source3/smbd/statvfs.c	2013-01-15 17:44:38.030069000 +0100
@@ -75,8 +75,10 @@
 	 */
 	statbuf->FsCapabilities =
 	    FILE_CASE_SENSITIVE_SEARCH | FILE_CASE_PRESERVED_NAMES;
+#if defined(MNT_ACLS)
 	if(statfs_buf.f_flags & MNT_ACLS)
 		statbuf->FsCapabilities |= FILE_PERSISTENT_ACLS;
+#endif
 	if(statfs_buf.f_flags & MNT_QUOTA)
 		statbuf->FsCapabilities |= FILE_VOLUME_QUOTAS;
 	if(statfs_buf.f_flags & MNT_RDONLY)
