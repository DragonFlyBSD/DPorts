--- src/libs/zbxsysinfo/dragonfly/proc.c.orig	2022-12-04 12:17:06 UTC
+++ src/libs/zbxsysinfo/dragonfly/proc.c
@@ -27,66 +27,40 @@
 #	include <jail.h>
 #endif
 
-#if (__FreeBSD_version) < 500000
-#	define ZBX_COMMLEN		MAXCOMLEN
-#	define ZBX_PROC_PID		kp_proc.p_pid
-#	define ZBX_PROC_PPID		kp_eproc.e_ppid
-#	define ZBX_PROC_COMM		kp_proc.p_comm
-#	define ZBX_PROC_STAT		kp_proc.p_stat
-#	define ZBX_PROC_TSIZE		kp_eproc.e_vm.vm_tsize
-#	define ZBX_PROC_DSIZE		kp_eproc.e_vm.vm_dsize
-#	define ZBX_PROC_SSIZE		kp_eproc.e_vm.vm_ssize
-#	define ZBX_PROC_RSSIZE		kp_eproc.e_vm.vm_rssize
-#	define ZBX_PROC_VSIZE		kp_eproc.e_vm.vm_map.size
-#	define ZBX_PROC_NUMTHREADS	kp_proc.p_nthreads
-#	define ZBX_PROC_MAJFLT		kp_eproc.e_pstats.p_ru.ru_majflt
-#	define ZBX_PROC_SWAP		kp_eproc.e_pstats.p_ru.ru_nswap
-#	define ZBX_PROC_INBLOCK		kp_eproc.e_pstats.p_ru.ru_inblock
-#	define ZBX_PROC_OUBLOCK		kp_eproc.e_pstats.p_ru.ru_oublock
-#	define ZBX_PROC_NVCSW		kp_eproc.e_pstats.p_ru.ru_nvcsw
-#	define ZBX_PROC_NIVCSW		kp_eproc.e_pstats.p_ru.ru_nivcsw
-#	define ZBX_PROC_UTIME		kp_eproc.e_pstats.p_ru.ru_utime.tv_sec
-#	define ZBX_PROC_STIME		kp_eproc.e_pstats.p_ru.ru_stime.tv_sec
-#	define ZBX_PROC_UID		kp_proc.p_ruid
-#	define ZBX_PROC_GID		kp_proc.p_rgid
-#else
-#	define ZBX_COMMLEN		COMMLEN
-#	define ZBX_PROC_PID		ki_pid
-#	define ZBX_PROC_PPID		ki_ppid
-#	define ZBX_PROC_JID		ki_jid
-#	define ZBX_PROC_TID		ki_tid
-#	define ZBX_PROC_TNAME		ki_ocomm
-#	define ZBX_PROC_COMM		ki_comm
-#	define ZBX_PROC_STAT		ki_stat
-#	define ZBX_PROC_TSIZE		ki_tsize
-#	define ZBX_PROC_DSIZE		ki_dsize
-#	define ZBX_PROC_SSIZE		ki_ssize
-#	define ZBX_PROC_RSSIZE		ki_rssize
-#	define ZBX_PROC_VSIZE		ki_size
-#	define ZBX_PROC_NUMTHREADS	ki_numthreads
-#	define ZBX_PROC_MAJFLT		ki_rusage.ru_majflt
-#	define ZBX_PROC_SWAP		ki_rusage.ru_nswap
-#	define ZBX_PROC_INBLOCK		ki_rusage.ru_inblock
-#	define ZBX_PROC_OUBLOCK		ki_rusage.ru_oublock
-#	define ZBX_PROC_NVCSW		ki_rusage.ru_nvcsw
-#	define ZBX_PROC_NIVCSW		ki_rusage.ru_nivcsw
-#	define ZBX_PROC_UTIME		ki_rusage.ru_utime.tv_sec
-#	define ZBX_PROC_STIME		ki_rusage.ru_stime.tv_sec
-#	define ZBX_PROC_UID		ki_ruid
-#	define ZBX_PROC_GID		ki_rgid
-#endif
+#define ZBX_COMMLEN	COMMLEN
+#define ZBX_PROC_PID	kp_pid
+#define ZBX_PROC_PPID	kp_ppid
+#define ZBX_PROC_COMM	kp_comm
+#define ZBX_PROC_STAT	kp_stat
+#define ZBX_PROC_TSIZE	kp_vm_tsize
+#define ZBX_PROC_DSIZE	kp_vm_dsize
+#define ZBX_PROC_SSIZE	kp_vm_ssize
+#define ZBX_PROC_RSSIZE	kp_vm_rssize
+#define ZBX_PROC_VSIZE	kp_vm_map_size
+#define ZBX_PROC_UID	kp_ruid
+#define ZBX_PROC_GID	kp_rgid
+#define ZBX_PROC_FLAG 	kp_flags
+#define ZBX_PROC_UTIME	kp_ru.ru_utime.tv_sec
+#define ZBX_PROC_STIME	kp_ru.ru_stime.tv_sec
+#define ZBX_PROC_NUMTHREADS	kp_nthreads
+#define ZBX_PROC_INBLOCK	kp_ru.ru_inblock
+#define ZBX_PROC_OUBLOCK	kp_ru.ru_oublock
+#define ZBX_PROC_NVCSW		kp_ru.ru_nvcsw
+#define ZBX_PROC_NIVCSW		kp_ru.ru_nivcsw
+#define ZBX_PROC_MAJFLT		kp_ru.ru_majflt
+#define ZBX_PROC_SWAP		kp_ru.ru_nswap
 
