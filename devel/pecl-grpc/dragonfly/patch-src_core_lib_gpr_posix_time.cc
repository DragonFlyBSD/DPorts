--- src/core/lib/gpr/posix/time.cc.orig	2023-10-09 21:34:56 UTC
+++ src/core/lib/gpr/posix/time.cc
@@ -45,7 +45,7 @@ static struct timespec timespec_from_gpr
   return rv;
 }
 
-#if _POSIX_TIMERS > 0 || defined(__OpenBSD__)
+#if _POSIX_TIMERS > 0 || defined(__OpenBSD__) || defined(__DragonFly__)
 static gpr_timespec gpr_from_timespec(struct timespec ts,
                                       gpr_clock_type clock_type) {
   //
