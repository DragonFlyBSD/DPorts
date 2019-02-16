--- sql/resourcegroups/platform/thread_attrs_api_freebsd.cc.orig	2018-12-20 21:14:03.000000000 +0100
+++ sql/resourcegroups/platform/thread_attrs_api_freebsd.cc	2019-02-15 18:07:12.094634000 +0100
@@ -22,7 +22,7 @@
 #include "thread_attrs_api.h"
 
 #include <errno.h>
-#include <sys/cpuset.h>
+#include <sys/lwp.h>
 #include <sys/resource.h>
 #include <sys/sysctl.h>
 #include <sys/time.h>
@@ -48,8 +48,7 @@ bool bind_to_cpu(cpu_id_t cpu_id, my_thr
 
   CPU_ZERO(&cpu_set);
   CPU_SET(cpu_id, &cpu_set);
-  if (cpuset_setaffinity(CPU_LEVEL_WHICH, CPU_WHICH_TID, thread_id,
-                         sizeof(cpu_set), &cpu_set) == -1) {
+  if (lwp_setaffinity(getpid(), thread_id, &cpu_set) == -1) {
     char errbuf[MYSQL_ERRMSG_SIZE];
     LogErr(ERROR_LEVEL, ER_RES_GRP_SET_THR_AFFINITY_FAILED, thread_id, cpu_id,
            my_errno(), my_strerror(errbuf, MYSQL_ERRMSG_SIZE, my_errno()));
@@ -73,8 +72,7 @@ bool bind_to_cpus(const std::vector<cpu_
   CPU_ZERO(&cpu_set);
   for (const auto &cpu_id : cpu_ids) CPU_SET(cpu_id, &cpu_set);
 
-  if (cpuset_setaffinity(CPU_LEVEL_WHICH, CPU_WHICH_TID, thread_id,
-                         sizeof(cpu_set), &cpu_set) == -1) {
+  if (lwp_setaffinity(getpid(), thread_id, &cpu_set) == -1) {
     char errbuf[MYSQL_ERRMSG_SIZE];
     LogErr(ERROR_LEVEL, ER_RES_GRP_SET_THR_AFFINITY_FAILED, thread_id,
            my_errno(), my_strerror(errbuf, MYSQL_ERRMSG_SIZE, my_errno()));
@@ -100,8 +98,7 @@ bool unbind_thread(my_thread_os_id_t thr
   }
   for (cpu_id_t cpu_id = 0; cpu_id < num_cpus; ++cpu_id)
     CPU_SET(cpu_id, &cpu_set);
-  if (cpuset_setaffinity(CPU_LEVEL_WHICH, CPU_WHICH_TID, thread_id,
-                         sizeof(cpu_set), &cpu_set) == -1) {
+  if (lwp_setaffinity(getpid(), thread_id, &cpu_set) == -1) {
     char errbuf[MYSQL_ERRMSG_SIZE];
     LogErr(ERROR_LEVEL, ER_RES_GRP_THD_UNBIND_FROM_CPU_FAILED, thread_id,
            my_errno(), my_strerror(errbuf, MYSQL_ERRMSG_SIZE, my_errno()));
