--- src/sna/sna_display.c.orig	2013-08-20 20:26:26.000000000 +0000
+++ src/sna/sna_display.c
@@ -2979,7 +2979,7 @@ static bool sna_probe_initial_configurat
 	int width, height;
 	int i, j;
 
-	if (xf86ReturnOptValBool(sna->Options, OPTION_REPROBE, FALSE))
+//	if (xf86ReturnOptValBool(sna->Options, OPTION_REPROBE, FALSE))
 		return false;
 
 	/* First scan through all outputs and look for user overrides */
