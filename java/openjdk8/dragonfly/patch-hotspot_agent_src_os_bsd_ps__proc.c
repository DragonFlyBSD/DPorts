--- hotspot/agent/src/os/bsd/ps_proc.c.orig	2021-01-20 00:41:17 UTC
+++ hotspot/agent/src/os/bsd/ps_proc.c
@@ -191,7 +191,7 @@ static attach_state_t ptrace_waitpid(pid
 }
 
 static bool process_doesnt_exist(pid_t pid) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct kinfo_proc kproc;
   size_t klen;
   int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, pid };
@@ -199,7 +199,11 @@ static bool process_doesnt_exist(pid_t p
     return true;
   }
 
+#ifdef __DragonFly__
+  switch (kproc.kp_stat) {
+#else
   switch (kproc.ki_stat) {
+#endif
     case SZOMB:
       return true;
     default:
