--- sql/resourcegroups/platform/thread_attrs_api_freebsd.cc.orig	2020-08-28 21:02:32 UTC
+++ sql/resourcegroups/platform/thread_attrs_api_freebsd.cc
@@ -22,7 +22,11 @@
 #include "thread_attrs_api.h"
 
 #include <errno.h>
+#ifdef __DragonFly__
+#include <sched.h>
+#else
 #include <sys/cpuset.h>
+#endif
 #include <sys/resource.h>
 #include <sys/sysctl.h>
 #include <sys/time.h>
@@ -44,6 +48,9 @@ bool bind_to_cpu(cpu_id_t cpu_id) {
 bool bind_to_cpu(cpu_id_t cpu_id, my_thread_os_id_t thread_id) {
   DBUG_TRACE;
 
+#ifdef __DragonFly__
+  return false;
+#else
   cpuset_t cpu_set;
 
   CPU_ZERO(&cpu_set);
@@ -56,6 +63,7 @@ bool bind_to_cpu(cpu_id_t cpu_id, my_thr
     return true;
   }
   return false;
+#endif
 }
 
 bool bind_to_cpus(const std::vector<cpu_id_t> &cpu_ids) {
@@ -66,6 +74,9 @@ bool bind_to_cpus(const std::vector<cpu_
                   my_thread_os_id_t thread_id) {
   DBUG_TRACE;
 
+#ifdef __DragonFly__
+  return false;
+#else
   if (cpu_ids.empty()) return false;
 
   cpuset_t cpu_set;
@@ -81,6 +92,7 @@ bool bind_to_cpus(const std::vector<cpu_
     return true;
   }
   return false;
+#endif
 }
 
 bool unbind_thread() { return unbind_thread(my_thread_os_id()); }
@@ -88,6 +100,9 @@ bool unbind_thread() { return unbind_thr
 bool unbind_thread(my_thread_os_id_t thread_id) {
   DBUG_TRACE;
 
+#ifdef __DragonFly__
+  return false;
+#else
   cpuset_t cpu_set;
 
   CPU_ZERO(&cpu_set);
@@ -109,13 +124,16 @@ bool unbind_thread(my_thread_os_id_t thr
   }
 
   return false;
+#endif
 }
 
 int thread_priority() { return getpriority(PRIO_PROCESS, my_thread_os_id()); }
 
 int thread_priority(my_thread_os_id_t) {
   DBUG_ASSERT(0);
+#ifndef __DragonFly__
   LogErr(WARNING_LEVEL, ER_RES_GRP_GET_THREAD_PRIO_NOT_SUPPORTED, "FreeBSD");
+#endif
   return 0;
 }
 
