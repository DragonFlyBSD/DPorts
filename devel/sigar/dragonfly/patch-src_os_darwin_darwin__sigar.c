--- src/os/darwin/darwin_sigar.c.orig	2014-11-17 21:46:20 UTC
+++ src/os/darwin/darwin_sigar.c
@@ -18,7 +18,7 @@
 
 #include <sys/param.h>
 #include <sys/mount.h>
-#if !(defined(__FreeBSD__) && (__FreeBSD_version >= 800000))
+#ifdef __DragonFly__
 #include <nfs/rpcv2.h>
 #endif
 #include <nfs/nfsproto.h>
@@ -52,7 +52,7 @@
 #include <IOKit/IOTypes.h>
 #include <IOKit/storage/IOBlockStorageDriver.h>
 #else
-#include <sys/dkstat.h>
+//#include <sys/dkstat.h>
 #include <sys/types.h>
 #include <sys/param.h>
 #include <sys/user.h>
@@ -114,34 +114,30 @@
 
 #define NMIB(mib) (sizeof(mib)/sizeof(mib[0]))
 
-#ifdef __FreeBSD__
-#  if (__FreeBSD_version >= 500013)
+#ifdef __DragonFly__
 #    define SIGAR_FREEBSD5
-#  else
-#    define SIGAR_FREEBSD4
-#  endif
 #endif
 
 #if defined(SIGAR_FREEBSD5)
 
-#define KI_FD   ki_fd
-#define KI_PID  ki_pid
-#define KI_PPID ki_ppid
-#define KI_PRI  ki_pri.pri_user
-#define KI_NICE ki_nice
-#define KI_COMM ki_comm
-#define KI_STAT ki_stat
-#define KI_UID  ki_ruid
-#define KI_GID  ki_rgid
-#define KI_EUID ki_svuid
-#define KI_EGID ki_svgid
-#define KI_SIZE ki_size
-#define KI_RSS  ki_rssize
-#define KI_TSZ  ki_tsize
-#define KI_DSZ  ki_dsize
-#define KI_SSZ  ki_ssize
-#define KI_FLAG ki_flag
-#define KI_START ki_start
+#define KI_FD   kp_fd
+#define KI_PID  kp_pid
+#define KI_PPID kp_ppid
+#define KI_PRI  kp_lwp.kl_prio
+#define KI_NICE kp_nice
+#define KI_COMM kp_comm
+#define KI_STAT kp_stat
+#define KI_UID  kp_ruid
+#define KI_GID  kp_rgid
+#define KI_EUID kp_svuid
+#define KI_EGID kp_svgid
+#define KI_SIZE kp_vm_map_size
+#define KI_RSS  kp_vm_rssize
+#define KI_TSZ  kp_vm_tsize
+#define KI_DSZ  kp_vm_dsize
+#define KI_SSZ  kp_vm_ssize
+#define KI_FLAG kp_flags
+#define KI_START kp_start
 
 #elif defined(DARWIN) || defined(SIGAR_FREEBSD4) || defined(__OpenBSD__) || defined(__NetBSD__)
 
@@ -266,7 +262,7 @@ int sigar_os_open(sigar_t **sigar)
     (*sigar)->boot_time = boottime.tv_sec; /* XXX seems off a bit */
 
     (*sigar)->pagesize = getpagesize();
-#ifdef __FreeBSD__
+#ifdef __DragonFly__
     (*sigar)->ticks = 100; /* sysconf(_SC_CLK_TCK) == 128 !? */
 #else
     (*sigar)->ticks = sysconf(_SC_CLK_TCK);
@@ -341,13 +337,14 @@ static int sigar_vmstat(sigar_t *sigar,
         return errno;
     }
 }
