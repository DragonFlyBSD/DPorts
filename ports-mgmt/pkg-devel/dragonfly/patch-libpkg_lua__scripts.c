--- libpkg/lua_scripts.c.orig	2026-11-08 00:00:00 UTC
+++ libpkg/lua_scripts.c
@@ -32,8 +32,13 @@
 #ifdef PROC_REAP_KILL
 	bool do_reap;
 	pid_t mypid;
+#if defined(__FreeBSD__)
 	struct procctl_reaper_status info;
 	struct procctl_reaper_kill killemall;
+#elif defined(__DragonFly__)
+	struct reaper_status info;
+	struct reaper_kill killemall;
+#endif
 #endif
 	int cur_pipe[2];
 	char *line = NULL;
@@ -153,9 +158,15 @@
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
 			pkg_errno("%s", "Failed to kill all processes");
 		}
