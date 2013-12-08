Temporarily workaround for libucl comment check bug

--- libpkg/pkg.c.orig	2013-12-05 18:04:38.000000000 +0000
+++ libpkg/pkg.c
@@ -1244,9 +1244,10 @@ pkg_open2(struct pkg **pkg_p, struct arc
 			unsigned char *buffer;
 			manifest = true;
 
-			size_t len = archive_entry_size(*ae);
+			size_t len = archive_entry_size(*ae) + 1;
 			buffer = malloc(len);
 			archive_read_data(*a, buffer, archive_entry_size(*ae));
+			buffer[len-1] = 0;
 			ret = pkg_parse_manifest(pkg, buffer, len, keys);
 			free(buffer);
 			if (ret != EPKG_OK) {
@@ -1260,9 +1261,10 @@ pkg_open2(struct pkg **pkg_p, struct arc
 			manifest = true;
 			unsigned char *buffer;
 
-			size_t len = archive_entry_size(*ae);
+			size_t len = archive_entry_size(*ae) + 1;
 			buffer = malloc(len);
 			archive_read_data(*a, buffer, archive_entry_size(*ae));
+			buffer[len-1] = 0;
 			ret = pkg_parse_manifest(pkg, buffer, len, keys);
 			free(buffer);
 			if (ret != EPKG_OK) {
