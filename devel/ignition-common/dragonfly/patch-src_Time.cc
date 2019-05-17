Work around missing clock_nanosleep()

--- src/Time.cc.orig	2018-11-05 23:01:49 UTC
+++ src/Time.cc
@@ -203,7 +203,7 @@ Time Time::Sleep(const common::Time &_ti
     result.nsec = 0;
 #else
     struct timespec remainder;
-# ifdef __MACH__
+# if defined(__MACH__) || defined(__DragonFly__)
     if (nanosleep(&interval, &remainder) == -1)
     {
       result.sec = remainder.tv_sec;
