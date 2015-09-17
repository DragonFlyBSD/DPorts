--- coda-src/vice/srvproc2.cc.orig	2007-08-01 21:32:29.000000000 +0300
+++ coda-src/vice/srvproc2.cc
@@ -869,7 +869,9 @@ static void SetVolumeStats(ViceStatistic
 #endif
 
 #include <kvm.h>
+#ifndef __DragonFly__
 #include <sys/dkstat.h>
+#endif
 #if defined(__NetBSD_Version__) && (__NetBSD_Version__ >= 104250000)
 #include <sys/sched.h>
 #endif
