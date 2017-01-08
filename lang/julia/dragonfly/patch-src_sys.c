--- src/sys.c.orig	2016-09-20 05:54:22.000000000 +0300
+++ src/sys.c
@@ -723,7 +723,7 @@ JL_DLLEXPORT size_t jl_maxrss(void)
     GetProcessMemoryInfo( GetCurrentProcess( ), &counter, sizeof(counter) );
     return (size_t)counter.PeakWorkingSetSize;
 
-#elif defined(_OS_LINUX_) || defined(_OS_DARWIN_) || defined (_OS_FREEBSD_)
+#elif defined(_OS_LINUX_) || defined(_OS_DARWIN_) || defined (_OS_FREEBSD_) || defined(_OS_DRAGONFLY_)
     struct rusage rusage;
     getrusage( RUSAGE_SELF, &rusage );
 
