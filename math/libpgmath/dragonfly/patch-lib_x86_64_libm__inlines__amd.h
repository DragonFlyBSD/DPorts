--- lib/x86_64/libm_inlines_amd.h.intermediate	2019-12-29 06:42:40.000000000 +0000
+++ lib/x86_64/libm_inlines_amd.h
@@ -283,7 +283,7 @@ raise_fpsw_flags(int flags)
 {
 #if defined(DONOTDEFINE_WINDOWS)
   _mm_setcsr(_mm_getcsr() | flags);
-#elif defined(linux) || defined(__FreeBSD__)
+#elif defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)
   unsigned int cw;
   /* Get the current floating-point control/status word */
   asm volatile("STMXCSR %0" : "=m"(cw));
