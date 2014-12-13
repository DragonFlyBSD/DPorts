--- Process.xs.orig	2013-06-22 16:19:28 UTC
+++ Process.xs
@@ -30,10 +30,8 @@
 #define PATH_DEV_NULL "/dev/null"
 
 #define TIME_FRAC(t) ((double)(t).tv_sec + (double)(t).tv_usec/1000000)
-#define P_FLAG(f)    ((kp->ki_flag   & f) ? 1 : 0)
-#define KI_FLAG(f)   ((kp->ki_kiflag & f) ? 1 : 0)
 
-#if __FreeBSD_version < 500000
+#if defined(__FreeBSD__) && __FreeBSD_version < 500000
 #define NO_FREEBSD_4x(a)    (-1)
 #define NO_FREEBSD_4x_pv(a) ("")
 #else
@@ -41,7 +39,7 @@
 #define NO_FREEBSD_4x_pv(a) (a)
 #endif
 
-#if __FreeBSD_version < 600000
+#if defined(__FreeBSD__) && __FreeBSD_version < 600000
 #define NO_FREEBSD_5x(a)    (-1)
 #define NO_FREEBSD_5x_pv(a) ("")
 #else
@@ -49,6 +47,12 @@
 #define NO_FREEBSD_5x_pv(a) (a)
 #endif
 
