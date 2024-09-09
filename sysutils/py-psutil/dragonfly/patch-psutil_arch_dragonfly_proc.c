--- psutil/arch/dragonfly/proc.c.orig	2024-05-17 10:32:28 UTC
+++ psutil/arch/dragonfly/proc.c
@@ -0,0 +1,519 @@
+/*
+ * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
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
+#include <devstat.h>
+#include <libutil.h>  // process open files, shared libs (kinfo_getvmmap), cwd
+
+#include "../../_psutil_common.h"
+#include "../../_psutil_posix.h"
+
+#define PSUTIL_TV2DOUBLE(t)    ((t).tv_sec + (t).tv_usec / 1000000.0)
+
+// ============================================================================
+// Utility functions
+// ============================================================================
+
+
+int
+psutil_kinfo_proc(pid_t pid, struct kinfo_proc *proc) {
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
+        PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_PID)");
+        return -1;
+    }
+
+    // sysctl stores 0 in the size if we can't find the process information.
+    if (size == 0) {
+        NoSuchProcess("sysctl (size = 0)");
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
+    // this list. On success returns 0, else 1 with exception set.
+    int err;
+    struct kinfo_proc *buf = NULL;
+    int name[] = { CTL_KERN, KERN_PROC, KERN_PROC_ALL, 0 };
+    size_t length = 0;
+
+    assert(procList != NULL);
+    assert(*procList == NULL);
+    assert(procCount != NULL);
+
+    // Call sysctl with a NULL buffer in order to get buffer length.
+    err = sysctl(name, 3, NULL, &length, NULL, 0);
+    if (err == -1) {
+        PyErr_SetFromOSErrnoWithSyscall("sysctl (null buffer)");
+        return 1;
+    }
+
+    // Allocate an appropriately sized buffer based on the results
+    // from the previous call.
+    buf = malloc(length);
+    if (buf == NULL) {
+        PyErr_NoMemory();
+        return 1;
+    }
+
+    // Call sysctl again with the new buffer.
+    err = sysctl(name, 3, buf, &length, NULL, 0);
+    if (err == -1) {
+        PyErr_SetFromOSErrnoWithSyscall("sysctl");
+        free(buf);
+        return 1;
+    }
+
+    *procList = buf;
+    *procCount = length / sizeof(struct kinfo_proc);
+    return 0;
+}
+
+/*
+ * Borrowed from psi Python System Information project
+ * Based on code from ps.
+ */
+PyObject *
+psutil_proc_cmdline(PyObject *self, PyObject *args) {
+    pid_t pid;
+    int mib[4];
+    int argmax;
+    size_t size = sizeof(argmax);
+    char *procargs = NULL;
+    size_t pos = 0;
+    PyObject *py_retlist = PyList_New(0);
+    PyObject *py_arg = NULL;
+
+    if (py_retlist == NULL)
+        return NULL;
+    if (! PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+        goto error;
+
+    // Get the maximum process arguments size.
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_ARGMAX;
+
+    size = sizeof(argmax);
+    if (sysctl(mib, 2, &argmax, &size, NULL, 0) == -1)
+        goto error;
+
+    // Allocate space for the arguments.
+    procargs = (char *)malloc(argmax);
+    if (procargs == NULL) {
+        PyErr_NoMemory();
+        goto error;
+    }
+
+    // Make a sysctl() call to get the raw argument space of the process.
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_ARGS;
+    mib[3] = pid;
+
+    size = argmax;
+    if (sysctl(mib, 4, procargs, &size, NULL, 0) == -1) {
+        PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_ARGS)");
+        goto error;
+    }
+
+    // args are returned as a flattened string with \0 separators between
+    // arguments add each string to the list then step forward to the next
+    // separator
+    if (size > 0) {
+        while (pos < size) {
+            py_arg = PyUnicode_DecodeFSDefault(&procargs[pos]);
+            if (!py_arg)
+                goto error;
+            if (PyList_Append(py_retlist, py_arg))
+                goto error;
+            Py_DECREF(py_arg);
+            pos = pos + strlen(&procargs[pos]) + 1;
+        }
+    }
+
+    free(procargs);
+    return py_retlist;
+
+error:
+    Py_XDECREF(py_arg);
+    Py_DECREF(py_retlist);
+    if (procargs != NULL)
+        free(procargs);
+    return NULL;
+}
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
+*psutil_get_cmd_args(pid_t pid, size_t *argsize) {
+    int mib[4];
+    int argmax;
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
+    // Make a sysctl() call to get the raw argument space of the process.
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_ARGS;
+    mib[3] = pid;
+
+    size = argmax;
+    if (sysctl(mib, 4, procargs, &size, NULL, 0) == -1) {
+        free(procargs);
+        PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_ARGS)");
+        return NULL;
+    }
+
+    // return string and set the length of arguments
+    *argsize = size;
+    return procargs;
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
+    pid_t pid;
+    char pathname[PATH_MAX];
+    int error;
+    int mib[4];
+    int ret;
+    size_t size;
+
+    if (! PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
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
+        // see: https://github.com/giampaolo/psutil/issues/907
+        if (errno == ENOENT) {
+            return PyUnicode_DecodeFSDefault("");
+        }
+        else {
+            return \
+                PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_PATHNAME)");
+        }
+    }
+    if (size == 0 || strlen(pathname) == 0) {
+        ret = psutil_pid_exists(pid);
+        if (ret == -1)
+            return NULL;
+        else if (ret == 0)
+            return NoSuchProcess("psutil_pid_exists -> 0");
+        else
+            strcpy(pathname, "");
+    }
+
+    return PyUnicode_DecodeFSDefault(pathname);
+}
+
+
+PyObject *
+psutil_proc_num_threads(PyObject *self, PyObject *args) {
+    // Return number of threads used by process as a Python integer.
+    pid_t pid;
+    struct kinfo_proc kp;
+    if (! PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+        return NULL;
+    if (psutil_kinfo_proc(pid, &kp) == -1)
+        return NULL;
+    return Py_BuildValue("l", (long)kp.kp_nthreads);
+}
+
+
+PyObject *
+psutil_proc_threads(PyObject *self, PyObject *args) {
+    // Retrieves all threads used by process returning a list of tuples
+    // including thread id, user time and system time.
+    // Thanks to Robert N. M. Watson:
+    // http://code.metager.de/source/xref/freebsd/usr.bin/procstat/
+    //     procstat_threads.c
+    pid_t pid;
+    int mib[4];
+    struct kinfo_proc *kip = NULL;
+    struct kinfo_proc *kipp = NULL;
+    int error;
+    unsigned int i;
+    size_t size;
+    PyObject *py_retlist = PyList_New(0);
+    PyObject *py_tuple = NULL;
+
+    if (py_retlist == NULL)
+        return NULL;
+    if (! PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+        goto error;
+
+    // we need to re-query for thread information, so don't use *kipp
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_PID | KERN_PROC_FLAG_LWP;
+    mib[3] = pid;
+
+    size = 0;
+    error = sysctl(mib, 4, NULL, &size, NULL, 0);
+    if (error == -1) {
+        PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_INC_THREAD)");
+        goto error;
+    }
+    if (size == 0) {
+        NoSuchProcess("sysctl (size = 0)");
+        goto error;
+    }
+
+    kip = malloc(size);
+    if (kip == NULL) {
+        PyErr_NoMemory();
+        goto error;
+    }
+
+    error = sysctl(mib, 4, kip, &size, NULL, 0);
+    if (error == -1) {
+        PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_INC_THREAD)");
+        goto error;
+    }
+    if (size == 0) {
+        NoSuchProcess("sysctl (size = 0)");
+        goto error;
+    }
+
+    for (i = 0; i < size / sizeof(*kipp); i++) {
+        kipp = &kip[i];
+        py_tuple = Py_BuildValue("Idd",
+                                 kipp->kp_lwp.kl_tid,
+                                 PSUTIL_TV2DOUBLE(kipp->kp_lwp.kl_ru.ru_utime),
+                                 PSUTIL_TV2DOUBLE(kipp->kp_lwp.kl_ru.ru_stime));
+        if (py_tuple == NULL)
+            goto error;
+        if (PyList_Append(py_retlist, py_tuple))
+            goto error;
+        Py_DECREF(py_tuple);
+    }
+    free(kip);
+    return py_retlist;
+
+error:
+    Py_XDECREF(py_tuple);
+    Py_DECREF(py_retlist);
+    if (kip != NULL)
+        free(kip);
+    return NULL;
+}
+
+PyObject *
+psutil_proc_cwd(PyObject *self, PyObject *args) {
+    size_t size;
+    pid_t pid;
+    int error;
+    char *cwd;
+    int mib[4];
+    PyObject *py_path = NULL;
+
+    int i, cnt;
+
+    if (! PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+	    goto out;
+
+    // Allocate space for the arguments.
+    cwd = (char *)malloc(PATH_MAX);
+    if (cwd == NULL) {
+        PyErr_NoMemory();
+        return NULL;
+    }
+
+    mib[0] = CTL_KERN;
+    mib[1] = KERN_PROC;
+    mib[2] = KERN_PROC_CWD;
+    mib[3] = pid;
+    error = sysctl(mib, 4, cwd, &size, NULL, 0);
+    if (error == -1) {
+	    free(cwd);
+	    PyErr_SetFromOSErrnoWithSyscall("sysctl(KERN_PROC_CWD)");
+	    return NULL;
+    }
+
+    py_path = PyUnicode_DecodeFSDefault(cwd);
+    if (!py_path)
+	    goto out;
+
+    return py_path;
+
+out:
+    Py_XDECREF(py_path);
+    if (cwd != NULL)
+        free(cwd);
+    return NULL;
+}
+
+PyObject*
+psutil_proc_cpu_affinity_get(PyObject* self, PyObject* args) {
+    // Get process CPU affinity.
+    // Reference:
+    // http://sources.freebsd.org/RELENG_9/src/usr.bin/cpuset/cpuset.c
+    pid_t pid;
+    int ret;
+    int i;
+    cpu_set_t mask;
+    PyObject* py_retlist;
+    PyObject* py_cpu_num;
+
+    CPU_ZERO(&mask);
+
+    if (!PyArg_ParseTuple(args, _Py_PARSE_PID, &pid))
+        return NULL;
+    ret = sched_getaffinity(pid, sizeof(mask), &mask);
+    if (ret != 0)
+        return PyErr_SetFromErrno(PyExc_OSError);
+
+    py_retlist = PyList_New(0);
+    if (py_retlist == NULL)
+        return NULL;
+
+    for (i = 0; i < CPU_SETSIZE; i++) {
+        if (CPU_ISSET(i, &mask)) {
+            py_cpu_num = Py_BuildValue("i", i);
+            if (py_cpu_num == NULL)
+                goto error;
+            if (PyList_Append(py_retlist, py_cpu_num))
+                goto error;
+        }
+    }
+
+    return py_retlist;
+
+error:
+    Py_XDECREF(py_cpu_num);
+    Py_DECREF(py_retlist);
+    return NULL;
+}
+
+
+PyObject *
+psutil_proc_cpu_affinity_set(PyObject *self, PyObject *args) {
+    // Set process CPU affinity.
+    // Reference:
+    // http://sources.freebsd.org/RELENG_9/src/usr.bin/cpuset/cpuset.c
+    pid_t pid;
+    int i;
+    int seq_len;
+    int ret;
+    cpu_set_t cpu_set;
+    PyObject *py_cpu_set;
+    PyObject *py_cpu_seq = NULL;
+
+    if (!PyArg_ParseTuple(args, _Py_PARSE_PID "O", &pid, &py_cpu_set))
+        return NULL;
+
+    py_cpu_seq = PySequence_Fast(py_cpu_set, "expected a sequence or integer");
+    if (!py_cpu_seq)
+        return NULL;
+    seq_len = PySequence_Fast_GET_SIZE(py_cpu_seq);
+
+    // calculate the mask
+    CPU_ZERO(&cpu_set);
+    for (i = 0; i < seq_len; i++) {
+        PyObject *item = PySequence_Fast_GET_ITEM(py_cpu_seq, i);
+#if PY_MAJOR_VERSION >= 3
+        long value = PyLong_AsLong(item);
+#else
+        long value = PyInt_AsLong(item);
+#endif
+        if (value == -1 || PyErr_Occurred())
+            goto error;
+        CPU_SET(value, &cpu_set);
+    }
+
+    // set affinity
+    ret = sched_setaffinity(pid, sizeof(cpu_set), &cpu_set);
+    if (ret != 0) {
+        PyErr_SetFromErrno(PyExc_OSError);
+        goto error;
+    }
+
+    Py_DECREF(py_cpu_seq);
+    Py_RETURN_NONE;
+
+error:
+    if (py_cpu_seq != NULL)
+        Py_DECREF(py_cpu_seq);
+    return NULL;
+}
