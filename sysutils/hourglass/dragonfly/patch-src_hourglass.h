--- src/hourglass.h.intermediate	2016-08-16 16:59:33 UTC
+++ src/hourglass.h
@@ -39,7 +39,7 @@
 #include <assert.h>
 #include <stdint.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/cpufunc.h>
 #include <machine/atomic.h>
 #endif
@@ -216,7 +216,7 @@ struct trace_rec_t {
   cycle_time start, end, gap;   // rjd -- added thread id dependent gap for SMP
 };
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 
 #ifdef CPU_586
 /*