-#if (__FreeBSD_version) < 500000
-#	define ZBX_PROC_FLAG 	kp_proc.p_flag
-#	define ZBX_PROC_MASK	P_INMEM
-#elif (__FreeBSD_version) < 700000
-#	define ZBX_PROC_FLAG 	ki_sflag
-#	define ZBX_PROC_MASK	PS_INMEM
-#else
-#	define ZBX_PROC_TDFLAG	ki_tdflags
-#	define ZBX_PROC_FLAG	ki_flag
-#	define ZBX_PROC_MASK	P_INMEM
-#endif
+#define ZBX_PROC_FLAGS	kp_flags
+
+static int	lwp_status(struct kinfo_proc proc, int stat)
+{
+	if (proc.kp_stat == SACTIVE) {
+		if (proc.kp_lwp.kl_stat == stat)
+			return 1;
+	}
+
+	return 0;
+}
 
 typedef struct
 {
@@ -201,11 +175,7 @@ int     PROC_MEM(AGENT_REQUEST *request,
 	unsigned int	mibs;
 	zbx_uint64_t	mem_size = 0, byte_value = 0;
 	double		pct_size = 0.0, pct_value = 0.0;
-#if (__FreeBSD_version) < 500000
-	int		mem_pages;
-#else
 	unsigned long	mem_pages;
-#endif
 	size_t	sz;
 
 	struct kinfo_proc	*proc = NULL;
@@ -307,11 +277,7 @@ int     PROC_MEM(AGENT_REQUEST *request,
 	}
 	else
 	{
-#if (__FreeBSD_version) < 500000
 		mib[2] = KERN_PROC_ALL;
-#else
-		mib[2] = KERN_PROC_PROC;
-#endif
 		mib[3] = 0;
 		mibs = 3;
 	}
@@ -374,14 +340,7 @@ int     PROC_MEM(AGENT_REQUEST *request,
 				byte_value = proc[i].ZBX_PROC_VSIZE;
 				break;
 			case ZBX_PMEM:
-				if (0 != (proc[i].ZBX_PROC_FLAG & ZBX_PROC_MASK))
-#if (__FreeBSD_version) < 500000
-					pct_value = ((float)(proc[i].ZBX_PROC_RSSIZE + UPAGES) / mem_pages) * 100.0;
-#else
-					pct_value = ((float)proc[i].ZBX_PROC_RSSIZE / mem_pages) * 100.0;
-#endif
-				else
-					pct_value = 0.0;
+				pct_value = ((float)proc[i].ZBX_PROC_RSSIZE / mem_pages) * 100.0;
 				break;
 			case ZBX_TSIZE:
 				byte_value = proc[i].ZBX_PROC_TSIZE * pagesize;
@@ -524,11 +483,7 @@ int	PROC_NUM(AGENT_REQUEST *request, AGE
 	}
 	else
 	{
-#if (__FreeBSD_version) > 500000
-		mib[2] = KERN_PROC_PROC;
-#else
 		mib[2] = KERN_PROC_ALL;
-#endif
 		mib[3] = 0;
 		mibs = 3;
 	}
@@ -565,33 +520,22 @@ int	PROC_NUM(AGENT_REQUEST *request, AGE
 		{
 			switch (zbx_proc_stat) {
 			case ZBX_PROC_STAT_RUN:
-				if (SRUN == proc[i].ZBX_PROC_STAT)
+				if (lwp_status(proc[i], LSRUN))
 					stat_ok = 1;
 				break;
 			case ZBX_PROC_STAT_TRACE:
-				if (SSTOP == proc[i].ZBX_PROC_STAT)
+				if (SSTOP == proc[i].kp_stat)
 					stat_ok = 1;
 				break;
 			case ZBX_PROC_STAT_ZOMB:
-				if (SZOMB == proc[i].ZBX_PROC_STAT)
-					stat_ok = 1;
-				break;
-#if (__FreeBSD_version) < 700000
-			case ZBX_PROC_STAT_SLEEP:
-			case ZBX_PROC_STAT_DISK:
-				if (SSLEEP == proc[i].ZBX_PROC_STAT)
+				if (SZOMB == proc[i].kp_stat)
 					stat_ok = 1;
 				break;
-#else
 			case ZBX_PROC_STAT_SLEEP:
-				if (SSLEEP == proc[i].ZBX_PROC_STAT && 0 != (proc[i].ZBX_PROC_TDFLAG & TDF_SINTR))
-					stat_ok = 1;
-				break;
 			case ZBX_PROC_STAT_DISK:
-				if (SSLEEP == proc[i].ZBX_PROC_STAT && 0 == (proc[i].ZBX_PROC_TDFLAG & TDF_SINTR))
+				if (lwp_status(proc[i], LSSLEEP))
 					stat_ok = 1;
 				break;
-#endif
 			}
 		}
 		else
@@ -622,8 +566,13 @@ static char	*get_state(struct kinfo_proc
 
 	switch (proc->ZBX_PROC_STAT)
 	{
-		case SRUN:
-			state = zbx_strdup(NULL, "running");
+		case SACTIVE:
+			if (proc->kp_lwp.kl_stat == LSRUN)
+				state = zbx_strdup(NULL, "running");
+			else if (proc->kp_lwp.kl_stat == LSSLEEP)
+				state = zbx_strdup(NULL, "sleeping");
+			else if (proc->kp_lwp.kl_stat == LSSTOP)
+				state = zbx_strdup(NULL, "stopped");
 			break;
 		case SZOMB:
 			state = zbx_strdup(NULL, "zombie");
@@ -631,17 +580,6 @@ static char	*get_state(struct kinfo_proc
 		case SSTOP:
 			state = zbx_strdup(NULL, "tracing stop");
 			break;
-		case SSLEEP:
-#if (__FreeBSD_version) < 700000
-			state = zbx_strdup(NULL, "sleeping");
-#else
-			if (0 != (proc->ZBX_PROC_TDFLAG & TDF_SINTR))
-				state = zbx_strdup(NULL, "sleeping");
-			else
-				state = zbx_strdup(NULL, "disk sleep");
-#endif
-
-			break;
 		default:
 			state = zbx_strdup(NULL, "other");
 	}
@@ -797,7 +735,7 @@ int	PROC_GET(AGENT_REQUEST *request, AGE
 			sz = 0;
 			mib_thread[0] = CTL_KERN;
 			mib_thread[1] = KERN_PROC;
-			mib_thread[2] = KERN_PROC_PID | KERN_PROC_INC_THREAD;
+			mib_thread[2] = KERN_PROC_PID | KERN_PROC_FLAG_LWP;
 			mib_thread[3] = proc[i].ZBX_PROC_PID;
 			mibs_thread = 4;
 
@@ -876,16 +814,8 @@ int	PROC_GET(AGENT_REQUEST *request, AGE
 			proc_data->cputime_user = proc[i].ZBX_PROC_UTIME;
 			proc_data->cputime_system = proc[i].ZBX_PROC_STIME;
 
-			if (0 != (proc[i].ZBX_PROC_FLAG & ZBX_PROC_MASK))
-			{
-#if (__FreeBSD_version) < 500000
-				proc_data->pmem = ((float)(proc[i].ZBX_PROC_RSSIZE + UPAGES) / mem_pages) * 100.0;
-#else
-				proc_data->pmem = ((float)proc[i].ZBX_PROC_RSSIZE / mem_pages) * 100.0;
-#endif
-			}
-			else
-				proc_data->pmem = 0.0;
+			/* XXX Is there a way to calculate this on DFly? */
+			proc_data->pmem = 0.0;
 
 			if (ZBX_PROC_MODE_PROCESS == zbx_proc_mode)
 			{
