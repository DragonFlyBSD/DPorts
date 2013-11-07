--- activation-server/activation-server-main.c.intermediate	2013-11-07 13:04:35.000000000 +0000
+++ activation-server/activation-server-main.c
@@ -534,6 +534,11 @@ main (int argc, char *argv[])
 #endif
 
 	g_set_prgname ("bonobo-activation-server");
+	if (getenv("PACKAGE_BUILDING") != NULL)
+	{
+		g_printerr ("Package building detected, bonobo-activation-server launch not executed.\n");
+		exit (0);
+	}
 	ctx = g_option_context_new (NULL);
 	g_option_context_add_main_entries (ctx, options, GETTEXT_PACKAGE);
 	if (!g_option_context_parse (ctx, &argc, &argv, &error)) {
