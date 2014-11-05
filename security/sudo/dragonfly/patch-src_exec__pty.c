--- src/exec_pty.c.orig	2014-09-23 16:40:17 UTC
+++ src/exec_pty.c
@@ -147,7 +147,7 @@ mon_handler(int s, siginfo_t *info, void
      * itself.  This can happen with, e.g., BSD-derived versions of
      * reboot that call kill(-1, SIGTERM) to kill all other processes.
      */
-    if (USER_SIGNALED(info)) {
+    if (s != SIGCHLD && USER_SIGNALED(info)) {
 	pid_t si_pgrp = getpgid(info->si_pid);
 	if (si_pgrp != (pid_t)-1) {
 	    if (si_pgrp == cmnd_pgrp)
