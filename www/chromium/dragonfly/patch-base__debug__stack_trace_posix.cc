--- base/debug/stack_trace_posix.cc.orig	2014-10-10 09:15:29 UTC
+++ base/debug/stack_trace_posix.cc
@@ -745,7 +745,9 @@
   // NOTE: This code MUST be async-signal safe (it's used by in-process
   // stack dumping signal handler). NO malloc or stdio is allowed here.
 
-#if !defined(__UCLIBC__)
+#if defined(__DragonFly__)
+  count_ = 0;
+#elif !defined(__UCLIBC__)
   // Though the backtrace API man page does not list any possible negative
   // return values, we take no chance.
   count_ = base::saturated_cast<size_t>(backtrace(trace_, arraysize(trace_)));
