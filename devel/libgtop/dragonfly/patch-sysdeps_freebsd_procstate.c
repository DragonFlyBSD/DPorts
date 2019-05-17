--- sysdeps/freebsd/procstate.c.orig	2016-11-27 18:05:03 UTC
+++ sysdeps/freebsd/procstate.c
@@ -59,11 +59,46 @@ glibtop_get_proc_state_p (glibtop *serve
 		return;
 	}
 
+#ifdef __DragonFly__
+	buf->uid = pinfo[0].kp_ruid;
+	buf->gid = pinfo[0].kp_rgid;
+#else
 	buf->uid = pinfo[0].ki_ruid;
 	buf->gid = pinfo[0].ki_rgid;
+#endif
 
+#ifdef __DragonFly__
+	g_strlcpy (buf->cmd, pinfo[0].kp_comm, sizeof (buf->cmd));
+#else
 	g_strlcpy (buf->cmd, pinfo[0].ki_comm, sizeof (buf->cmd));
+#endif
 
+#ifdef __DragonFly__
+	switch (pinfo[0].kp_stat) {
+	case SACTIVE:
+		switch (pinfo[0].kp_lwp.kl_stat) {
+		case LSRUN:
+			buf->state = GLIBTOP_PROCESS_RUNNING;
+			break;
+		case LSSLEEP:
+			buf->state = GLIBTOP_PROCESS_INTERRUPTIBLE;
+			break;
+		case LSSTOP:
+			buf->state = GLIBTOP_PROCESS_STOPPED;
+			break;
+		default:
+			buf->state = 0;
+			break;
+		}
+	case SZOMB:
+		buf->state = GLIBTOP_PROCESS_ZOMBIE;
+		break;
+	case SIDL:
+	default:
+		buf->state = 0;
+	break;
+	}
+#else
 	switch (pinfo[0].ki_stat) {
 		case SRUN:
 			buf->state = GLIBTOP_PROCESS_RUNNING;
@@ -86,6 +121,7 @@ glibtop_get_proc_state_p (glibtop *serve
 			buf->state = 0;
 			break;
 	}
+#endif
 
 	buf->flags = _glibtop_sysdeps_proc_state;
 }
