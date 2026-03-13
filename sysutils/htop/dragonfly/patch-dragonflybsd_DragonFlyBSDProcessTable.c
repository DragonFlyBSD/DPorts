--- dragonflybsd/DragonFlyBSDProcessTable.c.orig	2025-12-15 16:14:45.299402000 +0000
+++ dragonflybsd/DragonFlyBSDProcessTable.c	2025-12-15 16:17:17.149434000 +0000
@@ -168,7 +168,7 @@
          proc->pgrp = kproc->kp_pgid;		// process group id
          proc->session = kproc->kp_sid;
          proc->st_uid = kproc->kp_uid;		// user ID
-         proc->processor = kproc->kp_lwp.kl_origcpu;
+         proc->processor = kproc->kp_lwp.kl_cpuid;
          proc->starttime_ctime = kproc->kp_start.tv_sec;
          Process_fillStarttimeBuffer(proc);
          proc->user = UsersTable_getRef(host->usersTable, proc->st_uid);
@@ -319,4 +319,22 @@
       proc->super.show = ! ((hideKernelThreads && Process_isKernelThread(proc)) || (hideUserlandThreads && Process_isUserlandThread(proc)));
       proc->super.updated = true;
    }
+}
+
+char **DragonFlyBSDGet_env(pid_t pid) {
+
+   kvm_t *kd;
+   struct kinfo_proc *kp;
+   char **env;
+   char errbuf[_POSIX2_LINE_MAX];
+   int count;
+
+   kd = kvm_openfiles(NULL, "/dev/null", NULL, 0, errbuf);
+   if (kd == NULL)
+      return NULL;
+
+   kp = kvm_getprocs(kd, KERN_PROC_PID, pid, &count);
+   env = kvm_getenvv(kd, kp, 0);
+   kvm_close(kd);
+   return env;
 }
