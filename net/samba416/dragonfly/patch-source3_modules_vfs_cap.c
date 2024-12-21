--- source3/modules/vfs_cap.c.ori	2024-12-09 16:54:29.903438000 +0100
+++ source3/modules/vfs_cap.c	2024-12-09 16:56:47.276299000 +0100
@@ -114,7 +114,11 @@ static struct dirent *cap_readdir(vfs_ha
 	talloc_set_name_const(newdirent, "struct dirent");
 	/* See FreeBSD bug #275597 for an explanation of this patch. */
 	/* memcpy(newdirent, result, sizeof(struct dirent)); */
+#if defined(__FreeBSD__)
 	memcpy(newdirent, result, result->d_reclen);
+#else
+	memcpy(newdirent, result, _DIRENT_RECLEN(result->d_namlen));
+#endif
 	/*******************************************************************/
 	memcpy(&newdirent->d_name, newname, newnamelen);
 	return newdirent;
