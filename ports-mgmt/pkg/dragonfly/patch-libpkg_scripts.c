--- libpkg/scripts.c.orig	Fri Mar 28 05:46:30 2025
+++ libpkg/scripts.c	Tue Apr
@@ -71,9 +71,14 @@ pkg_script_run(struct pkg * const pkg, pkg_script type
 #ifdef PROC_REAP_KILL
 	bool do_reap;
 	pid_t mypid;
+#if defined(__FreeBSD__)
 	struct procctl_reaper_status info;
 	struct procctl_reaper_kill killemall;
+#elif defined(__DragonFly__)
+	struct reaper_status info;
+	struct reaper_kill killemall;	
 #endif
+#endif
 	struct {
 		const char * const arg;
 		const pkg_script b;
@@ -257,11 +262,21 @@ cleanup:
 		return (ret);
 
 	procctl(P_PID, mypid, PROC_REAP_STATUS, &info);
+#if defined(__FreeBSD__)
 	if (info.rs_children != 0) {
 		killemall.rk_sig = SIGKILL;
 		killemall.rk_flags = 0;
+#elif defined(__DragonFly__)
+	if (info.refs != 0) {
+		killemall.signal = SIGKILL;
+		killemall.flags = 0;
+#endif
 		if (procctl(P_PID, mypid, PROC_REAP_KILL, &killemall) != 0) {
+#if defined(__FreeBSD__)
 			if (errno != ESRCH || killemall.rk_killed != 0 ) {
+#else
+			if (errno != ESRCH || killemall.killed != 0 ) {
+#endif
 				pkg_errno("%s", "Fail to kill all processes");
 			}
 		}
