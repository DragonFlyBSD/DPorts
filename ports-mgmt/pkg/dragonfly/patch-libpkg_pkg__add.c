--- libpkg/pkg_add.c.orig	2013-01-28 18:13:23.000000000 +0000
+++ libpkg/pkg_add.c
@@ -131,7 +131,7 @@ do_extract_mtree(char *mtree, const char
 		return EPKG_OK;
 
 	a = archive_read_new();
-	archive_read_support_compression_none(a);
+	archive_read_support_filter_none(a);
 	archive_read_support_format_mtree(a);
 
 	if (archive_read_open_memory(a, mtree, strlen(mtree)) != ARCHIVE_OK) {
@@ -160,7 +160,7 @@ do_extract_mtree(char *mtree, const char
 
 cleanup:
 	if (a != NULL)
-		archive_read_finish(a);
+		archive_read_free(a);
 
 	return (retcode);
 }
@@ -333,7 +333,7 @@ pkg_add(struct pkgdb *db, const char *pa
 
 	cleanup:
 	if (a != NULL)
-		archive_read_finish(a);
+		archive_read_free(a);
 
 	pkg_free(pkg);
 
