diff --git base/debug/stack_trace_posix.cc base/debug/stack_trace_posix.cc
index d66dcab4c1f..863444857b6 100644
--- base/debug/stack_trace_posix.cc
+++ base/debug/stack_trace_posix.cc
@@ -772,7 +772,12 @@ class SandboxSymbolizeHelper {
   // process memory.
   void SetBaseAddressesForMemoryRegions() {
     base::ScopedFD mem_fd(
+#if defined(OS_BSD)
+        HANDLE_EINTR(open("/proc/curproc/mem", O_RDONLY | O_CLOEXEC)));
+#else
         HANDLE_EINTR(open("/proc/self/mem", O_RDONLY | O_CLOEXEC)));
+#endif
+
     if (!mem_fd.is_valid())
       return;
 
@@ -826,6 +831,7 @@ class SandboxSymbolizeHelper {
   // Parses /proc/self/maps in order to compile a list of all object file names
   // for the modules that are loaded in the current process.
   // Returns true on success.
+  // XXX (tuxillo) needs review, not complete?
   bool CacheMemoryRegions() {
 #if BUILDFLAG(IS_BSD)
     return false;
