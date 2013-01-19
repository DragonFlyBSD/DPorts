--- libpkg/pkg_config.c.orig	2012-12-21 12:57:15.000000000 +0100
+++ libpkg/pkg_config.c	2013-01-19 11:46:40.185965000 +0100
@@ -46,6 +46,12 @@
 
 #define ABI_VAR_STRING "${ABI}"
 
+#ifdef __DragonFly__
+#define PORTSDIR_DEFAULT "/usr/dports"
+#else
+#define PORTSDIR_DEFAULT "/usr/ports"
+#endif
+
 struct pkg_config_kv {
 	char *key;
 	char *value;
@@ -86,7 +92,7 @@
 	[PKG_CONFIG_PORTSDIR] = {
 		STRING,
 		"PORTSDIR",
-		"/usr/ports",
+		PORTSDIR_DEFAULT,
 		{ NULL }
 	},
 	[PKG_CONFIG_REPOKEY] = {
