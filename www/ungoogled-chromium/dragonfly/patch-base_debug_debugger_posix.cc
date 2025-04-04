diff --git base/debug/debugger_posix.cc base/debug/debugger_posix.cc
index b42b9e52b9a6..7ea774aab290 100644
--- base/debug/debugger_posix.cc
+++ base/debug/debugger_posix.cc
@@ -45,7 +45,7 @@
 #include <sys/proc.h>
 #endif
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/user.h>
 #endif
 
@@ -142,6 +142,8 @@ bool BeingDebugged() {
   being_debugged = (info.ki_flag & P_TRACED) != 0;
 #elif BUILDFLAG(IS_OPENBSD)
   being_debugged = (info->p_psflags & PS_TRACED) != 0;
+#elif BUILDFLAG(IS_DRAGONFLY)
+  being_debugged = (info.kp_flags & P_TRACED) != 0;
 #else
   being_debugged = (info.kp_proc.p_flag & P_TRACED) != 0;
 #endif
