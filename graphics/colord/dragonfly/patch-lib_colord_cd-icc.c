--- lib/colord/cd-icc.c.orig	2025-06-23 14:06:37 UTC
+++ lib/colord/cd-icc.c
@@ -1497,11 +1497,28 @@ cd_icc_save_file_mkdir_parents (GFile *file, GError **
 		return FALSE;
 	}
 
-	/* ensure destination does not already exist */
+	/* ensure destination does not already exist.
+	 * NOTE: there is an unavoidable TOCTOU race when several
+	 * cd-create-profile instances run in parallel (one per ICC
+	 * profile, all writing into the same directory): two processes
+	 * can both observe the directory as missing and then one of
+	 * them fails in g_file_make_directory_with_parents() with
+	 * G_IO_ERROR_EXISTS ("Error creating directory ...: File
+	 * exists").  Treat "already exists" as success. */
 	if (g_file_query_exists (parent_dir, NULL))
 		return TRUE;
-	if (!g_file_make_directory_with_parents (parent_dir, NULL, error))
+	if (!g_file_make_directory_with_parents (parent_dir, NULL, error)) {
+		if (g_file_query_exists (parent_dir, NULL)) {
+			g_clear_error (error);
+			return TRUE;
+		}
+		if (error != NULL && *error != NULL &&
+		    g_error_matches (*error, G_IO_ERROR, G_IO_ERROR_EXISTS)) {
+			g_clear_error (error);
+			return TRUE;
+		}
 		return FALSE;
+	}
 	return TRUE;
 }
 
