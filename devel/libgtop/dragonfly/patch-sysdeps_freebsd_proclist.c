--- sysdeps/freebsd/proclist.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/proclist.c	2013-01-11 16:29:57.000000000 +0100
@@ -92,6 +92,56 @@
 
 	pids = g_array_sized_new (FALSE, FALSE, sizeof (pid_t), len);
 
+#ifdef __DragonFly__
+	for (i = 0; i < len; i++) {
+		pid_t pid;
+
+		pid = (pid_t) pinfo[i].kp_pid;
+
+		switch (which & GLIBTOP_KERN_PROC_MASK) {
+			case GLIBTOP_KERN_PROC_ALL:
+				break;
+			case GLIBTOP_KERN_PROC_PID:
+				if ((pid_t) arg != pid)
+					continue;
+				break;
+			case GLIBTOP_KERN_PROC_UID:
+				if ((uid_t) arg != pinfo[i].kp_ruid)
+					continue;
+				break;
+			case GLIBTOP_KERN_PROC_PGRP:
+				if ((pid_t) arg != pinfo[i].kp_pgid)
+					continue;
+				break;
+			case GLIBTOP_KERN_PROC_SESSION:
+				if ((pid_t) arg != pinfo[i].kp_sid)
+					continue;
+				break;
+			case GLIBTOP_KERN_PROC_TTY:
+				if ((dev_t) arg != pinfo[i].kp_tdev)
+					continue;
+				break;
+			case GLIBTOP_KERN_PROC_RUID:
+				if ((uid_t) arg != pinfo[i].kp_ruid)
+					continue;
+				break;
+			}
+
+		if (which & GLIBTOP_EXCLUDE_NOTTY)
+			if (pinfo[i].kp_tdev == (dev_t) -1) continue;
+
+		if (which & GLIBTOP_EXCLUDE_IDLE) {
+			glibtop_get_proc_state_p (server, &procstate, pid);
+			if (procstate.flags & (1L << GLIBTOP_PROC_STATE_STATE))
+				if (procstate.state != GLIBTOP_PROCESS_RUNNING) continue;
+		}
+
+		if (which & GLIBTOP_EXCLUDE_SYSTEM)
+			if (pinfo[i].kp_ruid == (uid_t) 0) continue;
+
+		g_array_append_val (pids, pid);
+	}
+#else
 	for (i = 0; i < len; i++) {
 		pid_t pid;
 
@@ -140,6 +190,7 @@
 
 		g_array_append_val (pids, pid);
 	}
+#endif
 
 	g_free (pinfo);
 
