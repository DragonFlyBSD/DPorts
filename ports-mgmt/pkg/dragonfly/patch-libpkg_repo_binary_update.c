--- libpkg/repo/binary/update.c.orig	2024-05-22 14:56:17 UTC
+++ libpkg/repo/binary/update.c
@@ -763,20 +763,20 @@ cleanup:
 
 	/* Set mtime from http request if possible */
 	if (t != 0 && res == EPKG_OK) {
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
 
-		utimes(filename, ftimes);
+		utimensat(AT_FDCWD, filename, ts, 0);
 		if (got_meta)
-			futimesat(repo->dfd, "meta", ftimes);
+			utimensat(repo->dfd, "meta", ts, 0);
 	}
 
 	if (repo->priv != NULL)
