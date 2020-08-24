--- psutil/_psutil_bsd.c.orig	2020-05-15 21:52:03 UTC
+++ psutil/_psutil_bsd.c
@@ -19,6 +19,7 @@
     #define _KMEMUSER
 #endif
 
+#include <netinet/in.h>
 #include <Python.h>
 #include <assert.h>
 #include <errno.h>
@@ -41,7 +42,6 @@
 #include <sys/un.h>
 #include <sys/unpcb.h>
 // for xinpcb struct
-#include <netinet/in.h>
 #include <netinet/in_systm.h>
 #include <netinet/ip.h>
 #include <netinet/in_pcb.h>
@@ -93,6 +93,11 @@
     #ifndef DTYPE_VNODE
         #define DTYPE_VNODE 1
     #endif
+#elif PSUTIL_DRAGONFLY
+    #include "arch/bsd/dragonfly.h"
+    #include <sys/resource.h>
+
+    #include <utmpx.h>
 #endif
 
 
@@ -221,6 +226,12 @@ psutil_proc_oneshot_info(PyObject *self,
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
@@ -258,6 +269,8 @@ psutil_proc_oneshot_info(PyObject *self,
 
 #ifdef PSUTIL_FREEBSD
     py_ppid = PyLong_FromPid(kp.ki_ppid);
+#elif defined(PSUTIL_DRAGONFLY)
+    py_ppid = PyLong_FromPid(kp.kp_ppid);
 #elif defined(PSUTIL_OPENBSD) || defined(PSUTIL_NETBSD)
     py_ppid = PyLong_FromPid(kp.p_ppid);
 #else
@@ -425,7 +438,7 @@ psutil_cpu_times(PyObject *self, PyObjec
     size_t size = sizeof(cpu_time);
     int ret;
 
-#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_NETBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_NETBSD) || defined(PSUTIL_DRAGONFLY)
     ret = sysctlbyname("kern.cp_time", &cpu_time, &size, NULL, 0);
 #elif PSUTIL_OPENBSD
     int mib[] = {CTL_KERN, KERN_CPTIME};
@@ -433,6 +446,7 @@ psutil_cpu_times(PyObject *self, PyObjec
 #endif
     if (ret == -1)
         return PyErr_SetFromErrno(PyExc_OSError);
+
     return Py_BuildValue("(ddddd)",
                          (double)cpu_time[CP_USER] / CLOCKS_PER_SEC,
                          (double)cpu_time[CP_NICE] / CLOCKS_PER_SEC,
