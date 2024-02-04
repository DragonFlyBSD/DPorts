--- cli/main.c.orig	2023-09-03 04:16:08 UTC
+++ cli/main.c
@@ -305,8 +305,12 @@ apply_modversion(pkgconf_client_t *clien
 		{
 			pkgconf_dependency_t *dep = world_iter->data;
 			pkgconf_pkg_t *pkg = dep->match;
+			size_t len = strlen(pkg->why);
 
-			if (strcmp(pkg->why, queue_node->package))
+			if (strncmp(pkg->why, queue_node->package, len))
+				continue;
+
+			if (!isspace(queue_node->package[len]) && queue_node->package[len] != '\0')
 				continue;
 
 			if (pkg->version != NULL) {
