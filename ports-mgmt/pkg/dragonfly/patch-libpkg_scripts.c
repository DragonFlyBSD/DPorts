--- libpkg/scripts.c.orig	Mon Nov 13 13:48:44 2023
+++ libpkg/scripts.c	Wed Mar
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
@@ -250,16 +255,21 @@ cleanup:
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
 			pkg_errno("%s", "Fail to kill all processes");
 		}
 	}
 	procctl(P_PID, mypid, PROC_REAP_RELEASE, NULL);
 #endif
-
 	return (ret);
 }
 
