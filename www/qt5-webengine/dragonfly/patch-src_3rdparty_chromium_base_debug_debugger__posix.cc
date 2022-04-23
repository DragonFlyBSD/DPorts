--- src/3rdparty/chromium/base/debug/debugger_posix.cc.intermediate	2019-05-06 10:32:15.000000000 +0000
+++ src/3rdparty/chromium/base/debug/debugger_posix.cc
@@ -113,7 +113,9 @@ bool BeingDebugged() {
 
   // This process is being debugged if the P_TRACED flag is set.
   is_set = true;
-#if defined(OS_FREEBSD)
+#if defined(OS_DRAGONFLY)
+  being_debugged = (info->kp_flags & P_TRACED) != 0;
+#elif defined(OS_FREEBSD)
   being_debugged = (info->ki_flag & P_TRACED) != 0;
 #elif defined(OS_BSD)
   being_debugged = (info->p_flag & P_TRACED) != 0;
