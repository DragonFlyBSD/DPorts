--- gnuradio-runtime/include/gnuradio/high_res_timer.h.orig	2019-03-09 13:28:14 UTC
+++ gnuradio-runtime/include/gnuradio/high_res_timer.h
@@ -34,7 +34,7 @@
     #define GNURADIO_HRT_USE_QUERY_PERFORMANCE_COUNTER
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
     #define GNURADIO_HRT_USE_MACH_ABSOLUTE_TIME
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     #define GNURADIO_HRT_USE_CLOCK_GETTIME
     #include <ctime>
 #else
