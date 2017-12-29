--- /dev/null  2017-10-13 14:10:04 UTC
+++ psutil/arch/bsd/dragonfly.c
@@ -0,0 +1,562 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ *
+ * Platform-specific module methods for DragonFly BSD.
+ */
+
+#include <Python.h>
+#include <assert.h>
+#include <errno.h>
+#include <stdlib.h>
+#include <stdio.h>
+#include <string.h>
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#include <sys/param.h>
+#include <sys/user.h>
+#include <sys/proc.h>
+#include <signal.h>
+#include <fcntl.h>
+#include <sys/vmmeter.h>  // needed for vmtotal struct
+#include <devstat.h>  // for swap mem
+#include <libutil.h>  // process open files, shared libs (kinfo_getvmmap), cwd
+#include <kvm.h>
+
+#include "../../_psutil_common.h"
+#include "../../_psutil_posix.h"
+
+#define PSUTIL_TV2DOUBLE(t)    ((t).tv_sec + (t).tv_usec / 1000000.0)
+#define PSUTIL_BT2MSEC(bt) (bt.sec * 1000 + (((uint64_t) 1000000000 * (uint32_t) \
+        (bt.frac >> 32) ) >> 32 ) / 1000000)
+#ifndef _PATH_DEVNULL
+#define _PATH_DEVNULL "/dev/null"
+#endif
+
+
+// ============================================================================
+// Utility functions
+// ============================================================================
+
+
+int
+psutil_kinfo_proc(const pid_t pid, struct kinfo_proc *proc) {
+    // Fills a kinfo_proc struct based on process pid.
+    int mib[4];
+    size_t size;
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_PID;
+    mib[3] = pid;
+
+    size = sizeof(struct kinfo_proc);
+    if (sysctl((int *)mib, 4, proc, &size, NULL, 0) == -1) {
+        PyErr_SetFromErrno(PyExc_OSError);
+        return -1;
+    }
+
+    // sysctl stores 0 in the size if we can't find the process information.
+    if (size == 0) {
+        NoSuchProcess("");
+        return -1;
+    }
+    return 0;
+}
+
+
+// remove spaces from string
+static void psutil_remove_spaces(char *str) {
+    char *p1 = str;
+    char *p2 = str;
+    do
+        while (*p2 == ' ')
+            p2++;
+    while ((*p1++ = *p2++));
+}
+
+
+// ============================================================================
+// APIS
+// ============================================================================
+
+int
+psutil_get_proc_list(struct kinfo_proc **procList, size_t *procCount) {
+    // Returns a list of all BSD processes on the system.  This routine
+    // allocates the list and puts it in *procList and a count of the
+    // number of entries in *procCount.  You are responsible for freeing
+    // this list (use "free" from System framework).
+    // On success, the function returns 0.
+    // On error, the function returns a BSD errno value.
+
+    /* XXX: not implemented */
+
+    *procList = NULL;
+    *procCount = 0;
+
+    return 0;
+}
+
+
+/*
+ * XXX no longer used; it probably makese sense to remove it.
+ * Borrowed from psi Python System Information project
+ *
+ * Get command arguments and environment variables.
+ *
+ * Based on code from ps.
+ *
+ * Returns:
+ *      0 for success;
+ *      -1 for failure (Exception raised);
+ *      1 for insufficient privileges.
+ */
+static char
+*psutil_get_cmd_args(long pid, size_t *argsize) {
+    int mib[4], argmax;
+    size_t size = sizeof(argmax);
+    char *procargs = NULL;
+
+    // Get the maximum process arguments size.
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_ARGMAX;
+
+    size = sizeof(argmax);
+    if (sysctl(mib, 2, &argmax, &size, NULL, 0) == -1)
+        return NULL;
+
+    // Allocate space for the arguments.
+    procargs = (char *)malloc(argmax);
+    if (procargs == NULL) {
+        PyErr_NoMemory();
+        return NULL;
+    }
+
+    /*
+     * Make a sysctl() call to get the raw argument space of the process.
+     */
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_ARGS;
+    mib[3] = pid;
+
+    size = argmax;
+    if (sysctl(mib, 4, procargs, &size, NULL, 0) == -1) {
+        free(procargs);
+        return NULL;       // Insufficient privileges
+    }
+
+    // return string and set the length of arguments
+    *argsize = size;
+    return procargs;
+}
+
+
+// returns the command line as a python list object
+PyObject *
+psutil_get_cmdline(long pid) {
+    char *argstr = NULL;
+    int pos = 0;
+    size_t argsize = 0;
+    PyObject *py_retlist = Py_BuildValue("[]");
+    PyObject *py_arg = NULL;
+
+    if (pid < 0)
+        return py_retlist;
+    argstr = psutil_get_cmd_args(pid, &argsize);
+    if (argstr == NULL)
+        goto error;
+
+    // args are returned as a flattened string with \0 separators between
+    // arguments add each string to the list then step forward to the next
+    // separator
+    if (argsize > 0) {
+        while (pos < argsize) {
+#if PY_MAJOR_VERSION >= 3
+            py_arg = PyUnicode_DecodeFSDefault(&argstr[pos]);
+#else
+            py_arg = Py_BuildValue("s", &argstr[pos]);
+#endif
+            if (!py_arg)
+                goto error;
+            if (PyList_Append(py_retlist, py_arg))
+                goto error;
+            Py_DECREF(py_arg);
+            pos = pos + strlen(&argstr[pos]) + 1;
+        }
+    }
+
+    free(argstr);
+    return py_retlist;
+
+error:
+    Py_XDECREF(py_arg);
+    Py_DECREF(py_retlist);
+    if (argstr != NULL)
+        free(argstr);
+    return NULL;
+}
+
+
+/*
+ * Return process pathname executable.
+ * Thanks to Robert N. M. Watson:
+ * http://fxr.googlebit.com/source/usr.bin/procstat/procstat_bin.c?v=8-CURRENT
+ */
+PyObject *
+psutil_proc_exe(PyObject *self, PyObject *args) {
+    long pid;
+    char pathname[PATH_MAX];
+    int error;
+    int mib[4];
+    int ret;
+    size_t size;
+    const char *encoding_errs;
+
+    if (! PyArg_ParseTuple(args, "l", &pid))
+        return NULL;
+
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_PATHNAME;
+    mib[3] = pid;
+
+    size = sizeof(pathname);
+    error = sysctl(mib, 4, pathname, &size, NULL, 0);
+    if (error == -1) {
+        if (errno == ENOENT) {
+            // see: https://github.com/giampaolo/psutil/issues/907
+            return Py_BuildValue("s", "");
+        }
+        else {
+            PyErr_SetFromErrno(PyExc_OSError);
+            return NULL;
+        }
+    }
+    if (size == 0 || strlen(pathname) == 0) {
+        ret = psutil_pid_exists(pid);
+        if (ret == -1)
+            return NULL;
+        else if (ret == 0)
+            return NoSuchProcess("");
+        else
+            strcpy(pathname, "");
+    }
+
+#if PY_MAJOR_VERSION >= 3
+    return PyUnicode_DecodeFSDefault(pathname);
+#else
+    return Py_BuildValue("s", pathname);
+#endif
+
+}
+
+
+PyObject *
+psutil_proc_num_threads(PyObject *self, PyObject *args) {
+    // Return number of threads used by process as a Python integer.
+    long pid;
+    struct kinfo_proc kp;
+    if (! PyArg_ParseTuple(args, "l", &pid))
+        return NULL;
+    if (psutil_kinfo_proc(pid, &kp) == -1)
+        return NULL;
+    return Py_BuildValue("l", (long)kp.kp_nthreads);
+}
+
+PyObject *
+psutil_proc_connections(PyObject *self, PyObject *args) {
+    /* XXX: not implemented */
+
+    return NULL;
+}
+
+PyObject *
+psutil_proc_threads(PyObject *self, PyObject *args) {
+    // Retrieves all threads used by process returning a list of tuples
+    // including thread id, user time and system time.
+
+    /* XXX: not implemented */
+    return NULL;
+}
+
+
+PyObject *
+psutil_cpu_count_phys(PyObject *self, PyObject *args) {
+    // Return an XML string from which we'll determine the number of
+    // physical CPU cores in the system.
+
+    /* XXX: not implemented */
+    return NULL;
+}
+
+
+/*
+ * Return virtual memory usage statistics.
+ */
+PyObject *
+psutil_virtual_mem(PyObject *self, PyObject *args) {
+    unsigned long  total;
+    unsigned int   active, inactive, wired, cached, free;
+    size_t         size = sizeof(total);
+    struct vmtotal vm;
+    long           pagesize = getpagesize();
+    long buffers;
+    size_t buffers_size = sizeof(buffers);
+
+    if (sysctlbyname("hw.physmem", &total, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.vm.v_active_count", &active, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.vm.v_inactive_count",
+                     &inactive, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.vm.v_wire_count", &wired, &size, NULL, 0))
+        goto error;
+    // https://github.com/giampaolo/psutil/issues/997
+    if (sysctlbyname("vm.stats.vm.v_cache_count", &cached, &size, NULL, 0))
+        cached = 0;
+    if (sysctlbyname("vm.stats.vm.v_free_count", &free, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vfs.bufspace", &buffers, &buffers_size, NULL, 0))
+        goto error;
+
+    size = sizeof(vm);
+    if (sysctlbyname("vm.vmtotal", &vm, &size, NULL, 0))
+        goto error;
+
+    return Py_BuildValue("KKKKKKKK",
+        (unsigned long long) total,
+        (unsigned long long) free     * pagesize,
+        (unsigned long long) active   * pagesize,
+        (unsigned long long) inactive * pagesize,
+        (unsigned long long) wired    * pagesize,
+        (unsigned long long) cached   * pagesize,
+        (unsigned long long) buffers,
+        (unsigned long long) (vm.t_vmshr + vm.t_rmshr) * pagesize  // shared
+    );
+
+error:
+    PyErr_SetFromErrno(PyExc_OSError);
+    return NULL;
+}
+
+
+PyObject *
+psutil_swap_mem(PyObject *self, PyObject *args) {
+    // Return swap memory stats (see 'swapinfo' cmdline tool)
+    kvm_t *kd;
+    struct kvm_swap kvmsw[1];
+    unsigned int swapin, swapout, nodein, nodeout;
+    size_t size = sizeof(unsigned int);
+
+    kd = kvm_open(NULL, _PATH_DEVNULL, NULL, O_RDONLY, "kvm_open failed");
+    if (kd == NULL) {
+        PyErr_SetString(PyExc_RuntimeError, "kvm_open() syscall failed");
+        return NULL;
+    }
+
+    if (kvm_getswapinfo(kd, kvmsw, 1, 0) < 0) {
+        kvm_close(kd);
+        PyErr_SetString(PyExc_RuntimeError,
+                        "kvm_getswapinfo() syscall failed");
+        return NULL;
+    }
+
+    kvm_close(kd);
+
+    if (sysctlbyname("vm.stats.vm.v_swapin", &swapin, &size, NULL, 0) == -1)
+        goto sbn_error;
+    if (sysctlbyname("vm.stats.vm.v_swapout", &swapout, &size, NULL, 0) == -1)
+        goto sbn_error;
+    if (sysctlbyname("vm.stats.vm.v_vnodein", &nodein, &size, NULL, 0) == -1)
+        goto sbn_error;
+    if (sysctlbyname("vm.stats.vm.v_vnodeout", &nodeout, &size, NULL, 0) == -1)
+        goto sbn_error;
+
+    return Py_BuildValue("(iiiII)",
+                         kvmsw[0].ksw_total,                     // total
+                         kvmsw[0].ksw_used,                      // used
+                         kvmsw[0].ksw_total - kvmsw[0].ksw_used, // free
+                         swapin + swapout,                       // swap in
+                         nodein + nodeout);                      // swap out
+
+sbn_error:
+    PyErr_SetFromErrno(PyExc_OSError);
+    return NULL;
+}
+
+
+PyObject *
+psutil_proc_cwd(PyObject *self, PyObject *args) {
+    /* XXX: not implemented */
+
+    return NULL;
+}
+
+PyObject *
+psutil_proc_num_fds(PyObject *self, PyObject *args) {
+    /* XXX: not implemented */
+
+    return NULL;
+}
+
+PyObject *
+psutil_per_cpu_times(PyObject *self, PyObject *args) {
+    static int maxcpus;
+    int mib[2];
+    int ncpu;
+    size_t len;
+    size_t size;
+    int i;
+    PyObject *py_retlist = PyList_New(0);
+    PyObject *py_cputime = NULL;
+
+    if (py_retlist == NULL)
+        return NULL;
+
+    // retrieve maxcpus value
+    size = sizeof(maxcpus);
+    if (sysctlbyname("hw.ncpu", &maxcpus, &size, NULL, 0) < 0) {
+        Py_DECREF(py_retlist);
+        PyErr_SetFromErrno(PyExc_OSError);
+        return NULL;
+    }
+    long cpu_time[maxcpus][CPUSTATES];
+
+    // retrieve the number of cpus
+    mib[0] = CTL_HW;
+    mib[1] = HW_NCPU;
+    len = sizeof(ncpu);
+    if (sysctl(mib, 2, &ncpu, &len, NULL, 0) == -1) {
+        PyErr_SetFromErrno(PyExc_OSError);
+        goto error;
+    }
+
+    // per-cpu info
+    size = sizeof(cpu_time);
+    if (sysctlbyname("kern.cp_times", &cpu_time, &size, NULL, 0) == -1) {
+        PyErr_SetFromErrno(PyExc_OSError);
+        goto error;
+    }
+
+    for (i = 0; i < ncpu; i++) {
+        py_cputime = Py_BuildValue(
+            "(ddddd)",
+            (double)cpu_time[i][CP_USER] / CLOCKS_PER_SEC,
+            (double)cpu_time[i][CP_NICE] / CLOCKS_PER_SEC,
+            (double)cpu_time[i][CP_SYS] / CLOCKS_PER_SEC,
+            (double)cpu_time[i][CP_IDLE] / CLOCKS_PER_SEC,
+            (double)cpu_time[i][CP_INTR] / CLOCKS_PER_SEC);
+        if (!py_cputime)
+            goto error;
+        if (PyList_Append(py_retlist, py_cputime))
+            goto error;
+        Py_DECREF(py_cputime);
+    }
+
+    return py_retlist;
+
+error:
+    Py_XDECREF(py_cputime);
+    Py_DECREF(py_retlist);
+    return NULL;
+}
+
+
+PyObject *
+psutil_disk_io_counters(PyObject *self, PyObject *args) {
+    /* XXX: not implemented */
+    return NULL;
+}
+
+
+PyObject *
+psutil_proc_memory_maps(PyObject *self, PyObject *args) {
+    // Return a list of tuples for every process memory maps.
+    //'procstat' cmdline utility has been used as an example.
+
+    /* XXX: not implemented */
+    return NULL;
+}
+
+
+PyObject*
+psutil_proc_cpu_affinity_get(PyObject* self, PyObject* args) {
+    // Get process CPU affinity.
+    // Reference:
+    // http://sources.freebsd.org/RELENG_9/src/usr.bin/cpuset/cpuset.c
+
+    /* XXX: not implemented */
+    return NULL;
+}
+
+
+PyObject *
+psutil_proc_cpu_affinity_set(PyObject *self, PyObject *args) {
+    // Set process CPU affinity.
+    // Reference:
+    // http://sources.freebsd.org/RELENG_9/src/usr.bin/cpuset/cpuset.c
+
+    /* XXX: not implemented */
+    return NULL;
+}
+
+
+PyObject *
+psutil_cpu_stats(PyObject *self, PyObject *args) {
+    unsigned int v_soft;
+    unsigned int v_intr;
+    unsigned int v_syscall;
+    unsigned int v_trap;
+    unsigned int v_swtch;
+    size_t size = sizeof(v_soft);
+
+    if (sysctlbyname("vm.stats.sys.v_soft", &v_soft, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.sys.v_intr", &v_intr, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.sys.v_syscall", &v_syscall, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.sys.v_trap", &v_trap, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("vm.stats.sys.v_swtch", &v_swtch, &size, NULL, 0))
+        goto error;
+
+    return Py_BuildValue(
+        "IIIII",
+        v_swtch,  // ctx switches
+        v_intr,  // interrupts
+        v_soft,  // software interrupts
+        v_syscall,  // syscalls
+        v_trap  // traps
+    );
+
+error:
+    PyErr_SetFromErrno(PyExc_OSError);
+    return NULL;
+}
+
+
+/*
+ * Return battery information.
+ */
+PyObject *
+psutil_sensors_battery(PyObject *self, PyObject *args) {
+    int percent;
+    int minsleft;
+    int power_plugged;
+    size_t size = sizeof(percent);
+
+    if (sysctlbyname("hw.acpi.battery.life", &percent, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("hw.acpi.battery.time", &minsleft, &size, NULL, 0))
+        goto error;
+    if (sysctlbyname("hw.acpi.acline", &power_plugged, &size, NULL, 0))
+        goto error;
+    return Py_BuildValue("iii", percent, minsleft, power_plugged);
+
+error:
+    PyErr_SetFromErrno(PyExc_OSError);
+    return NULL;
+}
