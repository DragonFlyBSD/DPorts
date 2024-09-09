--- psutil/arch/bsd/proc.c.orig	2023-06-01 16:41:59 UTC
+++ psutil/arch/bsd/proc.c
@@ -6,12 +6,14 @@
 
 #include <Python.h>
 #include <kvm.h>
+#ifndef PSUTIL_DRAGONFLY
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #include <sys/types.h>
 #include <sys/file.h>
 #include <sys/vnode.h>  // VREG
-#ifdef PSUTIL_FREEBSD
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     #include <sys/user.h>  // kinfo_proc, kinfo_file, KF_*
     #include <libutil.h>  // kinfo_getfile()
 #endif
@@ -20,6 +22,8 @@
 #include "../../_psutil_posix.h"
 #ifdef PSUTIL_FREEBSD
     #include "../../arch/freebsd/proc.h"
+#elif PSUTIL_DRAGONFLY
+    #include "../../arch/dragonfly/proc.h"
 #elif PSUTIL_OPENBSD
     #include "../../arch/openbsd/proc.h"
 #elif PSUTIL_NETBSD
@@ -58,6 +62,8 @@ psutil_pids(PyObject *self, PyObject *ar
         for (idx = 0; idx < num_processes; idx++) {
 #ifdef PSUTIL_FREEBSD
             py_pid = PyLong_FromPid(proclist->ki_pid);
+#elif PSUTIL_DRAGONFLY
+            py_pid = PyLong_FromPid(proclist->kp_pid);	    
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
             py_pid = PyLong_FromPid(proclist->p_pid);
 #endif
@@ -110,6 +116,8 @@ psutil_proc_oneshot_info(PyObject *self,
     // Process
 #ifdef PSUTIL_FREEBSD
     sprintf(str, "%s", kp.ki_comm);
+#elif PSUTIL_DRAGONFLY
+    sprintf(str, "%s", kp.kp_comm);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     sprintf(str, "%s", kp.p_comm);
 #endif
@@ -129,6 +137,12 @@ psutil_proc_oneshot_info(PyObject *self,
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
@@ -166,6 +180,8 @@ psutil_proc_oneshot_info(PyObject *self,
 
 #ifdef PSUTIL_FREEBSD
     py_ppid = PyLong_FromPid(kp.ki_ppid);
+#elif PSUTIL_DRAGONFLY
+    py_ppid = PyLong_FromPid(kp.kp_ppid);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     py_ppid = PyLong_FromPid(kp.p_ppid);
 #else
@@ -214,6 +230,39 @@ psutil_proc_oneshot_info(PyObject *self,
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
@@ -270,8 +319,10 @@ psutil_proc_name(PyObject *self, PyObjec
     if (psutil_kinfo_proc(pid, &kp) == -1)
         return NULL;
 
-#ifdef PSUTIL_FREEBSD
-    sprintf(str, "%s", kp.ki_comm);
+#if defined(PSUTIL_FREEBSD)
+
+#elif defined(PSUTIL_DRAGONFLY)
+    sprintf(str, "%s", kp.kp_comm);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     sprintf(str, "%s", kp.p_comm);
 #endif
@@ -295,10 +346,10 @@ psutil_proc_environ(PyObject *self, PyOb
     if (!PyArg_ParseTuple(args, "l", &pid))
         return NULL;
 
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     kd = kvm_openfiles(NULL, "/dev/null", NULL, 0, errbuf);
 #else
-    kd = kvm_openfiles(NULL, NULL, NULL, KVM_NO_FILES, errbuf);
+    kd = kvm_openfiles(NULL, NULL, NULL, O_RDONLY, errbuf);
 #endif
     if (!kd) {
         convert_kvm_err("kvm_openfiles", errbuf);
@@ -309,7 +360,7 @@ psutil_proc_environ(PyObject *self, PyOb
     if (!py_retdict)
         goto error;
 
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     p = kvm_getprocs(kd, KERN_PROC_PID, pid, &cnt);
 #elif defined(PSUTIL_OPENBSD)
     p = kvm_getprocs(kd, KERN_PROC_PID, pid, sizeof(*p), &cnt);
@@ -343,6 +394,8 @@ psutil_proc_environ(PyObject *self, PyOb
     if ((p)->p_stat == SZOMB) {
 #elif defined(PSUTIL_OPENBSD)
     if ((p)->p_flag & P_SYSTEM) {
+#elif defined(PSUTIL_DRAGONFLY)
+    if ((p)->kp_flags & P_SYSTEM) {
 #endif
         kvm_close(kd);
         return py_retdict;
