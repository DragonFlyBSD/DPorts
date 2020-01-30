--- libs/minisat/System.cc.orig	2019-08-26 08:37:53 UTC
+++ libs/minisat/System.cc
@@ -77,7 +77,7 @@ double Minisat::memUsedPeak(bool strictl
     double peak = memReadPeak() / (double)1024;
     return peak == 0 && !strictlyPeak ? memUsed() : peak; }
 
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__gnu_hurd__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__gnu_hurd__) || defined(__DragonFly__)
 
 double Minisat::memUsed() {
     struct rusage ru;
