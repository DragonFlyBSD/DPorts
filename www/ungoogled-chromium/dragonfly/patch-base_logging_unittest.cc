diff --git base/logging_unittest.cc base/logging_unittest.cc
index 667561d2cffc..9340f43c86f6 100644
--- base/logging_unittest.cc
+++ base/logging_unittest.cc
@@ -41,7 +41,8 @@
 #include "base/posix/eintr_wrapper.h"
 #endif  // BUILDFLAG(IS_POSIX)
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
+  BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <ucontext.h>
 #endif
 
@@ -579,7 +580,7 @@ void CheckCrashTestSighandler(int, siginfo_t* info, void* context_ptr) {
   // need the arch-specific boilerplate below, which is inspired by breakpad.
   // At the same time, on OSX, ucontext.h is deprecated but si_addr works fine.
   uintptr_t crash_addr = 0;
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   crash_addr = reinterpret_cast<uintptr_t>(info->si_addr);
 #else  // OS_*
   ucontext_t* context = reinterpret_cast<ucontext_t*>(context_ptr);
diff --git base/message_loop/message_loop_task_runner.cc base/message_loop/message_loop_task_runner.cc
new file mode 100644
index 000000000000..72989b078cb6
