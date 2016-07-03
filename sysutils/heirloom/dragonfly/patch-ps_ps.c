--- ps/ps.c.intermediate	2016-06-27 15:13:24.000000000 +0300
+++ ps/ps.c
@@ -91,6 +91,7 @@ static const char cacheid[] = "@(#)/tmp/
 #define PS_SWAPPINGOUT P_SWAPPINGOUT
 #endif
 #if defined (__DragonFly__)
+#define SRUN	SACTIVE
 #endif	/* __DragonFly__ */
 #elif defined (__hpux)
 #include	<mntent.h>
@@ -2155,8 +2156,8 @@ getproc_kvm(struct proc *p)
 	}
 	if ((kp = kvm_getprocs(kv, KERN_PROC_PID, p->p_pid, &c)) == NULL)
 		return OKAY;
-#if (__FreeBSD__) < 5 || defined (__DragonFly__)
-	switch (kp->kp_proc.p_stat) {
+#if defined (__DragonFly__)
+	switch (kp->kp_stat) {
 #else	/* __FreeBSD__ >= 5 */
 	switch (kp->ki_stat) {
 #endif	/* __FreeBSD__ >= 5 */
@@ -2166,6 +2167,7 @@ getproc_kvm(struct proc *p)
 	case SRUN:
 		p->p_state[0] = 'R';
 		break;
+#ifndef __DragonFly__
 #if defined (SWAIT) || defined (SLOCK)
 #ifdef	SWAIT
 	case SWAIT:
@@ -2179,6 +2181,7 @@ getproc_kvm(struct proc *p)
 	case SSLEEP:
 		p->p_state[0] = 'S';
 		break;
+#endif
 	case SSTOP:
 		p->p_state[0] = 'T';
 		break;
@@ -2187,12 +2190,10 @@ getproc_kvm(struct proc *p)
 		break;
 	}
 	p->p_lstate[0] = p->p_state[0];
-#if (__FreeBSD__) < 5 || defined (__DragonFly__)
-#define	ki_flag		kp_proc.p_flag
-#define	ki_oncpu	kp_proc.p_oncpu
-#define	ki_wchan	kp_proc.p_wchan
-#define	ki_pri		kp_proc.p_pri
-#endif	/* __FreeBSD__ < 5 */
+#if defined (__DragonFly__)
+#define	ki_flag		kp_flags
+#define	ki_pri		kp_lwp.kl_prio
+#endif	/* __DragonFly__ */
 	if (kp->ki_flag & P_SYSTEM)
 		p->p_flag |= FL_SYS;
 	if (kp->ki_flag & P_TRACED)
