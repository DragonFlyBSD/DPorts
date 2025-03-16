--- libpkg/pkg_repo_create.c.orig	2024-05-22 14:56:17 UTC
+++ libpkg/pkg_repo_create.c
@@ -677,27 +677,27 @@ pkg_repo_create_pack_and_sign(struct pkg
 	pkg_emit_progress_tick(nfile++, files_to_pack);
 
 	if (fstatat(prc->ofd, "meta.conf", &st, 0) == 0) {
-		struct timeval ftimes[2] = {
+		struct timespec ts[2] = {
 			{
-			.tv_sec = st.st_mtime,
-			.tv_usec = 0
+				.tv_sec = st.st_mtime,
+				.tv_nsec = 0,
 			},
 			{
-			.tv_sec = st.st_mtime,
-			.tv_usec = 0
-			}
+				.tv_sec = st.st_mtime,
+				.tv_nsec = 0,
+			},
 		};
 		snprintf(repo_archive, sizeof(repo_archive), "%s.pkg",
 		    prc->meta->manifests_archive);
-		futimesat(prc->ofd, repo_archive, ftimes);
+		utimensat(prc->ofd, repo_archive, ts, 0);
 		if (prc->filelist) {
 			snprintf(repo_archive, sizeof(repo_archive),
 			    "%s.pkg", prc->meta->filesite_archive);
-			futimesat(prc->ofd, repo_archive, ftimes);
+			utimensat(prc->ofd, repo_archive, ts, 0);
 		}
 		snprintf(repo_archive, sizeof(repo_archive), "%s.pkg",
 		    prc->meta->data_archive);
-		futimesat(prc->ofd, repo_archive, ftimes);
+		utimensat(prc->ofd, repo_archive, ts, 0);
 	}
 
 cleanup:
