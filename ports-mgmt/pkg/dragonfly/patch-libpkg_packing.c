--- libpkg/packing.c.orig	2013-01-28 18:13:23.000000000 +0000
+++ libpkg/packing.c
@@ -69,8 +69,8 @@ packing_init(struct packing **pack, cons
 		archive_write_set_format_pax_restricted((*pack)->awrite);
 		ext = packing_set_format((*pack)->awrite, format);
 		if (ext == NULL) {
-			archive_read_finish((*pack)->aread);
-			archive_write_finish((*pack)->awrite);
+			archive_read_free((*pack)->aread);
+			archive_write_free((*pack)->awrite);
 			*pack = NULL;
 			return EPKG_FATAL; /* error set by _set_format() */
 		}
@@ -81,8 +81,8 @@ packing_init(struct packing **pack, cons
 		    (*pack)->awrite, archive_path) != ARCHIVE_OK) {
 			pkg_emit_errno("archive_write_open_filename",
 			    archive_path);
-			archive_read_finish((*pack)->aread);
-			archive_write_finish((*pack)->awrite);
+			archive_read_free((*pack)->aread);
+			archive_write_free((*pack)->awrite);
 			*pack = NULL;
 			return EPKG_FATAL;
 		}
@@ -278,10 +278,10 @@ packing_finish(struct packing *pack)
 {
 	assert(pack != NULL);
 
-	archive_read_finish(pack->aread);
+	archive_read_free(pack->aread);
 
 	archive_write_close(pack->awrite);
-	archive_write_finish(pack->awrite);
+	archive_write_free(pack->awrite);
 
 	free(pack);
 
@@ -295,22 +295,22 @@ packing_set_format(struct archive *a, pk
 
 	switch (format) {
 	case TXZ:
-		if (archive_write_set_compression_xz(a) == ARCHIVE_OK)
+		if (archive_write_add_filter_xz(a) == ARCHIVE_OK)
 			return ("txz");
 		else
 			pkg_emit_error(notsupp_fmt, "xz", "bzip2");
 	case TBZ:
-		if (archive_write_set_compression_bzip2(a) == ARCHIVE_OK)
+		if (archive_write_add_filter_bzip2(a) == ARCHIVE_OK)
 			return ("tbz");
 		else
 			pkg_emit_error(notsupp_fmt, "bzip2", "gzip");
 	case TGZ:
-		if (archive_write_set_compression_gzip(a) == ARCHIVE_OK)
+		if (archive_write_add_filter_gzip(a) == ARCHIVE_OK)
 			return ("tgz");
 		else
 			pkg_emit_error(notsupp_fmt, "gzip", "plain tar");
 	case TAR:
-		archive_write_set_compression_none(a);
+		archive_write_add_filter_none(a);
 		return ("tar");
 	}
 	return (NULL);
