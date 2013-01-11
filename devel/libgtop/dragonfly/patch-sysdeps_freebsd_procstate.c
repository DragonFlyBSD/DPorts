--- sysdeps/freebsd/procstate.c.orig	2011-03-14 23:08:03.000000000 +0100
+++ sysdeps/freebsd/procstate.c	2013-01-11 20:58:09.000000000 +0100
@@ -64,6 +64,37 @@
 		return;
 	}
 
+#ifdef __DragonFly__
+	buf->uid = pinfo[0].kp_ruid;
+	buf->gid = pinfo[0].kp_rgid;
+
+	g_strlcpy (buf->cmd, pinfo[0].kp_comm, sizeof (buf->cmd));
+
+	switch (pinfo[0].kp_stat) {
+		case SACTIVE:
+			switch (pinfo[0].kp_lwp.kl_stat) {
+				case LSRUN:
+					buf->state = GLIBTOP_PROCESS_RUNNING;
+					break;
+				case LSSLEEP:
+					buf->state = GLIBTOP_PROCESS_INTERRUPTIBLE;
+					break;
+				case LSSTOP:
+					buf->state = GLIBTOP_PROCESS_STOPPED;
+					break;
+				default:
+					buf->state = 0;
+					break;
+			}
+		case SZOMB:
+			buf->state = GLIBTOP_PROCESS_ZOMBIE;
+			break;
+		case SIDL:
+		default:
+			buf->state = 0;
+			break;
+	}
+#else
 	buf->uid = pinfo[0].ki_ruid;
 	buf->gid = pinfo[0].ki_rgid;
 
@@ -91,6 +122,7 @@
 			buf->state = 0;
 			break;
 	}
+#endif
 
 	buf->flags = _glibtop_sysdeps_proc_state;
 }
