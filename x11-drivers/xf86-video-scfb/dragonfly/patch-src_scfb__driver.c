--- src/scfb_driver.c.intermediate	2017-02-13 15:08:46 UTC
+++ src/scfb_driver.c
@@ -201,7 +201,7 @@ ScfbSetup(pointer module, pointer opts,
 	/* Check that we're being loaded on a OpenBSD or NetBSD system. */
 	LoaderGetOS(&osname, NULL, NULL, NULL);
 	if (!osname || (strcmp(osname, "freebsd") != 0 && strcmp(osname, "openbsd") != 0 &&
-	                strcmp(osname, "netbsd") != 0)) {
+	                strcmp(osname, "netbsd") != 0 && strcmp(osname, "dragonfly") != 0)) {
 		if (errmaj)
 			*errmaj = LDR_BADOS;
 		if (errmin)
