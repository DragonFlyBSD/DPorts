--- src/jdk.hotspot.agent/bsd/native/libsaproc/ps_proc.c.orig
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/ps_proc.c
@@ -104,9 +104,13 @@
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
@@ -164,7 +168,7 @@
 }
 
 static bool process_doesnt_exist(pid_t pid) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct kinfo_proc kproc;
   size_t klen;
   int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, pid };
@@ -172,7 +176,11 @@
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
@@ -249,6 +257,8 @@
   free(freep);
 
   return true;
+#elif defined(__DragonFly__)
+  return false; /* XXX uninplemented */
 #else
   char *l_name;
   struct link_map *lmap;
