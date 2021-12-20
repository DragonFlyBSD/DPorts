--- src/processes.c.orig	2020-09-03 11:09:35.UTC
+++ src/processes.c
@@ -102,11 +102,13 @@
 /* #endif KERNEL_LINUX */
 
 #elif HAVE_LIBKVM_GETPROCS &&                                                  \
-    (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_OPENBSD ||       \
+    (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_OPENBSD || HAVE_STRUCT_KINFO_PROC_DRAGONFLY || \
      HAVE_STRUCT_KINFO_PROC2_NETBSD)
 #include <kvm.h>
 #include <sys/param.h>
+#ifndef HAVE_STRUCT_KINFO_PROC_DRAGONFLY
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/user.h>
@@ -217,7 +219,7 @@ typedef struct process_entry_s {
   bool has_maps;
 } process_entry_t;
 
-typedef struct procstat_entry_s {
+typedef struct collectd_procstat_entry_s {
   unsigned long id;
   unsigned char age;
 
@@ -245,10 +247,10 @@ typedef struct procstat_entry_s {
   value_to_rate_state_t delay_freepages;
 #endif
 
-  struct procstat_entry_s *next;
-} procstat_entry_t;
+  struct collectd_procstat_entry_s *next;
+} collectd_procstat_entry_t;
 
-typedef struct procstat {
+typedef struct collectd_procstat {
   char name[PROCSTAT_NAME_LEN];
 #if HAVE_REGEX_H
   regex_t *re;
@@ -292,11 +294,11 @@ typedef struct procstat {
   bool report_ctx_switch;
   bool report_delay;
 
-  struct procstat *next;
-  struct procstat_entry_s *instances;
-} procstat_t;
+  struct collectd_procstat *next;
+  struct collectd_procstat_entry_s *instances;
+} collectd_procstat_t;
 
-static procstat_t *list_head_g;
+static collectd_procstat_t *list_head_g;
 
 static bool want_init = true;
 static bool report_ctx_switch;
@@ -314,11 +316,11 @@ static mach_msg_type_number_t pset_list_
 
 #elif KERNEL_LINUX
 static long pagesize_g;
-static void ps_fill_details(const procstat_t *ps, process_entry_t *entry);
+static void ps_fill_details(const collectd_procstat_t *ps, process_entry_t *entry);
 /* #endif KERNEL_LINUX */
 
 #elif HAVE_LIBKVM_GETPROCS &&                                                  \
-    (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_OPENBSD ||       \
+    (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_OPENBSD || HAVE_STRUCT_KINFO_PROC_DRAGONFLY || \
      HAVE_STRUCT_KINFO_PROC2_NETBSD)
 static int pagesize;
 
@@ -349,9 +351,9 @@ static ts_t *taskstats_handle;
 /* put name of process from config to list_head_g tree
  * list_head_g is a list of 'procstat_t' structs with
  * processes names we want to watch */
-static procstat_t *ps_list_register(const char *name, const char *regexp) {
-  procstat_t *new;
-  procstat_t *ptr;
+static collectd_procstat_t *ps_list_register(const char *name, const char *regexp) {
+  collectd_procstat_t *new;
+  collectd_procstat_t *ptr;
   int status;
 
   new = calloc(1, sizeof(*new));
@@ -435,7 +437,7 @@ static procstat_t *ps_list_register(cons
 
 /* try to match name against entry, returns 1 if success */
 static int ps_list_match(const char *name, const char *cmdline,
-                         procstat_t *ps) {
+                         collectd_procstat_t *ps) {
 #if HAVE_REGEX_H
   if (ps->re != NULL) {
     int status;
@@ -500,7 +502,7 @@ static void ps_update_delay_one(gauge_t
   }
 }
 
-static void ps_update_delay(procstat_t *out, procstat_entry_t *prev,
+static void ps_update_delay(collectd_procstat_t *out, collectd_procstat_entry_t *prev,
                             process_entry_t *curr) {
   cdtime_t now = cdtime();
 
@@ -518,12 +520,12 @@ static void ps_update_delay(procstat_t *
 /* add process entry to 'instances' of process 'name' (or refresh it) */
 static void ps_list_add(const char *name, const char *cmdline,
                         process_entry_t *entry) {
-  procstat_entry_t *pse;
+  collectd_procstat_entry_t *pse;
 
   if (entry->id == 0)
     return;
 
-  for (procstat_t *ps = list_head_g; ps != NULL; ps = ps->next) {
+  for (collectd_procstat_t *ps = list_head_g; ps != NULL; ps = ps->next) {
     if ((ps_list_match(name, cmdline, ps)) == 0)
       continue;
 
@@ -536,7 +538,7 @@ static void ps_list_add(const char *name
         break;
 
     if ((pse == NULL) || (pse->id != entry->id)) {
-      procstat_entry_t *new;
+      collectd_procstat_entry_t *new;
 
       new = calloc(1, sizeof(*new));
       if (new == NULL)
@@ -604,10 +606,10 @@ static void ps_list_add(const char *name
 
 /* remove old entries from instances of processes in list_head_g */
 static void ps_list_reset(void) {
-  procstat_entry_t *pse;
-  procstat_entry_t *pse_prev;
+  collectd_procstat_entry_t *pse;
+  collectd_procstat_entry_t *pse_prev;
 
-  for (procstat_t *ps = list_head_g; ps != NULL; ps = ps->next) {
+  for (collectd_procstat_t *ps = list_head_g; ps != NULL; ps = ps->next) {
     ps->num_proc = 0;
     ps->num_lwp = 0;
     ps->num_fd = 0;
@@ -627,7 +629,7 @@ static void ps_list_reset(void) {
     pse = ps->instances;
     while (pse != NULL) {
       if (pse->age > 0) {
-        DEBUG("Removing this procstat entry cause it's too old: "
+        DEBUG("Removing this collectd_procstat entry cause it's too old: "
               "id = %lu; name = %s;",
               pse->id, ps->name);
 
@@ -649,7 +651,7 @@ static void ps_list_reset(void) {
   }   /* for (ps = list_head_g; ps != NULL; ps = ps->next) */
 }
 
-static void ps_tune_instance(oconfig_item_t *ci, procstat_t *ps) {
+static void ps_tune_instance(oconfig_item_t *ci, collectd_procstat_t *ps) {
   for (int i = 0; i < ci->children_num; i++) {
     oconfig_item_t *c = ci->children + i;
 
@@ -676,11 +678,11 @@ static void ps_tune_instance(oconfig_ite
 static int ps_config(oconfig_item_t *ci) {
 #if KERNEL_LINUX
   const size_t max_procname_len = 15;
-#elif KERNEL_SOLARIS || KERNEL_FREEBSD
+#elif KERNEL_SOLARIS || KERNEL_FREEBSD || KERNEL_DRAGONFLY
   const size_t max_procname_len = MAXCOMLEN - 1;
 #endif
 
-  procstat_t *ps;
+  collectd_procstat_t *ps;
 
   for (int i = 0; i < ci->children_num; ++i) {
     oconfig_item_t *c = ci->children + i;
@@ -693,7 +695,7 @@ static int ps_config(oconfig_item_t *ci)
         continue;
       }
 
-#if KERNEL_LINUX || KERNEL_SOLARIS || KERNEL_FREEBSD
+#if KERNEL_LINUX || KERNEL_SOLARIS || KERNEL_FREEBSD || KERNEL_DRAGONFLY
       if (strlen(c->values[0].value.string) > max_procname_len) {
         WARNING("processes plugin: this platform has a %" PRIsz
                 " character limit "
@@ -783,7 +785,7 @@ static int ps_init(void) {
   /* #endif KERNEL_LINUX */
 
 #elif HAVE_LIBKVM_GETPROCS &&                                                  \
-    (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_OPENBSD ||       \
+    (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_OPENBSD || HAVE_STRUCT_KINFO_PROC_DRAGONFLY || \
      HAVE_STRUCT_KINFO_PROC2_NETBSD)
 #if KERNEL_NETBSD
   int mib[2];
@@ -822,7 +824,7 @@ static void ps_submit_state(const char *
 }
 
 /* submit info about specific process (e.g.: memory taken, cpu usage, etc..) */
-static void ps_submit_proc_list(procstat_t *ps) {
+static void ps_submit_proc_list(collectd_procstat_t *ps) {
   value_list_t vl = VALUE_LIST_INIT;
   value_t values[2];
 
@@ -1274,7 +1276,7 @@ static int ps_delay(process_entry_t *ps)
 }
 #endif
 
-static void ps_fill_details(const procstat_t *ps, process_entry_t *entry) {
+static void ps_fill_details(const collectd_procstat_t *ps, process_entry_t *entry) {
   if (entry->has_io == false) {
     ps_read_io(entry);
     entry->has_io = true;
@@ -1858,7 +1860,7 @@ static int ps_read(void) {
   int stopped = 0;
   int blocked = 0;
 
-  procstat_t *ps;
+  collectd_procstat_t *ps;
   process_entry_t pse;
 
   ps_list_reset();
@@ -2156,13 +2158,13 @@ static int ps_read(void) {
   ps_submit_state("paging", paging);
   ps_submit_state("blocked", blocked);
 
-  for (procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
+  for (collectd_procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
     ps_submit_proc_list(ps_ptr);
 
   read_fork_rate();
   /* #endif KERNEL_LINUX */
 
-#elif HAVE_LIBKVM_GETPROCS && HAVE_STRUCT_KINFO_PROC_FREEBSD
+#elif HAVE_LIBKVM_GETPROCS && (HAVE_STRUCT_KINFO_PROC_FREEBSD || HAVE_STRUCT_KINFO_PROC_DRAGONFLY)
   int running = 0;
   int sleeping = 0;
   int zombies = 0;
@@ -2201,13 +2203,21 @@ static int ps_read(void) {
   for (int i = 0; i < count; i++) {
     /* Create only one process list entry per _process_, i.e.
      * filter out threads (duplicate PID entries). */
+#ifdef HAVE_STRUCT_KINFO_PROC_DRAGONFLY
+    if ((proc_ptr == NULL) || (proc_ptr->kp_pid != procs[i].kp_pid)) {
+#else
     if ((proc_ptr == NULL) || (proc_ptr->ki_pid != procs[i].ki_pid)) {
+#endif
       char cmdline[CMDLINE_BUFFER_SIZE] = "";
       bool have_cmdline = 0;
 
       proc_ptr = &(procs[i]);
       /* Don't probe system processes and processes without arguments */
+#ifdef HAVE_STRUCT_KINFO_PROC_DRAGONFLY
+      if ((procs[i].kp_flags & P_SYSTEM) == 0) {
+#else
       if (((procs[i].ki_flag & P_SYSTEM) == 0) && (procs[i].ki_args != NULL)) {
+#endif
         char **argv;
         int argc;
         int status;
@@ -2228,9 +2238,20 @@ static int ps_read(void) {
       } /* if (process has argument list) */
 
       memset(&pse, 0, sizeof(pse));
+#ifdef HAVE_STRUCT_KINFO_PROC_DRAGONFLY
+      pse.id = procs[i].kp_pid;
+      pse.num_lwp = procs[i].kp_nthreads;
+
+      pse.vmem_size = procs[i].kp_vm_map_size;
+      pse.vmem_rss = procs[i].kp_vm_rssize * pagesize;
+      pse.vmem_data = procs[i].kp_vm_dsize * pagesize;
+      pse.vmem_code = procs[i].kp_vm_tsize * pagesize;
+      pse.stack_size = procs[i].kp_vm_ssize * pagesize;
+      pse.vmem_minflt_counter = procs[i].kp_ru.ru_minflt;
+      pse.vmem_majflt_counter = procs[i].kp_ru.ru_majflt;
+#else
       pse.id = procs[i].ki_pid;
 
-      pse.num_proc = 1;
       pse.num_lwp = procs[i].ki_numthreads;
 
       pse.vmem_size = procs[i].ki_size;
@@ -2240,9 +2261,13 @@ static int ps_read(void) {
       pse.stack_size = procs[i].ki_ssize * pagesize;
       pse.vmem_minflt_counter = procs[i].ki_rusage.ru_minflt;
       pse.vmem_majflt_counter = procs[i].ki_rusage.ru_majflt;
+#endif
+      pse.num_proc = 1;
 
       pse.cpu_user_counter = 0;
       pse.cpu_system_counter = 0;
+
+#ifdef HAVE_STRUCT_KINFO_PROC_FREEBSD
       /*
        * The u-area might be swapped out, and we can't get
        * at it because we have a crashdump and no swap.
@@ -2256,6 +2281,7 @@ static int ps_read(void) {
             procs[i].ki_rusage.ru_stime.tv_usec +
             (1000000lu * procs[i].ki_rusage.ru_stime.tv_sec);
       }
+#endif
 
       /* no I/O data */
       pse.io_rchar = -1;
@@ -2275,30 +2301,49 @@ static int ps_read(void) {
       pse.cswitch_vol = -1;
       pse.cswitch_invol = -1;
 
+#ifdef HAVE_STRUCT_KINFO_PROC_FREEBSD
       ps_list_add(procs[i].ki_comm, have_cmdline ? cmdline : NULL, &pse);
 
       switch (procs[i].ki_stat) {
-      case SSTOP:
-        stopped++;
-        break;
       case SSLEEP:
         sleeping++;
         break;
       case SRUN:
         running++;
         break;
-      case SIDL:
-        idle++;
-        break;
       case SWAIT:
         wait++;
         break;
       case SLOCK:
         blocked++;
         break;
+#else
+      ps_list_add(procs[i].kp_comm, have_cmdline ? cmdline : NULL, &pse);
+
+      switch (procs[i].kp_stat) {
+      case SACTIVE:
+	      switch(procs[i].kp_lwp.kl_stat) {
+	      case LSSLEEP:
+		      sleeping++;
+		      break;
+	      case LSRUN:
+		      running++;
+		      break;
+	      case LSSTOP:
+		      stopped++;
+		      break;
+	      }
+	      break;
+#endif
+      case SSTOP:
+        stopped++;
+        break;
       case SZOMB:
         zombies++;
         break;
+      case SIDL:
+        idle++;
+        break;
       }
     } /* if ((proc_ptr == NULL) || (proc_ptr->ki_pid != procs[i].ki_pid)) */
   }
@@ -2313,7 +2358,7 @@ static int ps_read(void) {
   ps_submit_state("idle", idle);
   ps_submit_state("wait", wait);
 
-  for (procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
+  for (collectd_procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
     ps_submit_proc_list(ps_ptr);
     /* #endif HAVE_LIBKVM_GETPROCS && HAVE_STRUCT_KINFO_PROC_FREEBSD */
 
@@ -2336,7 +2381,7 @@ static int ps_read(void) {
   int l, nlwps;
   struct kinfo_lwp *kl;
 
-  procstat_t *ps_ptr;
+  collectd_procstat_t *ps_ptr;
   process_entry_t pse;
 
   ps_list_reset();
@@ -2639,7 +2684,7 @@ static int ps_read(void) {
   ps_submit_state("idle", idle);
   ps_submit_state("dead", dead);
 
-  for (procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
+  for (collectd_procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
     ps_submit_proc_list(ps_ptr);
     /* #endif HAVE_LIBKVM_GETPROCS && HAVE_STRUCT_KINFO_PROC_OPENBSD */
 
@@ -2778,7 +2823,7 @@ static int ps_read(void) {
   ps_submit_state("paging", paging);
   ps_submit_state("blocked", blocked);
 
-  for (procstat_t *ps = list_head_g; ps != NULL; ps = ps->next)
+  for (collectd_procstat_t *ps = list_head_g; ps != NULL; ps = ps->next)
     ps_submit_proc_list(ps);
     /* #endif HAVE_PROCINFO_H */
 
@@ -2874,7 +2919,7 @@ static int ps_read(void) {
   ps_submit_state("system", system);
   ps_submit_state("orphan", orphan);
 
-  for (procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
+  for (collectd_procstat_t *ps_ptr = list_head_g; ps_ptr != NULL; ps_ptr = ps_ptr->next)
     ps_submit_proc_list(ps_ptr);
 
   read_fork_rate();
