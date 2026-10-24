--- psutil/_psutil_bsd.c.intermediate	2026-09-16 04:20:07 UTC
+++ psutil/_psutil_bsd.c
@@ -19,7 +19,7 @@
  */
 
 #include <Python.h>
-#include <sys/proc.h>
+#include <sys/user.h>
 #include <sys/param.h>  // BSD version
 #include <netinet/tcp_fsm.h>  // for TCP connection states
 
@@ -28,6 +28,11 @@
 
 #ifdef PSUTIL_FREEBSD
 #include "arch/freebsd/init.h"
+#elif PSUTIL_DRAGONFLY
+#include "arch/dragonfly/init.h"
+// psutil_proc_num_fds() is implemented in arch/bsd/proc.c for DragonFly
+// (per-pid counting via /proc); no per-platform header declares it.
+PyObject *psutil_proc_num_fds(PyObject *self, PyObject *args);
 #elif PSUTIL_OPENBSD
 #include "arch/openbsd/init.h"
 #elif PSUTIL_NETBSD
@@ -48,13 +53,16 @@ static PyMethodDef mod_methods[] = {
     {"proc_oneshot_info", psutil_proc_oneshot_info, METH_VARARGS},
     {"proc_open_files", psutil_proc_open_files, METH_VARARGS},
     {"proc_threads", psutil_proc_threads, METH_VARARGS},
-#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_NETBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_NETBSD) || \
+    defined(PSUTIL_DRAGONFLY)
     {"proc_num_threads", psutil_proc_num_threads, METH_VARARGS},
 #endif
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     {"proc_cpu_affinity_get", psutil_proc_cpu_affinity_get, METH_VARARGS},
     {"proc_cpu_affinity_set", psutil_proc_cpu_affinity_set, METH_VARARGS},
     {"proc_exe", psutil_proc_exe, METH_VARARGS},
+#endif
+#if defined(PSUTIL_FREEBSD)
     {"proc_getrlimit", psutil_proc_getrlimit, METH_VARARGS},
     {"proc_memory_maps", psutil_proc_memory_maps, METH_VARARGS},
     {"proc_net_connections", psutil_proc_net_connections, METH_VARARGS},
@@ -82,10 +90,11 @@ static PyMethodDef mod_methods[] = {
     {"users", psutil_users, METH_VARARGS},
 #endif
     {"virtual_mem", psutil_virtual_mem, METH_VARARGS},
-#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_OPENBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_OPENBSD) || \
+    defined(PSUTIL_DRAGONFLY)
     {"cpu_freq", psutil_cpu_freq, METH_VARARGS},
 #endif
-#if defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     {"cpu_topology", psutil_cpu_topology, METH_VARARGS},
     {"sensors_battery", psutil_sensors_battery, METH_VARARGS},
     {"sensors_cpu_temperature", psutil_sensors_cpu_temperature, METH_VARARGS},
@@ -147,6 +156,17 @@ PyInit__psutil_bsd(void) {
     if (PyModule_AddIntConstant(mod, "SWAIT", SWAIT))
         return NULL;
     if (PyModule_AddIntConstant(mod, "SLOCK", SLOCK))
+        return NULL;
+#elif PSUTIL_DRAGONFLY
+    if (PyModule_AddIntConstant(mod, "SIDL", SIDL))
+        return NULL;
+    if (PyModule_AddIntConstant(mod, "SACTIVE", SACTIVE))
+        return NULL;
+    if (PyModule_AddIntConstant(mod, "SSTOP", SSTOP))
+        return NULL;
+    if (PyModule_AddIntConstant(mod, "SZOMB", SZOMB))
+        return NULL;
+    if (PyModule_AddIntConstant(mod, "SCORE", SCORE))
         return NULL;
 #elif PSUTIL_OPENBSD
     if (PyModule_AddIntConstant(mod, "SIDL", SIDL))
