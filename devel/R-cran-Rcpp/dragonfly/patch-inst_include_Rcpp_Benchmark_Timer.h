--- inst/include/Rcpp/Benchmark/Timer.h.orig	2015-08-25 13:46:53.000000000 +0300
+++ inst/include/Rcpp/Benchmark/Timer.h
@@ -34,7 +34,7 @@
     #include <windows.h>
 #elif defined(__APPLE__)
     #include <mach/mach_time.h>
-#elif defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__) || defined(__CYGWIN__)
+#elif defined(linux) || defined(__linux) || defined(__DragonFly__)|| defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__) || defined(__CYGWIN__)
     #include <time.h>
 #elif defined(sun) || defined(__sun) || defined(_AIX)
     #include <sys/time.h>
@@ -70,7 +70,7 @@ namespace Rcpp{
         return time * (info.numer / info.denom);
     }
 
-#elif defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__) || defined(__CYGWIN__)
+#elif defined(linux) || defined(__linux) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__) || defined(__CYGWIN__)
 
     static const nanotime_t nanoseconds_in_second = static_cast<nanotime_t>(1000000000.0);
 
