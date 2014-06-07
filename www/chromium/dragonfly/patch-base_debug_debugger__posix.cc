--- base/debug/debugger_posix.cc.orig	2013-07-04 03:39:53.000000000 +0000
+++ base/debug/debugger_posix.cc
@@ -131,7 +131,11 @@ bool BeingDebugged() {
   // This process is being debugged if the P_TRACED flag is set.
   is_set = true;
 #if defined(OS_FREEBSD)
+#  ifdef __DragonFly__
+  being_debugged = (info.kp_flags & P_TRACED) != 0;
+#  else
   being_debugged = (info.ki_flag & P_TRACED) != 0;
+#  endif
 #elif defined(OS_BSD)
   being_debugged = (info.p_flag & P_TRACED) != 0;
 #else
