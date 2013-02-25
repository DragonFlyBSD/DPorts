--- libpkg/scripts.c.orig	2013-02-20 17:38:01.000000000 +0000
+++ libpkg/scripts.c
@@ -82,7 +82,6 @@ pkg_script_run(struct pkg * const pkg, p
 	}
 
 	assert(i < sizeof(map) / sizeof(map[0]));
-	assert(map[i].a == type);
 
 	for (j = 0; j < PKG_NUM_SCRIPTS; j++) {
 		if (pkg_script_get(pkg, j) == NULL)
