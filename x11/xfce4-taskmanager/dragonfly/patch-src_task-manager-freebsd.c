--- src/task-manager-freebsd.c.orig	2025-05-21 07:00:22 UTC
+++ src/task-manager-freebsd.c
@@ -15,6 +15,11 @@
 
 #include "task-manager.h"
 
+#ifdef __DragonFly__
+/* kvm.h needs sys/param.h, and sys/user.h must precede sys/proc.h. */
+#include <sys/param.h>
+#include <sys/user.h>
+#endif
 #include <fcntl.h>
 #include <kvm.h>
 #include <paths.h>
@@ -30,6 +35,7 @@
 #include <sys/vmmeter.h>
 #endif
 
+#ifndef __DragonFly__
 static const gchar ki_stat2state[] = {
 	' ', /* - */
 	'R', /* SIDL */
@@ -40,6 +46,7 @@
 	'W', /* SWAIT */
 	'L' /* SLOCK */
 };
+#endif
 
 
 static guint64
@@ -140,6 +147,17 @@
 	int i, oid[4];
 
 	memset (task, 0, sizeof (Task));
+#ifdef __DragonFly__
+	task->pid = kp->kp_pid;
+	task->ppid = kp->kp_ppid;
+	task->cpu_user = 100.0f * ((float)kp->kp_lwp.kl_pctcpu / FSCALE);
+	task->cpu_system = 0.0f;
+	task->vsz = kp->kp_vm_map_size;
+	task->rss = ((guint64)kp->kp_vm_rssize * (guint64)getpagesize ());
+	task->uid = kp->kp_uid;
+	task->prio = kp->kp_nice;
+	g_strlcpy (task->name, kp->kp_comm, sizeof (task->name));
+#else
 	task->pid = kp->ki_pid;
 	task->ppid = kp->ki_ppid;
 	task->cpu_user = 100.0f * ((float)kp->ki_pctcpu / FSCALE);
@@ -149,11 +167,16 @@
 	task->uid = kp->ki_uid;
 	task->prio = kp->ki_nice;
 	g_strlcpy (task->name, kp->ki_comm, sizeof (task->name));
+#endif
 
 	oid[0] = CTL_KERN;
 	oid[1] = KERN_PROC;
 	oid[2] = KERN_PROC_ARGS;
+#ifdef __DragonFly__
+	oid[3] = kp->kp_pid;
+#else
 	oid[3] = kp->ki_pid;
+#endif
 	bufsz = sizeof (buf);
 	memset (buf, 0, sizeof (buf));
 	if (sysctl (oid, 4, buf, &bufsz, 0, 0) == -1)
@@ -186,10 +209,64 @@
 	}
 	else
 	{
+#ifdef __DragonFly__
+		g_strlcpy (task->cmdline, kp->kp_comm, sizeof (task->cmdline));
+#else
 		g_strlcpy (task->cmdline, kp->ki_comm, sizeof (task->cmdline));
+#endif
 	}
 
 	i = 0;
+#ifdef __DragonFly__
+	/* As DragonFly's ps(1): the process state, refined by its lwp's. */
+	switch (kp->kp_stat)
+	{
+		case SSTOP:
+			task->state[i] = 'T';
+			break;
+
+		case SACTIVE:
+			switch (kp->kp_lwp.kl_stat)
+			{
+				case LSRUN:
+					task->state[i] = 'R';
+					break;
+				case LSSLEEP:
+					task->state[i] = (kp->kp_lwp.kl_flags & LWP_SINTR) ? 'S' : 'D';
+					break;
+				case LSSTOP:
+					task->state[i] = 'T';
+					break;
+				default:
+					task->state[i] = '?';
+			}
+			break;
+
+		case SZOMB:
+			task->state[i] = 'Z';
+			break;
+
+		default:
+			task->state[i] = '?';
+	}
+	i++;
+	if (kp->kp_nice < NZERO)
+		task->state[i++] = '<';
+	else if (kp->kp_nice > NZERO)
+		task->state[i++] = 'N';
+	if (kp->kp_flags & P_TRACED)
+		task->state[i++] = 'X';
+	if (kp->kp_flags & P_WEXIT && kp->kp_stat != SZOMB)
+		task->state[i++] = 'E';
+	if (kp->kp_flags & P_PPWAIT)
+		task->state[i++] = 'V';
+	if (kp->kp_auxflags & KI_SLEADER)
+		task->state[i++] = 's';
+	if ((kp->kp_flags & P_CONTROLT) && kp->kp_pgid == kp->kp_tpgid)
+		task->state[i++] = '+';
+	if (kp->kp_flags & P_JAILED)
+		task->state[i++] = 'J';
+#else
 	switch (kp->ki_stat)
 	{
 		case SIDL:
@@ -232,6 +309,7 @@
 		task->state[i++] = '+';
 	if (kp->ki_flag & P_JAILED)
 		task->state[i++] = 'J';
+#endif
 
 	return TRUE;
 }
@@ -247,7 +325,11 @@
 	if ((kd = kvm_openfiles (_PATH_DEVNULL, _PATH_DEVNULL, NULL, O_RDONLY, NULL)) == NULL)
 		return FALSE;
 
+#ifdef __DragonFly__
+	if ((kp = kvm_getprocs (kd, KERN_PROC_ALL, 0, &cnt)) == NULL)
+#else
 	if ((kp = kvm_getprocs (kd, KERN_PROC_PROC, 0, &cnt)) == NULL)
+#endif
 	{
 		kvm_close (kd);
 		return FALSE;
@@ -283,7 +365,11 @@
 		return FALSE;
 	}
 
+#ifdef __DragonFly__
+	ret = (kp->kp_stat == SSTOP);
+#else
 	ret = (kp->ki_stat == SSTOP);
+#endif
 	kvm_close (kd);
 
 	return ret;
