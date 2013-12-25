--- src/Timer.cpp.orig	2013-10-29 01:24:28.000000000 +0000
+++ src/Timer.cpp
@@ -25,6 +25,8 @@
 #if defined(_WIN32) 
     #define WIN32_LEAN_AND_MEAN
     #include <windows.h>
+#elif defined(__DragonFly__)
+    #include <time.h>
 #elif defined(__APPLE__)
     #include <mach/mach_time.h>
 #elif defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__)
@@ -62,7 +64,9 @@ namespace Rcpp{
         return time * (info.numer / info.denom);
     }
 
-#elif defined(linux) || defined(__linux) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) || defined(__GNU__)
+#elif defined(linux) || defined(__linux) || defined(__FreeBSD__) \
+   || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__GLIBC__) \
+   || defined(__GNU__) || defined(__DragonFly__)
 
     static const nanotime_t nanoseconds_in_second = static_cast<nanotime_t>(1000000000.0);
     
