--- src/video_out/video_out_vaapi.c.orig	2020-11-19 10:30:37 UTC
+++ src/video_out/video_out_vaapi.c
@@ -115,7 +115,8 @@
 // Linux select() changes its timeout parameter upon return to contain
 // the remaining time. Most other unixen leave it unchanged or undefined.
 #define SELECT_SETS_REMAINING
-#elif defined(__FreeBSD__) || defined(__sun__) || (defined(__MACH__) && defined(__APPLE__))
+#elif defined(__FreeBSD__) || defined(__sun__) || (defined(__MACH__) && defined(__APPLE__)) || \
+	defined(__DragonFly__)
 #define USE_NANOSLEEP
 #elif defined(HAVE_PTHREADS) && defined(sgi)
 // SGI pthreads has a bug when using pthreads+signals+nanosleep,
