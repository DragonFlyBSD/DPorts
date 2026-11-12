--- libpkg/utils.c.orig	2026-11-12 22:54:42 UTC
+++ libpkg/utils.c
@@ -1631,8 +1631,13 @@ pkg_reaper_release(struct pkg_reaper *r)
 pkg_reaper_release(struct pkg_reaper *r)
 {
 #ifdef PROC_REAP_KILL
+#if defined(__DragonFly__)
+	struct reaper_status info;
+	struct reaper_kill killemall;
+#else
 	struct procctl_reaper_status info;
 	struct procctl_reaper_kill killemall;
+#endif
 
 	if (!r->do_reap)
 		return;
@@ -1641,11 +1646,19 @@ pkg_reaper_release(struct pkg_reaper *r)
 	memset(&killemall, 0, sizeof(killemall));
 
 	procctl(P_PID, r->mypid, PROC_REAP_STATUS, &info);
+#if defined(__DragonFly__)
+	if (info.refs != 0) {
+		killemall.signal = SIGKILL;
+		killemall.flags = 0;
+		if (procctl(P_PID, r->mypid, PROC_REAP_KILL, &killemall) != 0) {
+			if (errno != ESRCH || killemall.killed != 0) {
+#else
 	if (info.rs_children != 0) {
 		killemall.rk_sig = SIGKILL;
 		killemall.rk_flags = 0;
 		if (procctl(P_PID, r->mypid, PROC_REAP_KILL, &killemall) != 0) {
 			if (errno != ESRCH || killemall.rk_killed != 0) {
+#endif
 				pkg_errno("%s", "Failed to kill all processes");
 			}
 		}
