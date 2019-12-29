--- sysdeps/freebsd/proclist.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/proclist.c
@@ -94,7 +94,7 @@ glibtop_get_proclist_p (glibtop *server,
 	for (i = 0; i < len; i++) {
 		pid_t pid;
 
-		pid = (pid_t) pinfo[i].ki_pid;
+		pid = (pid_t) pinfo[i].kp_pid;
 
 		/* If a process has many threads, kern.proc.all reports multiple
 		   times the same pid. So don't look twice at the same pid.
@@ -115,41 +115,41 @@ glibtop_get_proclist_p (glibtop *server,
 					continue;
 				break;
 			case GLIBTOP_KERN_PROC_UID:
-				if ((uid_t) arg != pinfo[i].ki_ruid)
+				if ((uid_t) arg != pinfo[i].kp_ruid)
 					continue;
 				break;
 			case GLIBTOP_KERN_PROC_PGRP:
-				if ((pid_t) arg != pinfo[i].ki_pgid)
+				if ((pid_t) arg != pinfo[i].kp_pgid)
 					continue;
 				break;
 			case GLIBTOP_KERN_PROC_SESSION:
-				if ((pid_t) arg != pinfo[i].ki_sid)
+				if ((pid_t) arg != pinfo[i].kp_sid)
 					continue;
 				break;
 			case GLIBTOP_KERN_PROC_TTY:
-				if ((dev_t) arg != pinfo[i].ki_tdev)
+				if ((dev_t) arg != pinfo[i].kp_tdev)
 					continue;
 				break;
 			case GLIBTOP_KERN_PROC_RUID:
-				if ((uid_t) arg != pinfo[i].ki_ruid)
+				if ((uid_t) arg != pinfo[i].kp_ruid)
 					continue;
 				break;
 			}
 
 		if (which & GLIBTOP_EXCLUDE_NOTTY)
-			if (pinfo[i].ki_tdev == (dev_t) -1) continue;
+			if (pinfo[i].kp_tdev == (dev_t) -1) continue;
 
 		if (which & GLIBTOP_EXCLUDE_IDLE) {
 			glibtop_get_proc_state_p (server, &procstate, pid);
 			if (procstate.flags & (1L << GLIBTOP_PROC_STATE_STATE))
 				if (procstate.state != GLIBTOP_PROCESS_RUNNING) continue;
 
-			if (pinfo[i].ki_ppid == 0 && !strcmp(pinfo[i].ki_comm, "idle"))
+			if (pinfo[i].kp_ppid == 0 && !strcmp(pinfo[i].kp_comm, "idle"))
 				continue;
 		}
 
 		if (which & GLIBTOP_EXCLUDE_SYSTEM)
-			if (pinfo[i].ki_ruid == (uid_t) 0) continue;
+			if (pinfo[i].kp_ruid == (uid_t) 0) continue;
 
 		g_array_append_val (pids, pid);
 	}