+#if defined(__DragonFly__)
+#define NO_DRAGONFLY(a)     (-1)
+#else
+#define NO_DRAGONFLY(a)     (a)
+#endif
+
 static int proc_info_mib[4] = { -1, -1, -1, -1 };
 
 struct kinfo_proc *_proc_request (kvm_t *kd, int request, int param, int *pnr) {
@@ -67,7 +71,7 @@ struct kinfo_proc *_proc_request (kvm_t
     case 6:
         kip = kvm_getprocs(kd, KERN_PROC_RUID, param, pnr);
         break;
-#if __FreeBSD_version >= 600000
+#if defined(__FreeBSD__) && __FreeBSD_version >= 600000
     case 10:
         kip = kvm_getprocs(kd, KERN_PROC_RGID, param, pnr);
         break;
@@ -115,8 +119,49 @@ void store_gid (HV *h, const char *field
     }
 }
 
-
-#if __FreeBSD_version < 500000
+#if defined(__DragonFly__)
+#define ACFLAG_FIELD  kp_acflag
+#define COMM_FIELD    kp_comm
+#define DSIZE_FIELD   kp_vm_dsize
+#define ESTCPU_FIELD  kp_lwp.kl_estcpu
+#define FLAG_FIELD    kp_flags
+#define GROUPS_FIELD  kp_groups
+#define JID_FIELD     kp_jailid
+#define JOBC_FIELD    kp_jobc
+#define LASTCPU_FIELD kp_lwp.kl_origcpu
+#define LOCK_FIELD    kp_lock
+#define LOGIN_FIELD   kp_login
+#define NGROUPS_FIELD kp_ngroups
+#define NICE_FIELD    kp_nice
+#define NUMTHREADS_FIELD kp_nthreads
+#define ONCPU_FIELD   kp_lwp.kl_cpuid
+#define PCTCPU_FIELD  kp_lwp.kl_pctcpu
+#define PGID_FIELD    kp_pgid
+#define PID_FIELD     kp_pid
+#define PPID_FIELD    kp_ppid
+#define RGID_FIELD    kp_rgid
+#define RSSIZE_FIELD  kp_vm_rssize
+#define RUID_FIELD    kp_ruid
+#define RUSAGE_FIELD  kp_ru
+#define RUSAGE_CH_FIELD  kp_cru
+#define SID_FIELD     kp_sid
+#define SIZE_FIELD    kp_vm_map_size
+#define SLPTIME_FIELD kp_lwp.kl_slptime
+#define SSIZE_FIELD   kp_vm_ssize
+#define START_FIELD   kp_start
+#define STAT_FIELD    kp_stat
+#define SVGID_FIELD   kp_svgid
+#define SVUID_FIELD   kp_svuid
+#define SWRSS_FIELD   kp_vm_swrss
+#define SWTIME_FIELD  kp_swtime
+#define TPGID_FIELD   kp_tpgid
+#define TSID_FIELD    kp_tsid
+#define TSIZE_FIELD   kp_vm_tsize
+#define UID_FIELD     kp_uid
+#define WMESG_FIELD   kp_lwp.kl_wmesg
+#define XSTAT_FIELD   kp_exitstat
+#define KTHREAD_FLAG  P_SYSTEM
+#elif __FreeBSD_version < 500000
 #define ACFLAG_FIELD  kp_proc.p_acflag
 #define COMM_FIELD    kp_proc.p_comm
 #define ESTCPU_FIELD  kp_proc.p_estcpu
@@ -144,30 +189,52 @@ void store_gid (HV *h, const char *field
 #else
 #define ACFLAG_FIELD  ki_acflag
 #define COMM_FIELD    ki_comm
+#define DSIZE_FIELD   ki_dsize
 #define ESTCPU_FIELD  ki_estcpu
 #define FLAG_FIELD    ki_flag
+#define GROUPS_FIELD  ki_groups
+#define JID_FIELD     ki_jid
 #define JOBC_FIELD    ki_jobc
 #define LASTCPU_FIELD ki_lastcpu
 #define LOCK_FIELD    ki_lock
 #define LOGIN_FIELD   ki_login
+#define NGROUPS_FIELD ki_ngroups
 #define NICE_FIELD    ki_nice
+#define NUMTHREADS_FIELD ki_numthreads
 #define ONCPU_FIELD   ki_oncpu
 #define PCTCPU_FIELD  ki_pctcpu
 #define PGID_FIELD    ki_pgid
 #define PID_FIELD     ki_pid
 #define PPID_FIELD    ki_ppid
+#define RGID_FIELD    ki_rgid
 #define RQINDEX_FIELD ki_rqindex
 #define RSSIZE_FIELD  ki_rssize
+#define RUID_FIELD    ki_ruid
 #define RUNTIME_FIELD ki_runtime
+#define RUSAGE_FIELD  ki_rusage
+#define RUSAGE_CH_FIELD  ki_rusage_ch
+#define SID_FIELD     ki_sid
+#define SIZE_FIELD    ki_size
 #define SLPTIME_FIELD ki_slptime
+#define SSIZE_FIELD   ki_ssize
+#define START_FIELD   ki_start
+#define STAT_FIELD    ki_stat
+#define SVGID_FIELD   ki_svgid
+#define SVUID_FIELD   ki_svuid
 #define SWRSS_FIELD   ki_swrss
 #define SWTIME_FIELD  ki_swtime
 #define TPGID_FIELD   ki_tpgid
+#define TSID_FIELD    ki_tsid
 #define TSIZE_FIELD   ki_tsize
+#define UID_FIELD     ki_uid
 #define WMESG_FIELD   ki_wmesg
 #define XSTAT_FIELD   ki_xstat
+#define KTHREAD_FLAG  P_KTHREAD
 #endif
 
+#define P_FLAG(f)    ((kp->FLAG_FIELD   & f) ? 1 : 0)
+#define KI_FLAG(f)   ((kp->ki_kiflag & f) ? 1 : 0)
+
 HV *_procinfo (struct kinfo_proc *kp, int resolve) {
     HV *h;
     const char *nlistf, *memf;
@@ -179,7 +246,7 @@ HV *_procinfo (struct kinfo_proc *kp, in
     struct group *gr;
     short g;
     AV *grlist;
-#if __FreeBSD_version >= 500000
+#if (defined(__FreeBSD__) && __FreeBSD_version >= 500000) || defined(__DragonFly__)
     struct rusage *rp;
 #endif
 
@@ -200,9 +267,9 @@ HV *_procinfo (struct kinfo_proc *kp, in
     hv_store(h, "xstat",   5, newSViv(kp->XSTAT_FIELD),   0);
     hv_store(h, "slptime", 7, newSViv(kp->SLPTIME_FIELD), 0);
     hv_store(h, "swtime",  6, newSViv(kp->SWTIME_FIELD),  0);
-    hv_store(h, "runtime", 7, newSViv(kp->RUNTIME_FIELD), 0);
+    hv_store(h, "runtime", 7, newSViv(NO_DRAGONFLY(kp->RUNTIME_FIELD)), 0);
     hv_store(h, "lock",    4, newSViv(kp->LOCK_FIELD),    0);
-    hv_store(h, "rqindex", 7, newSViv(kp->RQINDEX_FIELD), 0);
+    hv_store(h, "rqindex", 7, newSViv(NO_DRAGONFLY(kp->RQINDEX_FIELD)), 0);
     hv_store(h, "oncpu",   5, newSViv(kp->ONCPU_FIELD),   0);
     hv_store(h, "lastcpu", 7, newSViv(kp->LASTCPU_FIELD), 0);
     hv_store(h, "nice",    4, newSViv(kp->NICE_FIELD),    0);
@@ -211,27 +278,27 @@ HV *_procinfo (struct kinfo_proc *kp, in
     hv_store(h, "login",   5, newSVpv(kp->LOGIN_FIELD, 0), 0);
     hv_store(h, "comm",    4, newSVpv(kp->COMM_FIELD,  0), 0);
 
-    hv_store(h, "sid",   3, newSViv(NO_FREEBSD_4x(kp->ki_sid)),  0);
-    hv_store(h, "tsid",  4, newSViv(NO_FREEBSD_4x(kp->ki_tsid)), 0);
+    hv_store(h, "sid",   3, newSViv(NO_FREEBSD_4x(kp->SID_FIELD)),  0);
+    hv_store(h, "tsid",  4, newSViv(NO_FREEBSD_4x(kp->TSID_FIELD)), 0);
 
     if (!resolve) {
         /* numeric user and group ids */
-        hv_store(h, "uid",   3, newSViv(NO_FREEBSD_4x(kp->ki_uid)), 0);
-        hv_store(h, "ruid",  4, newSViv(NO_FREEBSD_4x(kp->ki_ruid)), 0);
-        hv_store(h, "svuid", 5, newSViv(NO_FREEBSD_4x(kp->ki_svuid)), 0);
-        hv_store(h, "rgid",  4, newSViv(NO_FREEBSD_4x(kp->ki_rgid)), 0);
-        hv_store(h, "svgid", 5, newSViv(NO_FREEBSD_4x(kp->ki_svgid)), 0);
+        hv_store(h, "uid",   3, newSViv(NO_FREEBSD_4x(kp->UID_FIELD)), 0);
+        hv_store(h, "ruid",  4, newSViv(NO_FREEBSD_4x(kp->RUID_FIELD)), 0);
+        hv_store(h, "svuid", 5, newSViv(NO_FREEBSD_4x(kp->SVUID_FIELD)), 0);
+        hv_store(h, "rgid",  4, newSViv(NO_FREEBSD_4x(kp->RGID_FIELD)), 0);
+        hv_store(h, "svgid", 5, newSViv(NO_FREEBSD_4x(kp->SVGID_FIELD)), 0);
     }
     else {
-        NO_FREEBSD_4x(store_uid(h, "uid",   kp->ki_uid));
-        NO_FREEBSD_4x(store_uid(h, "ruid",  kp->ki_ruid));
-        NO_FREEBSD_4x(store_uid(h, "svuid", kp->ki_svuid));
-        NO_FREEBSD_4x(store_gid(h, "rgid",  kp->ki_rgid));
-        NO_FREEBSD_4x(store_gid(h, "svgid", kp->ki_svgid));
+        NO_FREEBSD_4x(store_uid(h, "uid",   kp->UID_FIELD));
+        NO_FREEBSD_4x(store_uid(h, "ruid",  kp->RUID_FIELD));
+        NO_FREEBSD_4x(store_uid(h, "svuid", kp->SVUID_FIELD));
+        NO_FREEBSD_4x(store_gid(h, "rgid",  kp->RGID_FIELD));
+        NO_FREEBSD_4x(store_gid(h, "svgid", kp->SVGID_FIELD));
     }
 
     grlist = (AV *)sv_2mortal((SV *)newAV());
-#if __FreeBSD_version < 500000
+#if defined(__FreeBSD__) && __FreeBSD_version < 500000
     /* not available in FreeBSD 4.x */
     hv_store(h, "args",   4, newSViv(-1), 0);
 #else
@@ -271,64 +338,79 @@ HV *_procinfo (struct kinfo_proc *kp, in
     }
 
     /* deal with groups array */
-    for (g = 0; g < kp->ki_ngroups; ++g) {
-        if (resolve && (gr = getgrgid(kp->ki_groups[g]))) {
+    for (g = 0; g < kp->NGROUPS_FIELD; ++g) {
+        if (resolve && (gr = getgrgid(kp->GROUPS_FIELD[g]))) {
             av_push(grlist, newSVpvn(gr->gr_name, strlen(gr->gr_name)));
         }
         else {
-            av_push(grlist, newSViv(kp->ki_groups[g]));
+            av_push(grlist, newSViv(kp->GROUPS_FIELD[g]));
         }
     }
 #endif
     hv_store(h, "groups", 6, newRV((SV *)grlist), 0);
 
-    hv_store(h, "ngroups",   7, newSViv(NO_FREEBSD_4x(kp->ki_ngroups)), 0);
-    hv_store(h, "size",      4, newSViv(NO_FREEBSD_4x(kp->ki_size)), 0);
-    hv_store(h, "dsize",     5, newSViv(NO_FREEBSD_4x(kp->ki_dsize)), 0);
-    hv_store(h, "ssize",     5, newSViv(NO_FREEBSD_4x(kp->ki_ssize)), 0);
-    hv_store(h, "start",     5, newSVnv(NO_FREEBSD_4x(TIME_FRAC(kp->ki_start))), 0);
+    hv_store(h, "ngroups",   7, newSViv(NO_FREEBSD_4x(kp->NGROUPS_FIELD)), 0);
+    hv_store(h, "size",      4, newSViv(NO_FREEBSD_4x(kp->SIZE_FIELD)), 0);
+    hv_store(h, "dsize",     5, newSViv(NO_FREEBSD_4x(kp->DSIZE_FIELD)), 0);
+    hv_store(h, "ssize",     5, newSViv(NO_FREEBSD_4x(kp->SSIZE_FIELD)), 0);
+    hv_store(h, "start",     5, newSVnv(NO_FREEBSD_4x(TIME_FRAC(kp->START_FIELD))), 0);
+#ifndef __DragonFly__
     hv_store(h, "childtime", 9, newSVnv(NO_FREEBSD_4x(TIME_FRAC(kp->ki_childtime))), 0);
+#endif
 
     hv_store(h, "advlock",      7, newSViv(NO_FREEBSD_4x(P_FLAG(P_ADVLOCK))), 0);
     hv_store(h, "controlt",     8, newSViv(NO_FREEBSD_4x(P_FLAG(P_CONTROLT))), 0);
-    hv_store(h, "kthread",      7, newSViv(NO_FREEBSD_4x(P_FLAG(P_KTHREAD))), 0);
-#if __FreeBSD_version < 802501
+    hv_store(h, "kthread",      7, newSViv(NO_FREEBSD_4x(P_FLAG(KTHREAD_FLAG))), 0);
+#if defined(__FreeBSD__) && __FreeBSD_version < 802501
     hv_store(h, "noload",       6, newSViv(NO_FREEBSD_4x(P_FLAG(P_NOLOAD))), 0);
 #endif
     hv_store(h, "ppwait",       6, newSViv(NO_FREEBSD_4x(P_FLAG(P_PPWAIT))), 0);
     hv_store(h, "profil",       6, newSViv(NO_FREEBSD_4x(P_FLAG(P_PROFIL))), 0);
+#ifndef __DragonFly__
     hv_store(h, "stopprof",     8, newSViv(NO_FREEBSD_4x(P_FLAG(P_STOPPROF))), 0);
+#endif
     hv_store(h, "sugid",        5, newSViv(NO_FREEBSD_4x(P_FLAG(P_SUGID))), 0);
     hv_store(h, "system",       6, newSViv(NO_FREEBSD_4x(P_FLAG(P_SYSTEM))), 0);
+#ifndef __DragonFly__
     hv_store(h, "single_exit", 11, newSViv(NO_FREEBSD_4x(P_FLAG(P_SINGLE_EXIT))), 0);
+#endif
     hv_store(h, "traced",       6, newSViv(NO_FREEBSD_4x(P_FLAG(P_TRACED))), 0);
     hv_store(h, "waited",       6, newSViv(NO_FREEBSD_4x(P_FLAG(P_WAITED))), 0);
     hv_store(h, "wexit",        5, newSViv(NO_FREEBSD_4x(P_FLAG(P_WEXIT))), 0);
     hv_store(h, "exec",         4, newSViv(NO_FREEBSD_4x(P_FLAG(P_EXEC))), 0);
+#ifndef __DragonFly__
     hv_store(h, "hadthreads",  10, newSViv(NO_FREEBSD_5x(P_FLAG(P_HADTHREADS))), 0);
 
     hv_store(h, "kiflag",    6, newSViv(NO_FREEBSD_4x(kp->ki_kiflag)), 0);
     hv_store(h, "locked",    6, newSViv(NO_FREEBSD_4x(KI_FLAG(KI_LOCKBLOCK))), 0);
     hv_store(h, "isctty",    6, newSViv(NO_FREEBSD_4x(KI_FLAG(KI_CTTY))), 0);
     hv_store(h, "issleader", 9, newSViv(NO_FREEBSD_4x(KI_FLAG(KI_SLEADER))), 0);
+#endif
 
-    hv_store(h, "stat",        4, newSViv(NO_FREEBSD_4x((int)kp->ki_stat)), 0);
-    hv_store(h, "stat_1",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 1 ? 1 : 0)), 0);
-    hv_store(h, "stat_2",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 2 ? 1 : 0)), 0);
-    hv_store(h, "stat_3",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 3 ? 1 : 0)), 0);
-    hv_store(h, "stat_4",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 4 ? 1 : 0)), 0);
-    hv_store(h, "stat_5",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 5 ? 1 : 0)), 0);
-    hv_store(h, "stat_6",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 6 ? 1 : 0)), 0);
-    hv_store(h, "stat_7",      6, newSViv(NO_FREEBSD_4x((int)kp->ki_stat == 7 ? 1 : 0)), 0);
+    hv_store(h, "stat",        4, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD)), 0);
+    hv_store(h, "stat_1",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 1 ? 1 : 0)), 0);
+    hv_store(h, "stat_2",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 2 ? 1 : 0)), 0);
+    hv_store(h, "stat_3",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 3 ? 1 : 0)), 0);
+    hv_store(h, "stat_4",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 4 ? 1 : 0)), 0);
+    hv_store(h, "stat_5",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 5 ? 1 : 0)), 0);
+    hv_store(h, "stat_6",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 6 ? 1 : 0)), 0);
+    hv_store(h, "stat_7",      6, newSViv(NO_FREEBSD_4x((int)kp->STAT_FIELD == 7 ? 1 : 0)), 0);
+#ifndef __DragonFly__
     hv_store(h, "ocomm",       5, newSVpv(NO_FREEBSD_4x_pv(kp->ki_ocomm), 0), 0);
     hv_store(h, "lockname",    8, newSVpv(NO_FREEBSD_4x_pv(kp->ki_lockname), 0), 0);
