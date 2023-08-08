--- psutil/_psutil_bsd.c.orig	2023-04-17 15:01:41 UTC
+++ psutil/_psutil_bsd.c
@@ -105,6 +105,17 @@
     #ifndef DTYPE_VNODE
         #define DTYPE_VNODE 1
     #endif
+#elif PSUTIL_DRAGONFLY
+    #include "arch/dragonfly/cpu.h"
+    #include "arch/dragonfly/mem.h"
+    #include "arch/dragonfly/disk.h"
+    #include "arch/dragonfly/sensors.h"
+    #include "arch/dragonfly/proc.h"
+    #include "arch/dragonfly/sys_socks.h"
+    #include "arch/dragonfly/proc_socks.h"
+    #include <sys/resource.h>
+
+    #include <utmpx.h>
 #endif
 
 
@@ -139,11 +150,17 @@ psutil_pids(PyObject *self, PyObject *ar
         for (idx = 0; idx < num_processes; idx++) {
 #ifdef PSUTIL_FREEBSD
             py_pid = PyLong_FromPid(proclist->ki_pid);
+#elif defined(PSUTIL_DRAGONFLY)
+	    py_pid = PyLong_FromPid(proclist->kp_pid);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
             py_pid = PyLong_FromPid(proclist->p_pid);
 #endif
             if (!py_pid)
                 goto error;
+#ifdef PSUTIL_DRAGONFLY
+	    /* TODO(tuxillo): Kernel threads not included for now */
+	    if (proclist->kp_pid != -1)
+#endif
             if (PyList_Append(py_retlist, py_pid))
                 goto error;
             Py_CLEAR(py_pid);
@@ -208,6 +225,8 @@ psutil_proc_oneshot_info(PyObject *self,
     // Process
 #ifdef PSUTIL_FREEBSD
     sprintf(str, "%s", kp.ki_comm);
+#elif defined(PSUTIL_DRAGONFLY)
+    sprintf(str, "%s", kp.kp_comm);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     sprintf(str, "%s", kp.p_comm);
 #endif
@@ -227,6 +246,12 @@ psutil_proc_oneshot_info(PyObject *self,
     memtext = (long)kp.ki_tsize * pagesize;
     memdata = (long)kp.ki_dsize * pagesize;
     memstack = (long)kp.ki_ssize * pagesize;
+#elif PSUTIL_DRAGONFLY
+    rss = (long)kp.kp_vm_rssize * pagesize;
+    vms = (long)kp.kp_vm_map_size;
+    memtext = (long)kp.kp_vm_tsize * pagesize;
+    memdata = (long)kp.kp_vm_dsize * pagesize;
+    memstack = (long)kp.kp_vm_ssize * pagesize;
 #else
     rss = (long)kp.p_vm_rssize * pagesize;
     #ifdef PSUTIL_OPENBSD
@@ -254,6 +279,8 @@ psutil_proc_oneshot_info(PyObject *self,
         oncpu = kp.ki_oncpu;
     else
         oncpu = kp.ki_lastcpu;
+#elif defined(PSUTIL_DRAGONFLY)
+    oncpu = kp.kp_lwp.kl_cpuid;
 #else
     // On Net/OpenBSD we have kp.p_cpuid but it appears it's always
     // set to KI_NOCPU. Even if it's not, ki_lastcpu does not exist
@@ -264,6 +291,8 @@ psutil_proc_oneshot_info(PyObject *self,
 
 #ifdef PSUTIL_FREEBSD
     py_ppid = PyLong_FromPid(kp.ki_ppid);
+#elif defined(PSUTIL_DRAGONFLY)
+    py_ppid = PyLong_FromPid(kp.kp_ppid);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     py_ppid = PyLong_FromPid(kp.p_ppid);
 #else
@@ -312,6 +341,39 @@ psutil_proc_oneshot_info(PyObject *self,
         memstack,                         // (long) mem stack
         // others
         oncpu,                            // (int) the CPU we are on
+#elif defined(PSUTIL_DRAGONFLY)
+        py_ppid,                         // (pid_t) ppid
+        (int)kp.kp_stat,                 // (int) status
+        // UIDs
+        (long)kp.kp_ruid,                // (long) real uid
+        (long)kp.kp_uid,                 // (long) effective uid
+        (long)kp.kp_svuid,               // (long) saved uid
+        // GIDs
+        (long)kp.kp_rgid,                // (long) real gid
+        (long)kp.kp_groups[0],           // (long) effective gid
+        (long)kp.kp_svuid,               // (long) saved gid
+        //
+        kp.kp_tdev,                      // (int or long long) tty nr
+        PSUTIL_TV2DOUBLE(kp.kp_start),   // (double) create time
+        // ctx switches
+        kp.kp_ru.ru_nvcsw,           // (long) ctx switches (voluntary)
+        kp.kp_ru.ru_nivcsw,          // (long) ctx switches (unvoluntary)
+        // IO count
+        kp.kp_ru.ru_inblock,         // (long) read io count
+        kp.kp_ru.ru_oublock,         // (long) write io count
+        // CPU times: convert from micro seconds to seconds.
+        PSUTIL_TV2DOUBLE(kp.kp_ru.ru_utime),     // (double) user time
+        PSUTIL_TV2DOUBLE(kp.kp_ru.ru_stime),     // (double) sys time
+        PSUTIL_TV2DOUBLE(kp.kp_cru.ru_utime),  // (double) children utime
+        PSUTIL_TV2DOUBLE(kp.kp_cru.ru_stime),  // (double) children stime
+        // memory
+        rss,                              // (long) rss
+        vms,                              // (long) vms
+        memtext,                          // (long) mem text
+        memdata,                          // (long) mem data
+        memstack,                         // (long) mem stack
+        // others
+        oncpu,                            // (int) the CPU we are on
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
         py_ppid,                         // (pid_t) ppid
         (int)kp.p_stat,                  // (int) status
@@ -416,8 +478,10 @@ psutil_proc_environ(PyObject *self, PyOb
     if (!PyArg_ParseTuple(args, "l", &pid))
         return NULL;
 
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     kd = kvm_openfiles(NULL, "/dev/null", NULL, 0, errbuf);
+#elif defined(PSUTIL_DRAGONFLY)
+    kd = kvm_openfiles(NULL, NULL, NULL, O_RDONLY, errbuf);
 #else
     kd = kvm_openfiles(NULL, NULL, NULL, KVM_NO_FILES, errbuf);
 #endif
@@ -462,6 +526,8 @@ psutil_proc_environ(PyObject *self, PyOb
 #endif
 #elif defined(PSUTIL_NETBSD)
     if ((p)->p_stat == SZOMB) {
+#elif defined(PSUTIL_DRAGONFLY)
+    if ((p)->kp_flags & P_SYSTEM) {
 #elif defined(PSUTIL_OPENBSD)
     if ((p)->p_flag & P_SYSTEM) {
 #endif
@@ -1076,14 +1142,16 @@ static PyMethodDef mod_methods[] = {
     {"proc_num_fds", psutil_proc_num_fds, METH_VARARGS},
     {"proc_open_files", psutil_proc_open_files, METH_VARARGS},
 #endif
-#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_NETBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_NETBSD) || defined(PSUTIL_DRAGONFLY)
     {"proc_num_threads", psutil_proc_num_threads, METH_VARARGS},
 #endif
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     {"cpu_topology", psutil_cpu_topology, METH_VARARGS},
     {"proc_cpu_affinity_get", psutil_proc_cpu_affinity_get, METH_VARARGS},
     {"proc_cpu_affinity_set", psutil_proc_cpu_affinity_set, METH_VARARGS},
     {"proc_exe", psutil_proc_exe, METH_VARARGS},
+#endif
+#if defined(PSUTIL_FREEBSD)
     {"proc_getrlimit", psutil_proc_getrlimit, METH_VARARGS},
     {"proc_memory_maps", psutil_proc_memory_maps, METH_VARARGS},
     {"proc_setrlimit", psutil_proc_setrlimit, METH_VARARGS},
@@ -1159,6 +1227,12 @@ static PyMethodDef mod_methods[] = {
     if (PyModule_AddIntConstant(mod, "SZOMB", SZOMB)) INITERR;
     if (PyModule_AddIntConstant(mod, "SWAIT", SWAIT)) INITERR;
     if (PyModule_AddIntConstant(mod, "SLOCK", SLOCK)) INITERR;
+#elif defined(PSUTIL_DRAGONFLY)
+    if (PyModule_AddIntConstant(mod, "SIDL", SIDL)) INITERR;
+    if (PyModule_AddIntConstant(mod, "SACTIVE", SACTIVE)) INITERR;
+    if (PyModule_AddIntConstant(mod, "SSTOP", SSTOP)) INITERR;
+    if (PyModule_AddIntConstant(mod, "SZOMB", SZOMB)) INITERR;
+    if (PyModule_AddIntConstant(mod, "SCORE", SCORE)) INITERR;
 #elif  PSUTIL_OPENBSD
     if (PyModule_AddIntConstant(mod, "SIDL", SIDL)) INITERR;
     if (PyModule_AddIntConstant(mod, "SRUN", SRUN)) INITERR;
