--- src/exec.c.orig	2014-09-23 16:40:15 UTC
+++ src/exec.c
@@ -890,7 +890,7 @@ handler(int s, siginfo_t *info, void *co
      * kill itself.  For example, this can happen with some versions of
      * reboot that call kill(-1, SIGTERM) to kill all other processes.
      */
-    if (USER_SIGNALED(info)) {
+    if (s != SIGCHLD && USER_SIGNALED(info)) {
 	pid_t si_pgrp = getpgid(info->si_pid);
 	if (si_pgrp != (pid_t)-1) {
 	    if (si_pgrp == ppgrp || si_pgrp == cmnd_pid)