-#elif defined(__FreeBSD__)
-static int sigar_vmstat(sigar_t *sigar, struct vmmeter *vmstat)
+#elif defined(__DragonFly__)
+static int sigar_vmstat(sigar_t *sigar, struct vmstats *vmstat,
+                        struct vmmeter *vmm)
 {
     int status;
     size_t size = sizeof(unsigned int);
 
-    status = kread(sigar, vmstat, sizeof(*vmstat),
+    status = kread(sigar, vmm, sizeof(*vmm),
                    sigar->koffsets[KOFFSET_VMMETER]);
 
     if (status == SIGAR_OK) {
@@ -355,40 +352,24 @@ static int sigar_vmstat(sigar_t *sigar,
     }
 
     SIGAR_ZERO(vmstat);
+    SIGAR_ZERO(vmm);
 
     /* derived from src/usr.bin/vmstat/vmstat.c */
     /* only collect the ones we actually use */
 #define GET_VM_STATS(cat, name, used) \
     if (used) sysctlbyname("vm.stats." #cat "." #name, &vmstat->name, &size, NULL, 0)
+#define GET_VM_VMMS(cat, name, used) \
+    if (used) sysctlbyname("vm.stats." #cat "." #name, &vmm->name, &size, NULL, 0)
 
-    /* sys */
-    GET_VM_STATS(sys, v_swtch, 0);
-    GET_VM_STATS(sys, v_trap, 0);
-    GET_VM_STATS(sys, v_syscall, 0);
-    GET_VM_STATS(sys, v_intr, 0);
-    GET_VM_STATS(sys, v_soft, 0);
-
-    /* vm */
-    GET_VM_STATS(vm, v_vm_faults, 0);
-    GET_VM_STATS(vm, v_cow_faults, 0);
-    GET_VM_STATS(vm, v_cow_optim, 0);
-    GET_VM_STATS(vm, v_zfod, 0);
-    GET_VM_STATS(vm, v_ozfod, 0);
-    GET_VM_STATS(vm, v_swapin, 1);
-    GET_VM_STATS(vm, v_swapout, 1);
-    GET_VM_STATS(vm, v_swappgsin, 0);
-    GET_VM_STATS(vm, v_swappgsout, 0);
-    GET_VM_STATS(vm, v_vnodein, 1);
-    GET_VM_STATS(vm, v_vnodeout, 1);
-    GET_VM_STATS(vm, v_vnodepgsin, 0);
-    GET_VM_STATS(vm, v_vnodepgsout, 0);
-    GET_VM_STATS(vm, v_intrans, 0);
-    GET_VM_STATS(vm, v_reactivated, 0);
-    GET_VM_STATS(vm, v_pdwakeups, 0);
-    GET_VM_STATS(vm, v_pdpages, 0);
-    GET_VM_STATS(vm, v_dfree, 0);
-    GET_VM_STATS(vm, v_pfree, 0);
-    GET_VM_STATS(vm, v_tfree, 0);
+    GET_VM_VMMS(vm, v_swapin, 0);
+    GET_VM_VMMS(vm, v_swapout, 0);
+    GET_VM_VMMS(vm, v_swappgsin, 0);
+    GET_VM_VMMS(vm, v_swappgsout, 0);
+    GET_VM_VMMS(vm, v_vnodein, 0);
+    GET_VM_VMMS(vm, v_vnodeout, 0);
+    GET_VM_VMMS(vm, v_vnodepgsin, 0);
+    GET_VM_VMMS(vm, v_vnodepgsout, 0);
+    
     GET_VM_STATS(vm, v_page_size, 0);
     GET_VM_STATS(vm, v_page_count, 0);
     GET_VM_STATS(vm, v_free_reserved, 0);
@@ -404,14 +385,9 @@ static int sigar_vmstat(sigar_t *sigar,
     GET_VM_STATS(vm, v_cache_max, 0);
     GET_VM_STATS(vm, v_pageout_free_min, 0);
     GET_VM_STATS(vm, v_interrupt_free_min, 0);
-    GET_VM_STATS(vm, v_forks, 0);
-    GET_VM_STATS(vm, v_vforks, 0);
-    GET_VM_STATS(vm, v_rforks, 0);
-    GET_VM_STATS(vm, v_kthreads, 0);
-    GET_VM_STATS(vm, v_forkpages, 0);
-    GET_VM_STATS(vm, v_vforkpages, 0);
-    GET_VM_STATS(vm, v_rforkpages, 0);
-    GET_VM_STATS(vm, v_kthreadpages, 0);
+    GET_VM_STATS(vm, v_free_severe, 0);
+    GET_VM_STATS(vm, v_dma_avail, 0);
+    GET_VM_STATS(vm, v_dma_pages, 0);
 #undef GET_VM_STATS
 
     return SIGAR_OK;
@@ -439,8 +415,9 @@ int sigar_mem_get(sigar_t *sigar, sigar_
 #else
     unsigned long mem_total;
 #endif
-#if defined(__FreeBSD__)
-    struct vmmeter vmstat;
+#if defined(__DragonFly__)
+    struct vmstats vmstat;
+    struct vmmeter vmm;
 #elif defined(__OpenBSD__) || defined(__NetBSD__)
     struct uvmexp vmstat;
 #endif
@@ -477,8 +454,8 @@ int sigar_mem_get(sigar_t *sigar, sigar_
     mem->free *= sigar->pagesize;
     kern = vmstat.inactive_count;
     kern *= sigar->pagesize;
-#elif defined(__FreeBSD__)
-    if ((status = sigar_vmstat(sigar, &vmstat)) == SIGAR_OK) {
+#elif defined(__DragonFly__)
+    if ((status = sigar_vmstat(sigar, &vmstat, &vmm)) == SIGAR_OK) {
         kern = vmstat.v_cache_count + vmstat.v_inactive_count;
         kern *= sigar->pagesize;
         mem->free = vmstat.v_free_count;
@@ -687,9 +664,10 @@ int sigar_swap_get(sigar_t *sigar, sigar
     }
     swap->page_in = vmstat.pageins;
     swap->page_out = vmstat.pageouts;
-#elif defined(__FreeBSD__)
+#elif defined(__DragonFly__)
     struct kvm_swap kswap[1];
-    struct vmmeter vmstat;
+    struct vmstats vmstat;
+    struct vmmeter vmm;
 
     if (getswapinfo_sysctl(kswap, 1) != SIGAR_OK) {
         if (!sigar->kmem) {
@@ -712,9 +690,9 @@ int sigar_swap_get(sigar_t *sigar, sigar
     swap->used  = kswap[0].ksw_used * sigar->pagesize;
     swap->free  = swap->total - swap->used;
 
-    if ((status = sigar_vmstat(sigar, &vmstat)) == SIGAR_OK) {
-        swap->page_in = vmstat.v_swapin + vmstat.v_vnodein;
-        swap->page_out = vmstat.v_swapout + vmstat.v_vnodeout;
+    if ((status = sigar_vmstat(sigar, &vmstat, &vmm)) == SIGAR_OK) {
+        swap->page_in = vmm.v_swapin + vmm.v_vnodein;
+        swap->page_out = vmm.v_swapout + vmm.v_vnodeout;
     }
     else {
         swap->page_in = swap->page_out = -1;
@@ -769,7 +747,7 @@ int sigar_cpu_get(sigar_t *sigar, sigar_
     cpu->stolen = 0; /*N/A*/
     cpu->total = cpu->user + cpu->nice + cpu->sys + cpu->idle;
 
-#elif defined(__FreeBSD__) || (__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || (__OpenBSD__) || defined(__NetBSD__)
     int status;
     cp_time_t cp_time[CPUSTATES];
     size_t size = sizeof(cp_time);
@@ -1201,7 +1179,7 @@ int sigar_proc_mem_get(sigar_t *sigar, s
     procmem->share    = SIGAR_FIELD_NOTIMPL;
 
     return SIGAR_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__DragonFly__)
     int status = sigar_get_pinfo(sigar, pid);
     bsd_pinfo_t *pinfo = sigar->pinfo;
 
@@ -1364,8 +1342,8 @@ int sigar_proc_time_get(sigar_t *sigar,
     }
     proctime->start_time = tv2msec(pinfo->KI_START);
 #elif defined(SIGAR_FREEBSD5)
-    proctime->user  = tv2msec(pinfo->ki_rusage.ru_utime);
-    proctime->sys   = tv2msec(pinfo->ki_rusage.ru_stime);
+    proctime->user  = tv2msec(pinfo->kp_ru.ru_utime);
+    proctime->sys   = tv2msec(pinfo->kp_ru.ru_stime);
     proctime->total = proctime->user + proctime->sys;
     proctime->start_time = tv2msec(pinfo->KI_START);
 #elif defined(SIGAR_FREEBSD4)
@@ -1512,15 +1490,9 @@ int sigar_proc_state_get(sigar_t *sigar,
       case SIDL:
         procstate->state = 'D';
         break;
-      case SRUN:
-#ifdef SONPROC
-      case SONPROC:
-#endif
+      case SACTIVE:
         procstate->state = 'R';
         break;
-      case SSLEEP:
-        procstate->state = 'S';
-        break;
       case SSTOP:
         procstate->state = 'T';
         break;
@@ -1674,7 +1646,7 @@ int sigar_os_proc_args_get(sigar_t *siga
 
     sigar_kern_proc_args_destroy(&kargs);
     return SIGAR_OK;
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__DragonFly__) || defined(__NetBSD__)
     char buffer[SIGAR_ARG_MAX+1], *ptr=buffer;
     size_t len = sizeof(buffer);
 #  ifdef __NetBSD__
@@ -1854,7 +1826,7 @@ int sigar_proc_env_get(sigar_t *sigar, s
 int sigar_proc_fd_get(sigar_t *sigar, sigar_pid_t pid,
                       sigar_proc_fd_t *procfd)
 {
-#ifdef __FreeBSD__
+#ifdef __DragonFly__
     int status;
     bsd_pinfo_t *pinfo;
     struct filedesc filed;
@@ -2276,7 +2248,7 @@ int sigar_disk_usage_get(sigar_t *sigar,
     IOObjectRelease(parent);
 
     return SIGAR_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__DragonFly__)
     /* XXX incomplete */
     struct sigar_statfs buf;
 
@@ -2347,7 +2319,7 @@ int sigar_cpu_info_list_get(sigar_t *sig
     if (sysctlbyname(CTL_HW_FREQ_MIN, &mhz_min, &size, NULL, 0) < 0) {
         mhz_min = SIGAR_FIELD_NOTIMPL;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__DragonFly__)
     if (sysctlbyname(CTL_HW_FREQ, &mhz, &size, NULL, 0) < 0) {
         mhz = SIGAR_FIELD_NOTIMPL;
     }
@@ -3051,6 +3023,7 @@ static int net_connection_get(sigar_net_
 #else
 static int net_connection_get(sigar_net_connection_walker_t *walker, int proto)
 {
+/*
     int flags = walker->flags;
     int type, istcp = 0;
     char *buf;
@@ -3160,7 +3133,7 @@ static int net_connection_get(sigar_net_
     }
 
     free(buf);
-
+*/
     return SIGAR_OK;
 }
 #endif
@@ -3190,6 +3163,7 @@ SIGAR_DECLARE(int)
 sigar_tcp_get(sigar_t *sigar,
               sigar_tcp_t *tcp)
 {
+/*
     struct tcpstat mib;
 #if !defined(TCPCTL_STATS) && (defined(__OpenBSD__) || defined(__NetBSD__))
     int status =
@@ -3690,6 +3664,8 @@ int sigar_os_sys_info_get(sigar_t *sigar
 
 #if defined(__FreeBSD__)
     SIGAR_SSTRCPY(sysinfo->name, "FreeBSD");
+#elif defined(__DragonFly__)
+    SIGAR_SSTRCPY(sysinfo->name, "DragonFly");
 #elif defined(__OpenBSD__)
     SIGAR_SSTRCPY(sysinfo->name, "OpenBSD");
 #elif defined(__NetBSD__)
