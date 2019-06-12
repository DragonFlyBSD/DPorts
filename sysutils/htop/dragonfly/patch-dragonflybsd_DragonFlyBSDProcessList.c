--- dragonflybsd/DragonFlyBSDProcessList.c.orig	2018-04-10 13:42:59 UTC
+++ dragonflybsd/DragonFlyBSDProcessList.c
@@ -451,7 +451,7 @@ void ProcessList_goThroughEntries(Proces
          proc->session = kproc->kp_sid;
          proc->tty_nr = kproc->kp_tdev;		// control terminal device number
          proc->st_uid = kproc->kp_uid;		// user ID
-         proc->processor = kproc->kp_lwp.kl_origcpu;
+         proc->processor = kproc->kp_lwp.kl_cpuid;
          proc->starttime_ctime = kproc->kp_start.tv_sec;
          proc->user = UsersTable_getRef(this->usersTable, proc->st_uid);
 
@@ -576,3 +576,21 @@ void ProcessList_goThroughEntries(Proces
       proc->updated = true;
    }
 }
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
+}
