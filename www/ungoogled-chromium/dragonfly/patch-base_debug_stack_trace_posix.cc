diff --git base/debug/stack_trace_posix.cc base/debug/stack_trace_posix.cc
index c05861aec8be..b6e116f98b83 100644
--- base/debug/stack_trace_posix.cc
+++ base/debug/stack_trace_posix.cc
@@ -818,7 +818,11 @@ class SandboxSymbolizeHelper {
     {
       ScopedPrSetDumpable s;
       mem_fd = base::ScopedFD(
+#if defined(OS_BSD)
+          HANDLE_EINTR(open("/proc/curproc/mem", O_RDONLY | O_CLOEXEC)));
+#else
           HANDLE_EINTR(open("/proc/self/mem", O_RDONLY | O_CLOEXEC)));
+#endif
       if (!mem_fd.is_valid()) {
         return;
       }
@@ -875,6 +879,7 @@ class SandboxSymbolizeHelper {
   // Parses /proc/self/maps in order to compile a list of all object file names
   // for the modules that are loaded in the current process.
   // Returns true on success.
+  // XXX (tuxillo) needs review, not complete?
   bool CacheMemoryRegions() {
 #if BUILDFLAG(IS_BSD)
     return false;
