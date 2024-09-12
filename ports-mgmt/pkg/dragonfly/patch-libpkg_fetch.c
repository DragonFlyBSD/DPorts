--- libpkg/fetch.c.orig	2024-05-22 14:56:17 UTC
+++ libpkg/fetch.c
@@ -128,17 +128,17 @@ pkg_fetch_file_tmp(struct pkg_repo *repo
 	retcode = pkg_fetch_file_to_fd(repo, fd, &fi, false);
 
 	if (fi.mtime != 0) {
-		struct timeval ftimes[2] = {
+		struct timespec ts[2] = {
 			{
 			.tv_sec = fi.mtime,
-			.tv_usec = 0
+			.tv_nsec = 0
 			},
 			{
 			.tv_sec = fi.mtime,
-			.tv_usec = 0
+			.tv_nsec = 0
 			}
 		};
-		futimes(fd, ftimes);
+		futimens(fd, ts);
 	}
 
 	close(fd);
@@ -180,17 +180,17 @@ pkg_fetch_file(struct pkg_repo *repo, co
 	free(url_to_free);
 
 	if (t != 0) {
-		struct timeval ftimes[2] = {
+		struct timespec ts[2] = {
 			{
 			.tv_sec = t,
-			.tv_usec = 0
+			.tv_nsec = 0
 			},
 			{
 			.tv_sec = t,
-			.tv_usec = 0
+			.tv_nsec = 0
 			}
 		};
-		futimes(fd, ftimes);
+		futimens(fd, ts);
 	}
 	close(fd);
 
@@ -315,17 +315,17 @@ cleanup:
 	free(fakerepo);
 
 	if (retcode == EPKG_OK) {
-		struct timeval ftimes[2] = {
+		struct timespec ts[2] = {
 			{
 			.tv_sec = fi->mtime,
-			.tv_usec = 0
+			.tv_nsec = 0
 			},
 			{
 			.tv_sec = fi->mtime,
-			.tv_usec = 0
+			.tv_nsec = 0
 			}
 		};
-		futimes(dest, ftimes);
+		futimens(dest, ts);
 	}
 
 	return (retcode);
