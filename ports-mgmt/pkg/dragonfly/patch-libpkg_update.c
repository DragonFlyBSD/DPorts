--- libpkg/update.c.orig	2013-01-28 18:13:23.000000000 +0000
+++ libpkg/update.c
@@ -169,7 +169,7 @@ pkg_update(const char *name, const char
 	}
 
 	a = archive_read_new();
-	archive_read_support_compression_all(a);
+	archive_read_support_filter_all(a);
 	archive_read_support_format_tar(a);
 
 	archive_read_open_filename(a, tmp, 4096);
@@ -302,7 +302,7 @@ pkg_update(const char *name, const char
 
 	cleanup:
 	if (a != NULL)
-		archive_read_finish(a);
+		archive_read_free(a);
 
 	(void)unlink(tmp);
 
