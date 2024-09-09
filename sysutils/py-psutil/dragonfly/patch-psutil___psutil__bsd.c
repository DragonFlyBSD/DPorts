--- psutil/_psutil_bsd.c.orig	2023-06-09 13:34:21 UTC
+++ psutil/_psutil_bsd.c
@@ -17,7 +17,7 @@
  */
 
 #include <Python.h>
-#include <sys/proc.h>
+#include <sys/user.h>
 #include <sys/param.h>  // BSD version
 #include <netinet/tcp_fsm.h>   // for TCP connection states
 
@@ -49,6 +49,14 @@
     #include "arch/netbsd/mem.h"
     #include "arch/netbsd/proc.h"
     #include "arch/netbsd/socks.h"
+#elif PSUTIL_DRAGONFLY
+    #include "arch/dragonfly/cpu.h"
+    #include "arch/dragonfly/disk.h"
+    #include "arch/dragonfly/mem.h"
+    #include "arch/dragonfly/proc.h"
+    #include "arch/dragonfly/proc_socks.h"
+    #include "arch/dragonfly/sensors.h"
+    #include "arch/dragonfly/sys_socks.h"
 #endif
 
 
@@ -70,18 +78,23 @@ static PyMethodDef mod_methods[] = {
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
 #endif
+#if defined(PSUTIL_DRAGONFLY)
+    {"cpu_count_cores", psutil_cpu_count_cores, METH_VARARGS},
+#endif
     {"proc_environ", psutil_proc_environ, METH_VARARGS},
 
     // --- system-related functions
@@ -154,6 +167,12 @@ static PyMethodDef mod_methods[] = {
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
