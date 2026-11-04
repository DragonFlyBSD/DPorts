--- src/util/virhostmem.c.orig	2026-10-01 09:02:52 UTC
+++ src/util/virhostmem.c
@@ -24,7 +24,7 @@
 #include <fcntl.h>
 #include <unistd.h>
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 # include <sys/time.h>
 # include <sys/types.h>
 # include <sys/sysctl.h>
@@ -52,7 +52,7 @@
 static unsigned long long virHostTHPPMDSize; /* in kibibytes */
 static virOnceControl virHostMemGetTHPSizeOnce = VIR_ONCE_CONTROL_INITIALIZER;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define BSD_MEMORY_STATS_ALL 4
 
 static int
@@ -293,7 +293,7 @@
 
         return ret;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     return virHostMemGetStatsFreeBSD(params, nparams);
 #else
     virReportError(VIR_ERR_NO_SUPPORT, "%s",
