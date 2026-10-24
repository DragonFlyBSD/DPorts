--- tools/ascli-actions-misc.c.orig	2026-09-28 17:53:27 UTC
+++ tools/ascli-actions-misc.c
@@ -129,7 +129,9 @@ ascli_make_desktop_entry_file (const gchar *mi_fname, 
 
 	/* load metainfo file */
 	mi_file = g_file_new_for_path (mi_fname);
-	if (!g_file_query_exists (mi_file, NULL)) {
+	/* g_file_query_exists() can wrongly report an existing file as missing
+	 * here on DragonFly; use a stat-based check instead. */
+	if (!g_file_test (mi_fname, G_FILE_TEST_EXISTS)) {
 		ascli_print_stderr (_("Metainfo file '%s' does not exist."), mi_fname);
 		return 4;
 	}
