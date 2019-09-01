--- gnuradio-runtime/lib/thread/thread.cc.orig	2019-08-09 21:40:34 UTC
+++ gnuradio-runtime/lib/thread/thread.cc
@@ -147,7 +147,7 @@ void set_thread_name(gr_thread_t thread,
 
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__) ||     \
     defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || \
-    defined(__NetBSD__)
+    defined(__NetBSD__) || defined(__DragonFly__)
 
 namespace gr {
 namespace thread {
