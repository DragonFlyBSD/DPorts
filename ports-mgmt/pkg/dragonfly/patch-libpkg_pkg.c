--- libpkg/pkg.c.orig	2013-01-28 18:13:23.000000000 +0000
+++ libpkg/pkg.c
@@ -960,7 +960,7 @@ pkg_open(struct pkg **pkg_p, const char
 	if (ret != EPKG_OK && ret != EPKG_END)
 		return (EPKG_FATAL);
 
-	archive_read_finish(a);
+	archive_read_free(a);
 
 	return (EPKG_OK);
 }
@@ -991,7 +991,7 @@ pkg_open2(struct pkg **pkg_p, struct arc
 	sbuf_init(&manifest);
 
 	*a = archive_read_new();
-	archive_read_support_compression_all(*a);
+	archive_read_support_filter_all(*a);
 	archive_read_support_format_tar(*a);
 
 	if (archive_read_open_filename(*a, path, 4096) != ARCHIVE_OK) {
@@ -1069,7 +1069,7 @@ pkg_open2(struct pkg **pkg_p, struct arc
 
 	if (retcode != EPKG_OK && retcode != EPKG_END) {
 		if (*a != NULL)
-			archive_read_finish(*a);
+			archive_read_free(*a);
 		*a = NULL;
 		*ae = NULL;
 	}
