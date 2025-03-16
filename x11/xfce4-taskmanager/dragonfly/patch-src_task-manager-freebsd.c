--- src/task-manager-freebsd.c.orig	Wed Jan 24 14:04:31 2024
+++ src/task-manager-freebsd.c	Sun Mar
@@ -13,9 +13,9 @@
 #include <config.h>
 #endif
 
+#include <sys/param.h>
 #include <kvm.h>
 #include <sys/types.h>
-#include <sys/param.h>
 #include <sys/sysctl.h>
 #include <sys/user.h>
 #include <sys/proc.h>
@@ -23,7 +23,7 @@
 #include <paths.h>
 #include <unistd.h>
 #include <string.h>
-#if defined(__FreeBSD_version) && __FreeBSD_version >= 900044
+#if defined(__FreeBSD_version) && __FreeBSD_version >= 900044 || defined(__DragonFly_)
 #include <sys/vmmeter.h>
 #endif
 
@@ -31,6 +31,7 @@
 
 #include "task-manager.h"
 
+#ifndef __DragonFly__
 static const gchar ki_stat2state[] = {
 	' ', /* - */
 	'R', /* SIDL */
@@ -41,6 +42,7 @@ static const gchar ki_stat2state[] = {
 	'W', /* SWAIT */
 	'L' /* SLOCK */
 };
+#endif
 
 
 static guint64
@@ -141,20 +143,38 @@ get_task_details (struct kinfo_proc *kp, Task *task)
 	int i, oid[4];
 
 	memset(task, 0, sizeof(Task));
+#ifdef __DragonFly__
+	task->pid = kp->kp_pid;
+	task->ppid = kp->kp_ppid;
+	task->cpu_user = 100.0f * ((float)kp->kp_lwp.kl_pctcpu / FSCALE);
+#else
 	task->pid = kp->ki_pid;
 	task->ppid = kp->ki_ppid;
 	task->cpu_user = 100.0f * ((float)kp->ki_pctcpu / FSCALE);
+#endif
 	task->cpu_system = 0.0f;
+#ifdef __DragonFly__
+	task->vsz = kp->kp_vm_map_size;
+	task->rss = ((guint64)kp->kp_vm_rssize * (guint64)getpagesize ());
+	task->uid = kp->kp_uid;
+	task->prio = (gshort)kp->kp_nice;
+	g_strlcpy (task->name, kp->kp_comm, sizeof(task->name));
+#else
 	task->vsz = kp->ki_size;
 	task->rss = ((guint64)kp->ki_rssize * (guint64)getpagesize ());
 	task->uid = kp->ki_uid;
 	task->prio = kp->ki_nice;
 	g_strlcpy (task->name, kp->ki_comm, sizeof(task->name));
+#endif
 
 	oid[0] = CTL_KERN;
 	oid[1] = KERN_PROC;
 	oid[2] = KERN_PROC_ARGS;
+#ifdef __DragonFly__
+	oid[3] = kp->kp_pid;
+#else
 	oid[3] = kp->ki_pid;
+#endif
 	bufsz = sizeof(buf);
 	memset(buf, 0, sizeof(buf));
 	if (sysctl(oid, 4, buf, &bufsz, 0, 0) == -1) {
@@ -181,10 +201,41 @@ get_task_details (struct kinfo_proc *kp, Task *task)
 	}
 	else
 	{
+#ifdef __DragonFly__
+		g_strlcpy (task->cmdline, kp->kp_comm, sizeof(task->cmdline));
+#else
 		g_strlcpy (task->cmdline, kp->ki_comm, sizeof(task->cmdline));
+#endif
 	}
 
 	i = 0;
+#ifdef __DragonFly__
+	switch (kp->kp_stat)
+	{
+		case SACTIVE:
+			switch (kp->kp_lwp.kl_stat) {
+			case LSRUN:
+				task->state[i] = 'R';
+				break;
+			case LSSLEEP:
+				task->state[i] = 'S';
+				break;
+			case LSSTOP:
+				task->state[i] = 'T';
+				break;
+			default:
+				task->state[i] = '?';
+				break;
+		}
+		case SZOMB:
+			task->state[i] = 'Z';
+			break;
+		case SIDL:
+			task->state[i] = 'R';
+		default:
+			task->state[i] = '?';
+	}
+#else
 	switch (kp->ki_stat)
 	{
 		case SIDL:
@@ -206,13 +257,33 @@ get_task_details (struct kinfo_proc *kp, Task *task)
 		default:
 			task->state[i] = '?';
 	}
+#endif
 	i++;
+#ifndef __DragonFly__
 	if (!(kp->ki_sflag & PS_INMEM))
 		task->state[i++] = 'W';
+#endif
+#ifdef __DragonFly__
+	if (kp->kp_nice < NZERO)
+		task->state[i++] = '<';
+	else if (kp->kp_nice > NZERO)
+		task->state[i++] = 'N';
+#else
 	if (kp->ki_nice < NZERO)
 		task->state[i++] = '<';
 	else if (kp->ki_nice > NZERO)
 		task->state[i++] = 'N';
+#endif
+#ifdef __DragonFly__
+	if (kp->kp_flags & P_TRACED)
+		task->state[i++] = 'X';
+	if (kp->kp_flags & P_WEXIT && kp->kp_stat != SZOMB)
+		task->state[i++] = 'E';
+	if (kp->kp_flags & P_PPWAIT)
+		task->state[i++] = 'V';
+	if ((kp->kp_flags & P_SYSTEM) || kp->kp_lock > 0)
+		task->state[i++] = 'L';
+#else
 	if (kp->ki_flag & P_TRACED)
 		task->state[i++] = 'X';
 	if (kp->ki_flag & P_WEXIT && kp->ki_stat != SZOMB)
@@ -221,12 +292,20 @@ get_task_details (struct kinfo_proc *kp, Task *task)
 		task->state[i++] = 'V';
 	if ((kp->ki_flag & P_SYSTEM) || kp->ki_lock > 0)
 		task->state[i++] = 'L';
+#endif
+#ifdef __DragonFly__
+	if ((kp->kp_flags & P_CONTROLT) && kp->kp_pgid == kp->kp_tpgid)
+		task->state[i++] = '+';
+	if (kp->kp_flags & P_JAILED)
+		task->state[i++] = 'J';
+#else
 	if (kp->ki_kiflag & KI_SLEADER)
 		task->state[i++] = 's';
 	if ((kp->ki_flag & P_CONTROLT) && kp->ki_pgid == kp->ki_tpgid)
 		task->state[i++] = '+';
 	if (kp->ki_flag & P_JAILED)
 		task->state[i++] = 'J';
+#endif
 
 	return TRUE;
 }
@@ -242,7 +321,11 @@ get_task_list (GArray *task_list)
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
@@ -278,7 +361,11 @@ pid_is_sleeping (GPid pid)
 		return FALSE;
 	}
 
+#ifdef __DragonFly__
+	ret = (kp->kp_stat == SSTOP);
+#else
 	ret = (kp->ki_stat == SSTOP);
+#endif
 	kvm_close (kd);
 
 	return ret;
