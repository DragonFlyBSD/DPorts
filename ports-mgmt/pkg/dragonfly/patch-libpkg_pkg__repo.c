--- libpkg/pkg_repo.c.orig	2013-01-28 18:13:23.000000000 +0000
+++ libpkg/pkg_repo.c
@@ -601,7 +601,7 @@ pkg_create_repo(char *path, bool force,
 
 	if (access(repopack, F_OK) == 0) {
 		a = archive_read_new();
-		archive_read_support_compression_all(a);
+		archive_read_support_filter_all(a);
 		archive_read_support_format_tar(a);
 		ret = archive_read_open_filename(a, repopack, 4096);
 		if (ret != ARCHIVE_OK) {
@@ -619,7 +619,7 @@ pkg_create_repo(char *path, bool force,
 			}
 		}
 		if (a != NULL)
-			archive_read_finish(a);
+			archive_read_free(a);
 	}
 
 	if ((retcode = initialize_repo(repodb, force, &sqlite)) != EPKG_OK)
