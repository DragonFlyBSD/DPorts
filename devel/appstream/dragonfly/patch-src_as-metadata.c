--- src/as-metadata.c.orig	2026-01-28 20:15:58 UTC
+++ src/as-metadata.c
@@ -1086,7 +1086,10 @@ as_metadata_save_data (AsMetadata *metad, const gchar 
 		GDataOutputStream *dos = NULL;
 
 		/* write uncompressed file */
-		if (g_file_query_exists (file, NULL)) {
+		/* NOTE: g_file_query_exists() can wrongly report an existing file
+		 * as missing on DragonFly; use a stat-based check instead, or we
+		 * end up calling g_file_create() on an existing file here. */
+		if (g_file_test (fname, G_FILE_TEST_EXISTS)) {
 			fos = g_file_replace (file,
 					      NULL,
 					      FALSE,
