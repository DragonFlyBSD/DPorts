--- pkg/audit.c.orig	2013-01-28 18:13:23.000000000 +0000
+++ pkg/audit.c
@@ -107,7 +107,7 @@ fetch_and_extract(const char *src, const
 	}
 
 	a = archive_read_new();
-	archive_read_support_compression_all(a);
+	archive_read_support_filter_all(a);
 	archive_read_support_format_tar(a);
 
 	if (archive_read_open_filename(a, tmp, 4096) != ARCHIVE_OK) {
@@ -136,7 +136,7 @@ fetch_and_extract(const char *src, const
 	cleanup:
 	unlink(tmp);
 	if (a != NULL)
-		archive_read_finish(a);
+		archive_read_free(a);
 	if (fd > 0)
 		close(fd);
 
