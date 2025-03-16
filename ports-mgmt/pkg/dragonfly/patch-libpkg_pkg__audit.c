--- libpkg/pkg_audit.c.orig	2024-05-22 14:56:17 UTC
+++ libpkg/pkg_audit.c
@@ -207,12 +207,12 @@ pkg_audit_fetch(const char *src, const c
 	struct stat st;
 	struct pkg_audit_extract_cbdata cbdata;
 	int dfd = -1;
-	struct timeval tm[2] = {
+	struct timespec ts[2] = {
 		{
-		.tv_usec = 0
+		.tv_nsec = 0
 		},
 		{
-		.tv_usec = 0
+		.tv_nsec = 0
 		}
 	};
 
@@ -272,9 +272,9 @@ pkg_audit_fetch(const char *src, const c
 
 	/* Call sandboxed */
 	retcode = pkg_emit_sandbox_call(pkg_audit_sandboxed_extract, fd, &cbdata);
-	tm[0].tv_sec = st.st_mtim.tv_sec;
-	tm[1].tv_sec = st.st_mtim.tv_sec;
-	futimes(outfd, tm);
+	ts[0].tv_sec = st.st_mtim.tv_sec;
+	ts[1].tv_sec = st.st_mtim.tv_sec;
+	futimens(outfd, ts);
 
 cleanup:
 	unlink(tmp);
