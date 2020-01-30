--- src/jdk.hotspot.agent/bsd/native/libsaproc/ps_proc.c.orig	2019-10-16 18:31:09 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/ps_proc.c
@@ -131,9 +131,13 @@ static bool process_get_lwp_regs(struct
 // fill in ptrace_lwpinfo for lid
 static bool process_get_lwp_info(struct ps_prochandle *ph, lwpid_t lwp_id, void *linfo) {
   errno = 0;
+#ifdef __DragonFly__
+  return false;  /* XXX uninplemented */
+#else
   ptrace(PT_LWPINFO, lwp_id, linfo, sizeof(struct ptrace_lwpinfo));
 
   return (errno == 0)? true: false;
+#endif
 }
 
 static bool ptrace_continue(pid_t pid, int signal) {
@@ -191,7 +195,7 @@ static attach_state_t ptrace_waitpid(pid
 }
 
 static bool process_doesnt_exist(pid_t pid) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct kinfo_proc kproc;
   size_t klen;
   int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, pid };
@@ -199,7 +203,11 @@ static bool process_doesnt_exist(pid_t p
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
@@ -276,6 +284,8 @@ static bool read_lib_info(struct ps_proc
   free(freep);
 
   return true;
+#elif defined(__DragonFly__)
+  return false; /* XXX uninplemented */
 #else
   char *l_name;
   struct link_map *lmap;