+#else
+    hv_store(h, "ocomm",       5, newSVpv("", 0), 0);
+    hv_store(h, "lockname",    8, newSVpv("", 0), 0);
+#endif
 
+#ifndef __DragonFly__
     hv_store(h, "pri_class",   9, newSViv(NO_FREEBSD_4x(kp->ki_pri.pri_class)), 0);
     hv_store(h, "pri_level",   9, newSViv(NO_FREEBSD_4x(kp->ki_pri.pri_level)), 0);
     hv_store(h, "pri_native", 10, newSViv(NO_FREEBSD_4x(kp->ki_pri.pri_native)), 0);
     hv_store(h, "pri_user",    8, newSViv(NO_FREEBSD_4x(kp->ki_pri.pri_user)), 0);
+#endif
 
-    NO_FREEBSD_4x(rp = &kp->ki_rusage);
+    NO_FREEBSD_4x(rp = &kp->RUSAGE_FIELD);
     hv_store(h, "utime",    5, newSVnv(NO_FREEBSD_4x(TIME_FRAC(rp->ru_utime))), 0);
     hv_store(h, "stime",    5, newSVnv(NO_FREEBSD_4x(TIME_FRAC(rp->ru_stime))), 0);
     hv_store(h, "time",     4, newSVnv(NO_FREEBSD_4x(
@@ -349,11 +431,15 @@ HV *_procinfo (struct kinfo_proc *kp, in
     hv_store(h, "nivcsw",   6, newSViv(NO_FREEBSD_4x(rp->ru_nivcsw)), 0);
 
     /* attributes available only in FreeBSD 6.x */
+#ifndef __DragonFly__
     hv_store(h, "emul",        4, newSVpv(NO_FREEBSD_5x_pv(kp->ki_emul), 0), 0);
-    hv_store(h, "jid",         3, newSViv(NO_FREEBSD_5x(kp->ki_jid)), 0);
-    hv_store(h, "numthreads", 10, newSViv(NO_FREEBSD_5x(kp->ki_numthreads)), 0);
+#else
+    hv_store(h, "emul",        4, newSVpv("", 0), 0);
+#endif
+    hv_store(h, "jid",         3, newSViv(NO_FREEBSD_5x(kp->JID_FIELD)), 0);
+    hv_store(h, "numthreads", 10, newSViv(NO_FREEBSD_5x(kp->NUMTHREADS_FIELD)), 0);
 
-    NO_FREEBSD_5x(rp = &kp->ki_rusage_ch);
+    NO_FREEBSD_5x(rp = &kp->RUSAGE_CH_FIELD);
     hv_store(h, "utime_ch",     8, newSVnv(NO_FREEBSD_5x(TIME_FRAC(rp->ru_utime))), 0);
     hv_store(h, "stime_ch",     8, newSVnv(NO_FREEBSD_5x(TIME_FRAC(rp->ru_stime))), 0);
     hv_store(h, "time_ch",      7, newSVnv(NO_FREEBSD_5x(
@@ -383,7 +469,9 @@ PROTOTYPES: ENABLE
 short
 max_kernel_groups()
     CODE:
-#if __FreeBSD_version < 500000
+#if defined(__DragonFly__)
+        RETVAL = NGROUPS;
+#elif __FreeBSD_version < 500000
         RETVAL = 0;
 #else
         RETVAL = KI_NGROUPS;
