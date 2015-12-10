--- src/process/sysdep_DRAGONFLY.c.orig	2015-12-06 13:09:49.299501858 +0100
+++ src/process/sysdep_DRAGONFLY.c	2015-12-06 13:09:48.212634000 +0100
@@ -0,0 +1,305 @@
+/*
+ * Copyright (C) Tildeslash Ltd. All rights reserved.
+ *
+ * This program is free software: you can redistribute it and/or modify
+ * it under the terms of the GNU Affero General Public License version 3.
+ *
+ * This program is distributed in the hope that it will be useful,
+ * but WITHOUT ANY WARRANTY; without even the implied warranty of
+ * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
+ * GNU General Public License for more details.
+ *
+ * You should have received a copy of the GNU Affero General Public License
+ * along with this program.  If not, see <http://www.gnu.org/licenses/>.
+ *
+ * In addition, as a special exception, the copyright holders give
+ * permission to link the code of portions of this program with the
+ * OpenSSL library under certain conditions as described in each
+ * individual source file, and distribute linked combinations
+ * including the two.
+ *
+ * You must obey the GNU Affero General Public License in all respects
+ * for all of the code used other than OpenSSL.
+ */
+
+
+#include "config.h"
+
+#ifdef HAVE_ERRNO_H
+#include <errno.h>
+#endif
+
+#ifdef HAVE_STRING_H
+#include <string.h>
+#endif
+
+#ifdef HAVE_FCNTL_H
+#include <fcntl.h>
+#endif
+
+#ifdef HAVE_KVM_H
+#include <kinfo.h>
+#endif
+
+#ifdef HAVE_KVM_H
+#include <kvm.h>
+#endif
+
+#ifdef HAVE_PATHS_H
+#include <paths.h>
+#endif
+
+#ifdef HAVE_SYS_PARAM_H
+#include <sys/param.h>
+#endif
+
+#ifdef HAVE_SYS_PROC_H
+#include <sys/proc.h>
+#endif
+
+#ifdef HAVE_SYS_USER_H
+#include <sys/user.h>
+#endif
+
+#ifdef HAVE_SYS_VMMETER_H
+#include <sys/vmmeter.h>
+#endif
+
+#ifdef HAVE_SYS_SYSCTL_H
+#include <sys/sysctl.h>
+#endif
+
+#ifdef HAVE_SYS_DKSTAT_H
+#include <sys/dkstat.h>
+#endif
+
+#include "monit.h"
+#include "process.h"
+#include "process_sysdep.h"
+
+
+/**
+ *  System dependent resource gathering code for DragonFly.
+ *
+ *  @file
+ */
+
+
+/* ----------------------------------------------------------------- Private */
+
+
+static int  hz;
+static int  pagesize_kbyte;
+static long total_old    = 0;
+static long cpu_user_old = 0;
+static long cpu_syst_old = 0;
+
+
+/* ------------------------------------------------------------------ Public */
+
+
+boolean_t init_process_info_sysdep(void) {
+        int              mib[2];
+        size_t           len;
+        struct clockinfo clock;
+
+        mib[0] = CTL_KERN;
+        mib[1] = KERN_CLOCKRATE;
+        len    = sizeof(clock);
+        if (sysctl(mib, 2, &clock, &len, NULL, 0) == -1) {
+                DEBUG("system statistic error -- cannot get clock rate: %s\n", STRERROR);
+                return false;
+        }
+        hz     = clock.hz;
+
+        mib[0] = CTL_HW;
+        mib[1] = HW_NCPU;
+        len    = sizeof(systeminfo.cpus);
+        if (sysctl(mib, 2, &systeminfo.cpus, &len, NULL, 0) == -1) {
+                DEBUG("system statistic error -- cannot get cpu count: %s\n", STRERROR);
+                return false;
+        }
+
+        mib[1] = HW_PHYSMEM;
+        len    = sizeof(systeminfo.mem_kbyte_max);
+        if (sysctl(mib, 2, &systeminfo.mem_kbyte_max, &len, NULL, 0) == -1) {
+                DEBUG("system statistic error -- cannot get real memory amount: %s\n", STRERROR);
+                return false;
+        }
+        systeminfo.mem_kbyte_max /= 1024;
+
+        mib[1] = HW_PAGESIZE;
+        len    = sizeof(pagesize_kbyte);
+        if (sysctl(mib, 2, &pagesize_kbyte, &len, NULL, 0) == -1) {
+                DEBUG("system statistic error -- cannot get memory page size: %s\n", STRERROR);
+                return false;
+        }
+        pagesize_kbyte /= 1024;
+
+        return true;
+}
+
+
+/**
+ * Read all processes to initialize the information tree.
+ * @param reference  reference of ProcessTree
+ * @return treesize>0 if succeeded otherwise =0.
+ */
+int initprocesstree_sysdep(ProcessTree_T **reference) {
+        int                treesize;
+        static kvm_t      *kvm_handle;
+        ProcessTree_T     *pt;
+        struct kinfo_proc *pinfo;
+
+        if (! (kvm_handle = kvm_open(NULL, _PATH_DEVNULL, NULL, O_RDONLY, prog))) {
+                LogError("system statistic error -- cannot initialize kvm interface\n");
+                return 0;
+        }
+
+        pinfo = kvm_getprocs(kvm_handle, KERN_PROC_ALL, 0, &treesize);
+        if (! pinfo || (treesize < 1)) {
+                LogError("system statistic error -- cannot get process tree\n");
+                kvm_close(kvm_handle);
+                return 0;
+        }
+
+        pt = CALLOC(sizeof(ProcessTree_T), treesize);
+
+        for (int i = 0; i < treesize; i++) {
+                StringBuffer_T cmdline = StringBuffer_create(64);
+                pt[i].pid       = pinfo[i].kp_pid;
+                pt[i].ppid      = pinfo[i].kp_ppid;
+                pt[i].uid       = pinfo[i].kp_ruid;
+                pt[i].euid      = pinfo[i].kp_uid;
+                pt[i].gid       = pinfo[i].kp_rgid;
+                pt[i].starttime = pinfo[i].kp_start.tv_sec;
+                pt[i].cputime   = (long)((pinfo[i].kp_lwp.kl_uticks + pinfo[i].kp_lwp.kl_sticks + pinfo[i].kp_lwp.kl_iticks) / 1000000);
+                pt[i].mem_kbyte = (unsigned long)(pinfo[i].kp_vm_rssize * pagesize_kbyte);
+                int flags       = pinfo[i].kp_stat;
+                char * procname = pinfo[i].kp_comm;
+                if (flags == SZOMB)
+                        pt[i].zombie = true;
+                pt[i].cpu_percent = 0;
+                pt[i].time = get_float_time();
+                char **args;
+                if ((args = kvm_getargv(kvm_handle, &pinfo[i], 0))) {
+                        for (int j = 0; args[j]; j++)
+                                StringBuffer_append(cmdline, args[j + 1] ? "%s " : "%s", args[j]);
+                        pt[i].cmdline = Str_dup(StringBuffer_toString(StringBuffer_trim(cmdline)));
+                }
+                StringBuffer_free(&cmdline);
+                if (! pt[i].cmdline || ! *pt[i].cmdline) {
+                        FREE(pt[i].cmdline);
+                        pt[i].cmdline = Str_dup(procname);
+                }
+        }
+
+        *reference = pt;
+        kvm_close(kvm_handle);
+
+        return treesize;
+}
+
+
+/**
+ * This routine returns 'nelem' double precision floats containing
+ * the load averages in 'loadv'; at most 3 values will be returned.
+ * @param loadv destination of the load averages
+ * @param nelem number of averages
+ * @return: 0 if successful, -1 if failed (and all load averages are 0).
+ */
+int getloadavg_sysdep(double *loadv, int nelem) {
+        return getloadavg(loadv, nelem);
+}
+
+
+/**
+ * This routine returns kbyte of real memory in use.
+ * @return: true if successful, false if failed (or not available)
+ */
+boolean_t used_system_memory_sysdep(SystemInfo_T *si) {
+        /* Memory */
+        size_t len = sizeof(unsigned int);
+        unsigned int active;
+        if (sysctlbyname("vm.stats.vm.v_active_count", &active, &len, NULL, 0) == -1) {
+                LogError("system statistic error -- cannot get for active memory usage: %s\n", STRERROR);
+                return false;
+        }
+        if (len != sizeof(unsigned int)) {
+                LogError("system statistic error -- active memory usage statics error\n");
+                return false;
+        }
+        unsigned int wired;
+        if (sysctlbyname("vm.stats.vm.v_wire_count", &wired, &len, NULL, 0) == -1) {
+                LogError("system statistic error -- cannot get for wired memory usage: %s\n", STRERROR);
+                return false;
+        }
+        if (len != sizeof(unsigned int)) {
+                LogError("system statistic error -- wired memory usage statics error\n");
+                return false;
+        }
+        si->total_mem_kbyte = (active + wired) * pagesize_kbyte;
+
+        /* Swap */
+        unsigned int used;
+        if (sysctlbyname("vm.swap_anon_use", &used, &len, NULL, 0) == -1) {
+                LogError("system statistic error -- cannot get swap usage: %s\n", STRERROR);
+                si->swap_kbyte_max = 0;
+                return false;
+        }
+        si->total_swap_kbyte = used * pagesize_kbyte;
+        if (sysctlbyname("vm.swap_cache_use", &used, &len, NULL, 0) == -1) {
+                LogError("system statistic error -- cannot get swap usage: %s\n", STRERROR);
+                si->swap_kbyte_max = 0;
+                return false;
+        }
+        si->total_swap_kbyte += used * pagesize_kbyte;
+        unsigned int free;
+        if (sysctlbyname("vm.swap_size", &free, &len, NULL, 0) == -1) {
+                LogError("system statistic error -- cannot get swap usage: %s\n", STRERROR);
+                si->swap_kbyte_max = 0;
+                return false;
+        }
+        si->swap_kbyte_max = free * pagesize_kbyte + si->total_swap_kbyte;
+        return true;
+}
+
+
+/**
+ * This routine returns system/user CPU time in use.
+ * @return: true if successful, false if failed
+ */
+boolean_t used_system_cpu_sysdep(SystemInfo_T *si) {
+        int    mib[2];
+        long   cp_time[CPUSTATES];
+        long   total_new = 0;
+        long   total;
+        size_t len;
+
+        len = sizeof(mib);
+        if (sysctlnametomib("kern.cp_time", mib, &len) == -1) {
+                LogError("system statistic error -- cannot get cpu time handler: %s\n", STRERROR);
+                return false;
+        }
+
+        len = sizeof(cp_time);
+        if (sysctl(mib, 2, &cp_time, &len, NULL, 0) == -1) {
+                LogError("system statistic error -- cannot get cpu time: %s\n", STRERROR);
+                return false;
+        }
+
+        for (int i = 0; i < CPUSTATES; i++)
+                total_new += cp_time[i];
+
+        total     = total_new - total_old;
+        total_old = total_new;
+
+        si->total_cpu_user_percent = (total > 0) ? (int)(1000 * (double)(cp_time[CP_USER] - cpu_user_old) / total) : -10;
+        si->total_cpu_syst_percent = (total > 0) ? (int)(1000 * (double)(cp_time[CP_SYS] - cpu_syst_old) / total) : -10;
+        si->total_cpu_wait_percent = 0; /* there is no wait statistic available */
+
+        cpu_user_old = cp_time[CP_USER];
+        cpu_syst_old = cp_time[CP_SYS];
+
+        return true;
+}
