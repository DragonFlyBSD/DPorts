--- src/libs/zbxsysinfo/dragonfly/proc.c.orig	2021-09-18 11:37:20 UTC
+++ src/libs/zbxsysinfo/dragonfly/proc.c
@@ -22,39 +22,27 @@
 #include "zbxregexp.h"
 #include "log.h"
 
-#if (__FreeBSD_version) < 500000
-#	define ZBX_COMMLEN	MAXCOMLEN
-#	define ZBX_PROC_PID	kp_proc.p_pid
-#	define ZBX_PROC_COMM	kp_proc.p_comm
-#	define ZBX_PROC_STAT	kp_proc.p_stat
-#	define ZBX_PROC_TSIZE	kp_eproc.e_vm.vm_tsize
-#	define ZBX_PROC_DSIZE	kp_eproc.e_vm.vm_dsize
-#	define ZBX_PROC_SSIZE	kp_eproc.e_vm.vm_ssize
-#	define ZBX_PROC_RSSIZE	kp_eproc.e_vm.vm_rssize
-#	define ZBX_PROC_VSIZE	kp_eproc.e_vm.vm_map.size
-#else
-#	define ZBX_COMMLEN	COMMLEN
-#	define ZBX_PROC_PID	ki_pid
-#	define ZBX_PROC_COMM	ki_comm
-#	define ZBX_PROC_STAT	ki_stat
-#	define ZBX_PROC_TSIZE	ki_tsize
-#	define ZBX_PROC_DSIZE	ki_dsize
-#	define ZBX_PROC_SSIZE	ki_ssize
-#	define ZBX_PROC_RSSIZE	ki_rssize
-#	define ZBX_PROC_VSIZE	ki_size
-#endif
-
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
+#define ZBX_COMMLEN	COMMLEN
+#define ZBX_PROC_PID	kp_pid
+#define ZBX_PROC_COMM	kp_comm
+#define ZBX_PROC_STAT	kp_stat
+#define ZBX_PROC_TSIZE	kp_vm_tsize
+#define ZBX_PROC_DSIZE	kp_vm_dsize
+#define ZBX_PROC_SSIZE	kp_vm_ssize
+#define ZBX_PROC_RSSIZE	kp_vm_rssize
+#define ZBX_PROC_VSIZE	kp_vm_map_size
+
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
 
 static char	*get_commandline(struct kinfo_proc *proc)
 {
@@ -110,11 +98,7 @@ int     PROC_MEM(AGENT_REQUEST *request,
 	unsigned int	mibs;
 	zbx_uint64_t	mem_size = 0, byte_value = 0;
 	double		pct_size = 0.0, pct_value = 0.0;
-#if (__FreeBSD_version) < 500000
-	int		mem_pages;
-#else
 	unsigned long 	mem_pages;
-#endif
 	size_t	sz;
 
 	struct kinfo_proc	*proc = NULL;
@@ -216,11 +200,7 @@ int     PROC_MEM(AGENT_REQUEST *request,
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
@@ -283,14 +263,7 @@ int     PROC_MEM(AGENT_REQUEST *request,
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
@@ -433,11 +406,7 @@ int	PROC_NUM(AGENT_REQUEST *request, AGE
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
@@ -474,23 +443,23 @@ int	PROC_NUM(AGENT_REQUEST *request, AGE
 		{
 			switch (zbx_proc_stat) {
 			case ZBX_PROC_STAT_RUN:
-				if (SRUN == proc[i].ZBX_PROC_STAT)
+				if (lwp_status(proc[i], LSRUN))
 					stat_ok = 1;
 				break;
 			case ZBX_PROC_STAT_SLEEP:
-				if (SSLEEP == proc[i].ZBX_PROC_STAT && 0 != (proc[i].ZBX_PROC_TDFLAG & TDF_SINTR))
+				if (lwp_status(proc[i], LSSLEEP))
 					stat_ok = 1;
 				break;
 			case ZBX_PROC_STAT_ZOMB:
-				if (SZOMB == proc[i].ZBX_PROC_STAT)
+				if (SZOMB == proc[i].kp_stat)
 					stat_ok = 1;
 				break;
 			case ZBX_PROC_STAT_DISK:
-				if (SSLEEP == proc[i].ZBX_PROC_STAT && 0 == (proc[i].ZBX_PROC_TDFLAG & TDF_SINTR))
+				if (lwp_status(proc[i], LSSLEEP))
 					stat_ok = 1;
 				break;
 			case ZBX_PROC_STAT_TRACE:
-				if (SSTOP == proc[i].ZBX_PROC_STAT)
+				if (SSTOP == proc[i].kp_stat)
 					stat_ok = 1;
 				break;
 			}
