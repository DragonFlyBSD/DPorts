--- libpkg/update.c.orig	2013-03-31 00:52:51.000000000 +0000
+++ libpkg/update.c
@@ -243,7 +243,7 @@ pkg_update(const char *name, const char
 	pkg_config_string(PKG_CONFIG_ABI, &myarch);
 
 	req = sqlite3_mprintf("select group_concat(arch, ', ') from "
-	    "(select arch from packages "
+	    "(select distinct arch from packages "
 	    "where arch not GLOB '%q')", myarch);
 	if (get_sql_string(sqlite, req, &bad_abis) != EPKG_OK) {
 		sqlite3_free(req);
