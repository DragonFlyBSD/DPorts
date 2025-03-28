--- libpkg/lua_scripts.c.orig	Mon Nov 13 13:48:44 2023
+++ libpkg/lua_scripts.c	Wed Mar
@@ -33,6 +33,12 @@
 #include <sys/types.h>
 #include <sys/wait.h>
 
+#ifdef __DragonFly__
+#include <sys/types.h>
+#include <sys/procctl.h>
+#include <sys/wait.h>
+#endif
+
 #include <errno.h>
 #include <poll.h>
 #include <xstring.h>
@@ -54,9 +60,14 @@ pkg_lua_script_run(struct pkg * const pkg, pkg_lua_scr
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
 	int cur_pipe[2];
 	char *line = NULL;
 
@@ -168,9 +179,15 @@ cleanup:
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
