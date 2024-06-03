diff --git base/debug/stack_trace_posix.cc base/debug/stack_trace_posix.cc
index 2e51f9d98b0..d0469a1d4df 100644
--- src/3rdparty/chromium/base/debug/stack_trace_posix.cc
+++ src/3rdparty/chromium/base/debug/stack_trace_posix.cc
@@ -644,7 +644,12 @@ class SandboxSymbolizeHelper {
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
 
@@ -698,6 +703,7 @@ class SandboxSymbolizeHelper {
   // Parses /proc/self/maps in order to compile a list of all object file names
   // for the modules that are loaded in the current process.
   // Returns true on success.
+  // XXX (tuxillo) needs review, not complete?
   bool CacheMemoryRegions() {
 #if BUILDFLAG(IS_BSD)
     return false;
