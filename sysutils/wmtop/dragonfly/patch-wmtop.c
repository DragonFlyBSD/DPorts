--- wmtop.c.orig	2015-12-05 18:24:27.573000000 +0100
+++ wmtop.c	2015-12-05 18:25:30.263588000 +0100
@@ -490,9 +490,9 @@ int process_parse_procfs(struct process
     process->time_stamp = g_time;
     if(process->name)
         wmtop_free(process->name);
-    process->name = wmtop_strdup(process->kp->ki_comm);
-    process->user_time = GETV(process->kp->ki_rusage.ru_utime);
-    process->kernel_time = GETV(process->kp->ki_rusage.ru_stime);
+    process->name = wmtop_strdup(process->kp->kp_comm);
+    process->user_time = process->kp->kp_lwp.kl_uticks / 1000;
+    process->kernel_time = (process->kp->kp_lwp.kl_sticks + process->kp->kp_lwp.kl_iticks) / 1000;
 #else
     sprintf(filename,PROCFS_TEMPLATE,process->pid);
 
@@ -649,9 +649,9 @@ int update_process_table() {
          argv[0] == NULL)
         continue;
 
-      pp = find_process(p->ki_pid);
+      pp = find_process(p->kp_pid);
       if(!pp)
-          pp = new_process(p->ki_pid);
+          pp = new_process(p->kp_pid);
 
       pp->kp = p;
       calculate_cpu(pp);
